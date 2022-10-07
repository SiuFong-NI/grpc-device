
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-FAKE.
//---------------------------------------------------------------------
#include "nifake_client.h"

#include <grpcpp/grpcpp.h>

#include <nifake.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nifake_grpc::experimental::client {

AbortResponse
abort(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = AbortRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = AbortResponse{};

  raise_if_error(
      stub->Abort(&context, request, &response),
      context);

  return response;
}

AcceptListOfDurationsInSecondsResponse
accept_list_of_durations_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& delays)
{
  ::grpc::ClientContext context;

  auto request = AcceptListOfDurationsInSecondsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(delays, request.mutable_delays());

  auto response = AcceptListOfDurationsInSecondsResponse{};

  raise_if_error(
      stub->AcceptListOfDurationsInSeconds(&context, request, &response),
      context);

  return response;
}

AcceptViSessionArrayResponse
accept_vi_session_array(const StubPtr& stub, const pb::uint32& session_count, const std::vector<nidevice_grpc::Session>& session_array)
{
  ::grpc::ClientContext context;

  auto request = AcceptViSessionArrayRequest{};
  request.set_session_count(session_count);
  copy_array(session_array, request.mutable_session_array());

  auto response = AcceptViSessionArrayResponse{};

  raise_if_error(
      stub->AcceptViSessionArray(&context, request, &response),
      context);

  return response;
}

AcceptViUInt32ArrayResponse
accept_vi_uint32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::uint32>& u_int32_array)
{
  ::grpc::ClientContext context;

  auto request = AcceptViUInt32ArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(u_int32_array, request.mutable_u_int32_array());

  auto response = AcceptViUInt32ArrayResponse{};

  raise_if_error(
      stub->AcceptViUInt32Array(&context, request, &response),
      context);

  return response;
}

BoolArrayInputFunctionResponse
bool_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements, const std::vector<bool>& an_array)
{
  ::grpc::ClientContext context;

  auto request = BoolArrayInputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);
  copy_array(an_array, request.mutable_an_array());

  auto response = BoolArrayInputFunctionResponse{};

  raise_if_error(
      stub->BoolArrayInputFunction(&context, request, &response),
      context);

  return response;
}

BoolArrayOutputFunctionResponse
bool_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements)
{
  ::grpc::ClientContext context;

  auto request = BoolArrayOutputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);

  auto response = BoolArrayOutputFunctionResponse{};

  raise_if_error(
      stub->BoolArrayOutputFunction(&context, request, &response),
      context);

  return response;
}

CloseResponse
close(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CloseRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CloseResponse{};

  raise_if_error(
      stub->Close(&context, request, &response),
      context);

  return response;
}

CloseExtCalResponse
close_ext_cal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& action)
{
  ::grpc::ClientContext context;

  auto request = CloseExtCalRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_action(action);

  auto response = CloseExtCalResponse{};

  raise_if_error(
      stub->CloseExtCal(&context, request, &response),
      context);

  return response;
}

CommandWithReservedParamResponse
command_with_reserved_param(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CommandWithReservedParamRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CommandWithReservedParamResponse{};

  raise_if_error(
      stub->CommandWithReservedParam(&context, request, &response),
      context);

  return response;
}

Control4022Response
control4022(const StubPtr& stub, const pb::string& resource_name, const pb::int32& configuration)
{
  ::grpc::ClientContext context;

  auto request = Control4022Request{};
  request.set_resource_name(resource_name);
  request.set_configuration(configuration);

  auto response = Control4022Response{};

  raise_if_error(
      stub->Control4022(&context, request, &response),
      context);

  return response;
}

CreateConfigurationListResponse
create_configuration_list(const StubPtr& stub, const std::vector<NiFakeAttribute>& list_attribute_ids)
{
  ::grpc::ClientContext context;

  auto request = CreateConfigurationListRequest{};
  copy_array(list_attribute_ids, request.mutable_list_attribute_ids());

  auto response = CreateConfigurationListResponse{};

  raise_if_error(
      stub->CreateConfigurationList(&context, request, &response),
      context);

  return response;
}

