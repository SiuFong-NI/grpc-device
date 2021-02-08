<%
import re
import common_helpers
import handler_helpers
attributes = data['attributes']
config = data['config']
enums = data['enums']
functions = data['functions']

driver_name_pascal = common_helpers.driver_name_to_pascal(data["config"]["driver_name"])
driver_name_caps_underscore = common_helpers.driver_name_add_underscore(data["config"]["driver_name"])
module_name = data["config"]["module_name"]
  
driver_name_camel = common_helpers.pascal_to_camel(driver_name_pascal)
driver_prefix = module_name
c_function_prefix = data["config"]["c_function_prefix"] 
linux_library_name = config['library_info']['Linux']['64bit']['name']
linux_library_name = "./" + linux_library_name + '.so'
windows_libary_name = config['library_info']['Windows']['64bit']['name']

driver_full_namespace = common_helpers.get_service_namespace(driver_name_caps_underscore)
driver_namespaces = driver_full_namespace.split(".")
reversed_driver_namespaces = driver_namespaces.copy()
reversed_driver_namespaces.reverse()

library_name = driver_name_pascal
service_name = driver_name_pascal + "Service"
%>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the ${driver_name_camel} Metadata
//---------------------------------------------------------------------
#include <thread>
#include <sstream>
#include <fstream>
#include <iostream>
#include <${driver_name_pascal.lower()}_service.h>
#include <atomic>

## Namespaces
% for namespace in driver_namespaces:
namespace ${namespace}
{
% endfor
  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  using internal = ni::hardware::grpc::internal;
## Function pointers to driver library
% for method_name in functions:
<%
    f = functions[method_name]
    if not handler_helpers.should_gen_function_pointer(f):
      continue
    parameters = f['parameters']
    handler_helpers.sanitize_names(parameters)
%>\
% if not common_helpers.has_array_parameter(f):
  using ${c_function_prefix}${method_name}Ptr = int (*)(${handler_helpers.create_params(parameters, driver_name_pascal)});
% endif
%endfor

  #if defined(_MSC_VER)
    static const char* driver_api_library_name = "${windows_libary_name}";
  #else
    static const char* driver_api_library_name = "${linux_library_name}";
  #endif

## Constructors
  ${service_name}::${service_name}(internal::SharedLibrary* shared_library, internal::SessionRepository* session_repository)
      : shared_library_(shared_library), session_repository_(session_repository) 
  {
    shared_library_->set_library_name(driver_api_library_name);
  }

% for method_name in functions:
<%
    f = functions[method_name]
    if not common_helpers.should_gen_service_handler(f):
      continue
    parameters = f['parameters']
    handler_helpers.sanitize_names(parameters)
    input_parameters = [p for p in parameters if common_helpers.is_input_parameter(p)]
    output_parameters = [p for p in parameters if common_helpers.is_output_parameter(p)]
%>\
  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  grpc::Status ${service_name}::${method_name}(grpc::ServerContext* context, const ${method_name}Request* request, ${method_name}Response* response)
  {
% if common_helpers.has_array_parameter(f):
    return grpc::Status(grpc::StatusCode::NOT_IMPLEMENTED, "TODO: This server handler has not been implemented.");
  }

<% continue %>
% endif
    shared_library_->load();
    if (!shared_library_->is_loaded()) {
      std::string message("The library could not be loaded: ");
      message += driver_api_library_name;
      return grpc::Status(grpc::StatusCode::NOT_FOUND, message.c_str());
    }
    auto ${common_helpers.pascal_to_snake(method_name)}_function = reinterpret_cast<${c_function_prefix}${method_name}Ptr>(shared_library_->get_function_pointer("${c_function_prefix}${method_name}"));
    if (${common_helpers.pascal_to_snake(method_name)}_function == nullptr) {
      return grpc::Status(grpc::StatusCode::NOT_FOUND, "The requested function was not found: ${c_function_prefix}${method_name}");
    }

%for parameter in input_parameters:
    ${handler_helpers.get_c_type(parameter, driver_name_pascal)} ${common_helpers.camel_to_snake(parameter['cppName'])} = ${handler_helpers.get_request_value(parameter, driver_name_pascal)}
%endfor
%for parameter in output_parameters:
    ${handler_helpers.get_c_type(parameter, driver_name_pascal)} ${common_helpers.camel_to_snake(parameter['cppName'])};
%endfor
    auto status = ${common_helpers.pascal_to_snake(method_name)}_function(${handler_helpers.create_args(parameters)});
    response->set_status(status);
%if output_parameters:
    if (status == 0) {
%for parameter in output_parameters:
## TODO: Figure out how to format ViSession responses. Look at Cifra's example for an idea.
      response->set_${common_helpers.camel_to_snake(parameter['cppName'])}(${common_helpers.camel_to_snake(parameter['cppName'])});
%endfor
    }
%endif
    return grpc::Status::OK;
  }

% endfor
% for namespace in reversed_driver_namespaces:
} // namespace ${namespace}
% endfor