DoubleAllTheNumsResponse
double_all_the_nums(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& numbers)
{
  ::grpc::ClientContext context;

  auto request = DoubleAllTheNumsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(numbers, request.mutable_numbers());

  auto response = DoubleAllTheNumsResponse{};

  raise_if_error(
      stub->DoubleAllTheNums(&context, request, &response),
      context);

  return response;
}

EnumArrayOutputFunctionResponse
enum_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements)
{
  ::grpc::ClientContext context;

  auto request = EnumArrayOutputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);

  auto response = EnumArrayOutputFunctionResponse{};

  raise_if_error(
      stub->EnumArrayOutputFunction(&context, request, &response),
      context);

  return response;
}

EnumInputFunctionWithDefaultsResponse
enum_input_function_with_defaults(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<Turtle, pb::int32>& a_turtle)
{
  ::grpc::ClientContext context;

  auto request = EnumInputFunctionWithDefaultsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  const auto a_turtle_ptr = a_turtle.get_if<Turtle>();
  const auto a_turtle_raw_ptr = a_turtle.get_if<pb::int32>();
  if (a_turtle_ptr) {
    request.set_a_turtle(*a_turtle_ptr);
  }
  else if (a_turtle_raw_ptr) {
    request.set_a_turtle_raw(*a_turtle_raw_ptr);
  }

  auto response = EnumInputFunctionWithDefaultsResponse{};

  raise_if_error(
      stub->EnumInputFunctionWithDefaults(&context, request, &response),
      context);

  return response;
}

ExportAttributeConfigurationBufferResponse
export_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ExportAttributeConfigurationBufferRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ExportAttributeConfigurationBufferResponse{};

  raise_if_error(
      stub->ExportAttributeConfigurationBuffer(&context, request, &response),
      context);

  return response;
}

FetchWaveformResponse
fetch_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_samples)
{
  ::grpc::ClientContext context;

  auto request = FetchWaveformRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_samples(number_of_samples);

  auto response = FetchWaveformResponse{};

  raise_if_error(
      stub->FetchWaveform(&context, request, &response),
      context);

  return response;
}

GetABooleanResponse
get_a_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetABooleanRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetABooleanResponse{};

  raise_if_error(
      stub->GetABoolean(&context, request, &response),
      context);

  return response;
}

GetANumberResponse
get_a_number(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetANumberRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetANumberResponse{};

  raise_if_error(
      stub->GetANumber(&context, request, &response),
      context);

  return response;
}

GetAStringOfFixedMaximumSizeResponse
get_a_string_of_fixed_maximum_size(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetAStringOfFixedMaximumSizeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetAStringOfFixedMaximumSizeResponse{};

  raise_if_error(
      stub->GetAStringOfFixedMaximumSize(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceStringResponse
get_an_ivi_dance_string(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceStringRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetAnIviDanceStringResponse{};

  raise_if_error(
      stub->GetAnIviDanceString(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistArrayResponse
get_an_ivi_dance_with_a_twist_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& a_string)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_a_string(a_string);

  auto response = GetAnIviDanceWithATwistArrayResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistArray(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistArrayOfCustomTypeResponse
get_an_ivi_dance_with_a_twist_array_of_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistArrayOfCustomTypeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetAnIviDanceWithATwistArrayOfCustomTypeResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistArrayOfCustomType(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistArrayWithInputArrayResponse
get_an_ivi_dance_with_a_twist_array_with_input_array(const StubPtr& stub, const std::vector<pb::int32>& data_in)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistArrayWithInputArrayRequest{};
  copy_array(data_in, request.mutable_data_in());

  auto response = GetAnIviDanceWithATwistArrayWithInputArrayResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistArrayWithInputArray(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistByteArrayResponse
get_an_ivi_dance_with_a_twist_byte_array(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistByteArrayRequest{};

  auto response = GetAnIviDanceWithATwistByteArrayResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistByteArray(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistStringResponse
get_an_ivi_dance_with_a_twist_string(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistStringRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetAnIviDanceWithATwistStringResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistString(&context, request, &response),
      context);

  return response;
}

GetAnIviDanceWithATwistStringStrlenBugResponse
get_an_ivi_dance_with_a_twist_string_strlen_bug(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = GetAnIviDanceWithATwistStringStrlenBugRequest{};

  auto response = GetAnIviDanceWithATwistStringStrlenBugResponse{};

  raise_if_error(
      stub->GetAnIviDanceWithATwistStringStrlenBug(&context, request, &response),
      context);

  return response;
}

GetArraySizeForCustomCodeResponse
get_array_size_for_custom_code(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetArraySizeForCustomCodeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetArraySizeForCustomCodeResponse{};

  raise_if_error(
      stub->GetArraySizeForCustomCode(&context, request, &response),
      context);

  return response;
}

GetArrayUsingIviDanceResponse
get_array_using_ivi_dance(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetArrayUsingIviDanceRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetArrayUsingIviDanceResponse{};

  raise_if_error(
      stub->GetArrayUsingIviDance(&context, request, &response),
      context);

  return response;
}

GetArrayViUInt8WithEnumResponse
get_array_vi_uint8_with_enum(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len)
{
  ::grpc::ClientContext context;

  auto request = GetArrayViUInt8WithEnumRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_array_len(array_len);

  auto response = GetArrayViUInt8WithEnumResponse{};

  raise_if_error(
      stub->GetArrayViUInt8WithEnum(&context, request, &response),
      context);

  return response;
}

GetAttributeViBooleanResponse
get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViBooleanRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViBooleanResponse{};

  raise_if_error(
      stub->GetAttributeViBoolean(&context, request, &response),
      context);

  return response;
}

GetAttributeViInt32Response
get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViInt32Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViInt32Response{};

  raise_if_error(
      stub->GetAttributeViInt32(&context, request, &response),
      context);

  return response;
}

GetAttributeViInt64Response
get_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViInt64Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViInt64Response{};

  raise_if_error(
      stub->GetAttributeViInt64(&context, request, &response),
      context);

  return response;
}

GetAttributeViReal64Response
get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViReal64Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViReal64Response{};

  raise_if_error(
      stub->GetAttributeViReal64(&context, request, &response),
      context);

  return response;
}

GetAttributeViSessionResponse
get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViSessionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViSessionResponse{};

  raise_if_error(
      stub->GetAttributeViSession(&context, request, &response),
      context);

  return response;
}

GetAttributeViStringResponse
get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViStringRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeViStringResponse{};

  raise_if_error(
      stub->GetAttributeViString(&context, request, &response),
      context);

  return response;
}

GetBitfieldAsEnumArrayResponse
get_bitfield_as_enum_array(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = GetBitfieldAsEnumArrayRequest{};

  auto response = GetBitfieldAsEnumArrayResponse{};

  raise_if_error(
      stub->GetBitfieldAsEnumArray(&context, request, &response),
      context);

  return response;
}

GetCalDateAndTimeResponse
get_cal_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& cal_type)
{
  ::grpc::ClientContext context;

  auto request = GetCalDateAndTimeRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_cal_type(cal_type);

  auto response = GetCalDateAndTimeResponse{};

  raise_if_error(
      stub->GetCalDateAndTime(&context, request, &response),
      context);

  return response;
}

GetCalIntervalResponse
get_cal_interval(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetCalIntervalRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetCalIntervalResponse{};

  raise_if_error(
      stub->GetCalInterval(&context, request, &response),
      context);

  return response;
}

GetCustomTypeResponse
get_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetCustomTypeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetCustomTypeResponse{};

  raise_if_error(
      stub->GetCustomType(&context, request, &response),
      context);

  return response;
}

GetCustomTypeArrayResponse
get_custom_type_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements)
{
  ::grpc::ClientContext context;

  auto request = GetCustomTypeArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);

  auto response = GetCustomTypeArrayResponse{};

  raise_if_error(
      stub->GetCustomTypeArray(&context, request, &response),
      context);

  return response;
}

GetEnumValueResponse
get_enum_value(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetEnumValueRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetEnumValueResponse{};

  raise_if_error(
      stub->GetEnumValue(&context, request, &response),
      context);

  return response;
}

GetViInt32ArrayResponse
get_vi_int32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len)
{
  ::grpc::ClientContext context;

  auto request = GetViInt32ArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_array_len(array_len);

  auto response = GetViInt32ArrayResponse{};

  raise_if_error(
      stub->GetViInt32Array(&context, request, &response),
      context);

  return response;
}

GetViUInt32ArrayResponse
get_vi_uint32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len)
{
  ::grpc::ClientContext context;

  auto request = GetViUInt32ArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_array_len(array_len);

  auto response = GetViUInt32ArrayResponse{};

  raise_if_error(
      stub->GetViUInt32Array(&context, request, &response),
      context);

  return response;
}

GetViUInt8Response
get_vi_uint8(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetViUInt8Request{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetViUInt8Response{};

  raise_if_error(
      stub->GetViUInt8(&context, request, &response),
      context);

  return response;
}

ImportAttributeConfigurationBufferResponse
import_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& configuration)
{
  ::grpc::ClientContext context;

  auto request = ImportAttributeConfigurationBufferRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_configuration(configuration);

  auto response = ImportAttributeConfigurationBufferResponse{};

  raise_if_error(
      stub->ImportAttributeConfigurationBuffer(&context, request, &response),
      context);

  return response;
}

InitExtCalResponse
init_ext_cal(const StubPtr& stub, const pb::string& resource_name, const pb::string& calibration_password)
{
  ::grpc::ClientContext context;

  auto request = InitExtCalRequest{};
  request.set_resource_name(resource_name);
  request.set_calibration_password(calibration_password);

  auto response = InitExtCalResponse{};

  raise_if_error(
      stub->InitExtCal(&context, request, &response),
      context);

  return response;
}

InitWithOptionsResponse
init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const pb::string& option_string)
{
  ::grpc::ClientContext context;

  auto request = InitWithOptionsRequest{};
  request.set_resource_name(resource_name);
  request.set_id_query(id_query);
  request.set_reset_device(reset_device);
  request.set_option_string(option_string);

  auto response = InitWithOptionsResponse{};

  raise_if_error(
      stub->InitWithOptions(&context, request, &response),
      context);

  return response;
}

InitWithVarArgsResponse
init_with_var_args(const StubPtr& stub, const pb::string& resource_name, const std::vector<StringAndTurtle>& name_and_turtle)
{
  ::grpc::ClientContext context;

  auto request = InitWithVarArgsRequest{};
  request.set_resource_name(resource_name);
  copy_array(name_and_turtle, request.mutable_name_and_turtle());

  auto response = InitWithVarArgsResponse{};

  raise_if_error(
      stub->InitWithVarArgs(&context, request, &response),
      context);

  return response;
}

MethodUsingEnumWithGrpcNameValuesResponse
method_using_enum_with_grpc_name_values(const StubPtr& stub, const simple_variant<EnumWithGrpcNameValues, pb::int32>& using_enum)
{
  ::grpc::ClientContext context;

  auto request = MethodUsingEnumWithGrpcNameValuesRequest{};
  const auto using_enum_ptr = using_enum.get_if<EnumWithGrpcNameValues>();
  const auto using_enum_raw_ptr = using_enum.get_if<pb::int32>();
  if (using_enum_ptr) {
    request.set_using_enum(*using_enum_ptr);
  }
  else if (using_enum_raw_ptr) {
    request.set_using_enum_raw(*using_enum_raw_ptr);
  }

  auto response = MethodUsingEnumWithGrpcNameValuesResponse{};

  raise_if_error(
      stub->MethodUsingEnumWithGrpcNameValues(&context, request, &response),
      context);

  return response;
}

MethodUsingWholeAndFractionalNumbersResponse
method_using_whole_and_fractional_numbers(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = MethodUsingWholeAndFractionalNumbersRequest{};

  auto response = MethodUsingWholeAndFractionalNumbersResponse{};

  raise_if_error(
      stub->MethodUsingWholeAndFractionalNumbers(&context, request, &response),
      context);

  return response;
}

MethodUsingWholeMappedNumbersResponse
method_using_whole_mapped_numbers(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = MethodUsingWholeMappedNumbersRequest{};

  auto response = MethodUsingWholeMappedNumbersResponse{};

  raise_if_error(
      stub->MethodUsingWholeMappedNumbers(&context, request, &response),
      context);

  return response;
}

MethodWithGetLastErrorParamResponse
method_with_get_last_error_param(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = MethodWithGetLastErrorParamRequest{};

  auto response = MethodWithGetLastErrorParamResponse{};

  raise_if_error(
      stub->MethodWithGetLastErrorParam(&context, request, &response),
      context);

  return response;
}

MethodWithGrpcFieldNumberResponse
method_with_grpc_field_number(const StubPtr& stub, const pb::int32& attribute_value)
{
  ::grpc::ClientContext context;

  auto request = MethodWithGrpcFieldNumberRequest{};
  request.set_attribute_value(attribute_value);

  auto response = MethodWithGrpcFieldNumberResponse{};

  raise_if_error(
      stub->MethodWithGrpcFieldNumber(&context, request, &response),
      context);

  return response;
}

MethodWithGrpcOnlyParamResponse
method_with_grpc_only_param(const StubPtr& stub, const pb::int32& simple_param)
{
  ::grpc::ClientContext context;

  auto request = MethodWithGrpcOnlyParamRequest{};
  request.set_simple_param(simple_param);

  auto response = MethodWithGrpcOnlyParamResponse{};

  raise_if_error(
      stub->MethodWithGrpcOnlyParam(&context, request, &response),
      context);

  return response;
}

MultipleArrayTypesResponse
multiple_array_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& output_array_size, const std::vector<double>& input_array_of_floats, const std::vector<pb::int32>& input_array_of_integers)
{
  ::grpc::ClientContext context;

  auto request = MultipleArrayTypesRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_output_array_size(output_array_size);
  copy_array(input_array_of_floats, request.mutable_input_array_of_floats());
  copy_array(input_array_of_integers, request.mutable_input_array_of_integers());

  auto response = MultipleArrayTypesResponse{};

  raise_if_error(
      stub->MultipleArrayTypes(&context, request, &response),
      context);

  return response;
}

MultipleArraysSameSizeResponse
multiple_arrays_same_size(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& values1, const std::vector<double>& values2, const std::vector<double>& values3, const std::vector<double>& values4)
{
  ::grpc::ClientContext context;

  auto request = MultipleArraysSameSizeRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(values1, request.mutable_values1());
  copy_array(values2, request.mutable_values2());
  copy_array(values3, request.mutable_values3());
  copy_array(values4, request.mutable_values4());

  auto response = MultipleArraysSameSizeResponse{};

  raise_if_error(
      stub->MultipleArraysSameSize(&context, request, &response),
      context);

  return response;
}

MultipleArraysSameSizeWithOptionalResponse
multiple_arrays_same_size_with_optional(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& values1, const std::vector<double>& values2, const std::vector<double>& values3, const std::vector<double>& values4, const std::vector<FakeCustomStruct>& values5)
{
  ::grpc::ClientContext context;

  auto request = MultipleArraysSameSizeWithOptionalRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(values1, request.mutable_values1());
  copy_array(values2, request.mutable_values2());
  copy_array(values3, request.mutable_values3());
  copy_array(values4, request.mutable_values4());
  copy_array(values5, request.mutable_values5());

  auto response = MultipleArraysSameSizeWithOptionalResponse{};

  raise_if_error(
      stub->MultipleArraysSameSizeWithOptional(&context, request, &response),
      context);

  return response;
}

OneInputFunctionResponse
one_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& a_number)
{
  ::grpc::ClientContext context;

  auto request = OneInputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_a_number(a_number);

  auto response = OneInputFunctionResponse{};

  raise_if_error(
      stub->OneInputFunction(&context, request, &response),
      context);

  return response;
}

ParametersAreMultipleTypesResponse
parameters_are_multiple_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const bool& a_boolean, const pb::int32& an_int32, const pb::int64& an_int64, const simple_variant<Turtle, pb::int32>& an_int_enum, const double& a_float, const simple_variant<FloatEnum, double>& a_float_enum, const pb::string& a_string)
{
  ::grpc::ClientContext context;

  auto request = ParametersAreMultipleTypesRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_a_boolean(a_boolean);
  request.set_an_int32(an_int32);
  request.set_an_int64(an_int64);
  const auto an_int_enum_ptr = an_int_enum.get_if<Turtle>();
  const auto an_int_enum_raw_ptr = an_int_enum.get_if<pb::int32>();
  if (an_int_enum_ptr) {
    request.set_an_int_enum(*an_int_enum_ptr);
  }
  else if (an_int_enum_raw_ptr) {
    request.set_an_int_enum_raw(*an_int_enum_raw_ptr);
  }
  request.set_a_float(a_float);
  const auto a_float_enum_ptr = a_float_enum.get_if<FloatEnum>();
  const auto a_float_enum_raw_ptr = a_float_enum.get_if<double>();
  if (a_float_enum_ptr) {
    request.set_a_float_enum_mapped(*a_float_enum_ptr);
  }
  else if (a_float_enum_raw_ptr) {
    request.set_a_float_enum_raw(*a_float_enum_raw_ptr);
  }
  request.set_a_string(a_string);

  auto response = ParametersAreMultipleTypesResponse{};

  raise_if_error(
      stub->ParametersAreMultipleTypes(&context, request, &response),
      context);

  return response;
}

PoorlyNamedSimpleFunctionResponse
poorly_named_simple_function(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = PoorlyNamedSimpleFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = PoorlyNamedSimpleFunctionResponse{};

  raise_if_error(
      stub->PoorlyNamedSimpleFunction(&context, request, &response),
      context);

  return response;
}

ReadResponse
read(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& maximum_time)
{
  ::grpc::ClientContext context;

  auto request = ReadRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_maximum_time(maximum_time);

  auto response = ReadResponse{};

  raise_if_error(
      stub->Read(&context, request, &response),
      context);

  return response;
}

ReadDataWithInOutIviTwistResponse
read_data_with_in_out_ivi_twist(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = ReadDataWithInOutIviTwistRequest{};

  auto response = ReadDataWithInOutIviTwistResponse{};

  raise_if_error(
      stub->ReadDataWithInOutIviTwist(&context, request, &response),
      context);

  return response;
}

ReadDataWithMultipleIviTwistParamSetsResponse
read_data_with_multiple_ivi_twist_param_sets(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = ReadDataWithMultipleIviTwistParamSetsRequest{};

  auto response = ReadDataWithMultipleIviTwistParamSetsResponse{};

  raise_if_error(
      stub->ReadDataWithMultipleIviTwistParamSets(&context, request, &response),
      context);

  return response;
}

ReadFromChannelResponse
read_from_channel(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const pb::int32& maximum_time)
{
  ::grpc::ClientContext context;

  auto request = ReadFromChannelRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_channel_name(channel_name);
  request.set_maximum_time(maximum_time);

  auto response = ReadFromChannelResponse{};

  raise_if_error(
      stub->ReadFromChannel(&context, request, &response),
      context);

  return response;
}

ReturnANumberAndAStringResponse
return_a_number_and_a_string(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ReturnANumberAndAStringRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ReturnANumberAndAStringResponse{};

  raise_if_error(
      stub->ReturnANumberAndAString(&context, request, &response),
      context);

  return response;
}

ReturnDurationInSecondsResponse
return_duration_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ReturnDurationInSecondsRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ReturnDurationInSecondsResponse{};

  raise_if_error(
      stub->ReturnDurationInSeconds(&context, request, &response),
      context);

  return response;
}

ReturnListOfDurationsInSecondsResponse
return_list_of_durations_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements)
{
  ::grpc::ClientContext context;

  auto request = ReturnListOfDurationsInSecondsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);

  auto response = ReturnListOfDurationsInSecondsResponse{};

  raise_if_error(
      stub->ReturnListOfDurationsInSeconds(&context, request, &response),
      context);

  return response;
}

ReturnMultipleTypesResponse
return_multiple_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_size)
{
  ::grpc::ClientContext context;

  auto request = ReturnMultipleTypesRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_array_size(array_size);

  auto response = ReturnMultipleTypesResponse{};

  raise_if_error(
      stub->ReturnMultipleTypes(&context, request, &response),
      context);

  return response;
}

SetCustomTypeResponse
set_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi, const FakeCustomStruct& cs)
{
  ::grpc::ClientContext context;

  auto request = SetCustomTypeRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.mutable_cs()->CopyFrom(cs);

  auto response = SetCustomTypeResponse{};

  raise_if_error(
      stub->SetCustomType(&context, request, &response),
      context);

  return response;
}

SetCustomTypeArrayResponse
set_custom_type_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<FakeCustomStruct>& cs)
{
  ::grpc::ClientContext context;

  auto request = SetCustomTypeArrayRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(cs, request.mutable_cs());

  auto response = SetCustomTypeArrayResponse{};

  raise_if_error(
      stub->SetCustomTypeArray(&context, request, &response),
      context);

  return response;
}

StringValuedEnumInputFunctionWithDefaultsResponse
string_valued_enum_input_function_with_defaults(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<MobileOSNames, std::string>& a_mobile_os_name)
{
  ::grpc::ClientContext context;

  auto request = StringValuedEnumInputFunctionWithDefaultsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  const auto a_mobile_os_name_ptr = a_mobile_os_name.get_if<MobileOSNames>();
  const auto a_mobile_os_name_raw_ptr = a_mobile_os_name.get_if<std::string>();
  if (a_mobile_os_name_ptr) {
    request.set_a_mobile_os_name_mapped(*a_mobile_os_name_ptr);
  }
  else if (a_mobile_os_name_raw_ptr) {
    request.set_a_mobile_os_name_raw(*a_mobile_os_name_raw_ptr);
  }

  auto response = StringValuedEnumInputFunctionWithDefaultsResponse{};

  raise_if_error(
      stub->StringValuedEnumInputFunctionWithDefaults(&context, request, &response),
      context);

  return response;
}

TwoInputFunctionResponse
two_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& a_number, const pb::string& a_string)
{
  ::grpc::ClientContext context;

  auto request = TwoInputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_a_number(a_number);
  request.set_a_string(a_string);

  auto response = TwoInputFunctionResponse{};

  raise_if_error(
      stub->TwoInputFunction(&context, request, &response),
      context);

  return response;
}

Use64BitNumberResponse
use64_bit_number(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int64& input)
{
  ::grpc::ClientContext context;

  auto request = Use64BitNumberRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_input(input);

  auto response = Use64BitNumberResponse{};

  raise_if_error(
      stub->Use64BitNumber(&context, request, &response),
      context);

  return response;
}

UseATwoDimensionParameterResponse
use_a_two_dimension_parameter(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::int32>& array, const std::vector<pb::int32>& array_lengths)
{
  ::grpc::ClientContext context;

  auto request = UseATwoDimensionParameterRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(array, request.mutable_array());
  copy_array(array_lengths, request.mutable_array_lengths());

  auto response = UseATwoDimensionParameterResponse{};

  raise_if_error(
      stub->UseATwoDimensionParameter(&context, request, &response),
      context);

  return response;
}

ViInt16ArrayInputFunctionResponse
vi_int16_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::int32>& an_array)
{
  ::grpc::ClientContext context;

  auto request = ViInt16ArrayInputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(an_array, request.mutable_an_array());

  auto response = ViInt16ArrayInputFunctionResponse{};

  raise_if_error(
      stub->ViInt16ArrayInputFunction(&context, request, &response),
      context);

  return response;
}

ViUInt8ArrayInputFunctionResponse
vi_uint8_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements, const pb::string& an_array)
{
  ::grpc::ClientContext context;

  auto request = ViUInt8ArrayInputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);
  request.set_an_array(an_array);

  auto response = ViUInt8ArrayInputFunctionResponse{};

  raise_if_error(
      stub->ViUInt8ArrayInputFunction(&context, request, &response),
      context);

  return response;
}

ViUInt8ArrayOutputFunctionResponse
vi_uint8_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements)
{
  ::grpc::ClientContext context;

  auto request = ViUInt8ArrayOutputFunctionRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_number_of_elements(number_of_elements);

  auto response = ViUInt8ArrayOutputFunctionResponse{};

  raise_if_error(
      stub->ViUInt8ArrayOutputFunction(&context, request, &response),
      context);

  return response;
}

WriteWaveformResponse
write_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& waveform)
{
  ::grpc::ClientContext context;

  auto request = WriteWaveformRequest{};
  request.mutable_vi()->CopyFrom(vi);
  copy_array(waveform, request.mutable_waveform());

  auto response = WriteWaveformResponse{};

  raise_if_error(
      stub->WriteWaveform(&context, request, &response),
      context);

  return response;
}


} // namespace nifake_grpc::experimental::client
