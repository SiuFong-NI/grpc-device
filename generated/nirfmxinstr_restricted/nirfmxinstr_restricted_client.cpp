
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFMXINSTR-RESTRICTED.
//---------------------------------------------------------------------
#include "nirfmxinstr_restricted_client.h"

#include <grpcpp/grpcpp.h>

#include <nirfmxinstr_restricted.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nirfmxinstr_restricted_grpc::experimental::client {

ConvertForPowerUnitsUtilityResponse
convert_for_power_units_utility(const StubPtr& stub, const nidevice_grpc::Session& instrument, const double& reference_or_trigger_level_in, const pb::int32& input_power_units, const pb::int32& output_power_units, const pb::int32& terminal_configuration, const double& bandwidth)
{
  ::grpc::ClientContext context;

  auto request = ConvertForPowerUnitsUtilityRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_reference_or_trigger_level_in(reference_or_trigger_level_in);
  request.set_input_power_units(input_power_units);
  request.set_output_power_units(output_power_units);
  request.set_terminal_configuration(terminal_configuration);
  request.set_bandwidth(bandwidth);

  auto response = ConvertForPowerUnitsUtilityResponse{};

  raise_if_error(
      stub->ConvertForPowerUnitsUtility(&context, request, &response),
      context);

  return response;
}

DeleteSnapshotResponse
delete_snapshot(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& personality, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = DeleteSnapshotRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_personality(personality);
  request.set_selector_string(selector_string);

  auto response = DeleteSnapshotResponse{};

  raise_if_error(
      stub->DeleteSnapshot(&context, request, &response),
      context);

  return response;
}

GetActiveResultNameResponse
get_active_result_name(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& signal_name, const pb::uint32& signal_type)
{
  ::grpc::ClientContext context;

  auto request = GetActiveResultNameRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_signal_name(signal_name);
  request.set_signal_type(signal_type);

  auto response = GetActiveResultNameResponse{};

  raise_if_error(
      stub->GetActiveResultName(&context, request, &response),
      context);

  return response;
}

GetActiveTableNameResponse
get_active_table_name(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetActiveTableNameRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);

  auto response = GetActiveTableNameResponse{};

  raise_if_error(
      stub->GetActiveTableName(&context, request, &response),
      context);

  return response;
}

GetAttributeAuthorResponse
get_attribute_author(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeAuthorRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeAuthorResponse{};

  raise_if_error(
      stub->GetAttributeAuthor(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredF32Response
get_attribute_desired_f32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredF32Request{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredF32Response{};

  raise_if_error(
      stub->GetAttributeDesiredF32(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredF32ArrayResponse
get_attribute_desired_f32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredF32ArrayRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredF32ArrayResponse{};

  raise_if_error(
      stub->GetAttributeDesiredF32Array(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredF64Response
get_attribute_desired_f64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredF64Request{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredF64Response{};

  raise_if_error(
      stub->GetAttributeDesiredF64(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredF64ArrayResponse
get_attribute_desired_f64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredF64ArrayRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredF64ArrayResponse{};

  raise_if_error(
      stub->GetAttributeDesiredF64Array(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredI32Response
get_attribute_desired_i32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredI32Request{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredI32Response{};

  raise_if_error(
      stub->GetAttributeDesiredI32(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredI64Response
get_attribute_desired_i64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredI64Request{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredI64Response{};

  raise_if_error(
      stub->GetAttributeDesiredI64(&context, request, &response),
      context);

  return response;
}

GetAttributeDesiredStringResponse
get_attribute_desired_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attribute_id)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeDesiredStringRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_id);

  auto response = GetAttributeDesiredStringResponse{};

  raise_if_error(
      stub->GetAttributeDesiredString(&context, request, &response),
      context);

  return response;
}

GetCalibrationPlaneEnabledResponse
get_calibration_plane_enabled(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetCalibrationPlaneEnabledRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);

  auto response = GetCalibrationPlaneEnabledResponse{};

  raise_if_error(
      stub->GetCalibrationPlaneEnabled(&context, request, &response),
      context);

  return response;
}

GetCalibrationPlaneNamesResponse
get_calibration_plane_names(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetCalibrationPlaneNamesRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);

  auto response = GetCalibrationPlaneNamesResponse{};

  raise_if_error(
      stub->GetCalibrationPlaneNames(&context, request, &response),
      context);

  return response;
}

GetExternalAttenuationTableNamesResponse
get_external_attenuation_table_names(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetExternalAttenuationTableNamesRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);

  auto response = GetExternalAttenuationTableNamesResponse{};

  raise_if_error(
      stub->GetExternalAttenuationTableNames(&context, request, &response),
      context);

  return response;
}

GetForceAllTracesEnabledResponse
get_force_all_traces_enabled(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name)
{
  ::grpc::ClientContext context;

  auto request = GetForceAllTracesEnabledRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);

  auto response = GetForceAllTracesEnabledResponse{};

  raise_if_error(
      stub->GetForceAllTracesEnabled(&context, request, &response),
      context);

  return response;
}

GetInitiaitedSnapshotStringsResponse
get_initiaited_snapshot_strings(const StubPtr& stub, const nidevice_grpc::Session& instrument)
{
  ::grpc::ClientContext context;

  auto request = GetInitiaitedSnapshotStringsRequest{};
  request.mutable_instrument()->CopyFrom(instrument);

  auto response = GetInitiaitedSnapshotStringsResponse{};

  raise_if_error(
      stub->GetInitiaitedSnapshotStrings(&context, request, &response),
      context);

  return response;
}

GetLatestConfigurationSnapshotResponse
get_latest_configuration_snapshot(const StubPtr& stub, const nidevice_grpc::Session& instrument)
{
  ::grpc::ClientContext context;

  auto request = GetLatestConfigurationSnapshotRequest{};
  request.mutable_instrument()->CopyFrom(instrument);

  auto response = GetLatestConfigurationSnapshotResponse{};

  raise_if_error(
      stub->GetLatestConfigurationSnapshot(&context, request, &response),
      context);

  return response;
}

GetOpenSessionsInformationResponse
get_open_sessions_information(const StubPtr& stub, const std::string& resource_name)
{
  ::grpc::ClientContext context;

  auto request = GetOpenSessionsInformationRequest{};
  request.set_resource_name(resource_name);

  auto response = GetOpenSessionsInformationResponse{};

  raise_if_error(
      stub->GetOpenSessionsInformation(&context, request, &response),
      context);

  return response;
}

GetPrivilegeLevelResponse
get_privilege_level(const StubPtr& stub, const nidevice_grpc::Session& instrument)
{
  ::grpc::ClientContext context;

  auto request = GetPrivilegeLevelRequest{};
  request.mutable_instrument()->CopyFrom(instrument);

  auto response = GetPrivilegeLevelResponse{};

  raise_if_error(
      stub->GetPrivilegeLevel(&context, request, &response),
      context);

  return response;
}

GetRFmxVersionResponse
get_r_fmx_version(const StubPtr& stub, const nidevice_grpc::Session& instrument)
{
  ::grpc::ClientContext context;

  auto request = GetRFmxVersionRequest{};
  request.mutable_instrument()->CopyFrom(instrument);

  auto response = GetRFmxVersionResponse{};

  raise_if_error(
      stub->GetRFmxVersion(&context, request, &response),
      context);

  return response;
}

GetSessionUniqueIdentifierResponse
get_session_unique_identifier(const StubPtr& stub, const std::string& resource_names, const std::string& option_string)
{
  ::grpc::ClientContext context;

  auto request = GetSessionUniqueIdentifierRequest{};
  request.set_resource_names(resource_names);
  request.set_option_string(option_string);

  auto response = GetSessionUniqueIdentifierResponse{};

  raise_if_error(
      stub->GetSessionUniqueIdentifier(&context, request, &response),
      context);

  return response;
}

GetSignalConfigurationState64Response
get_signal_configuration_state64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& signal_name, const pb::uint32& signal_type)
{
  ::grpc::ClientContext context;

  auto request = GetSignalConfigurationState64Request{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_signal_name(signal_name);
  request.set_signal_type(signal_type);

  auto response = GetSignalConfigurationState64Response{};

  raise_if_error(
      stub->GetSignalConfigurationState64(&context, request, &response),
      context);

  return response;
}

GetSnapshotStateResponse
get_snapshot_state(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& personality, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetSnapshotStateRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_personality(personality);
  request.set_selector_string(selector_string);

  auto response = GetSnapshotStateResponse{};

  raise_if_error(
      stub->GetSnapshotState(&context, request, &response),
      context);

  return response;
}

GetTracesInfoForMonitorSnapshotResponse
get_traces_info_for_monitor_snapshot(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string)
{
  ::grpc::ClientContext context;

  auto request = GetTracesInfoForMonitorSnapshotRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);

  auto response = GetTracesInfoForMonitorSnapshotResponse{};

  raise_if_error(
      stub->GetTracesInfoForMonitorSnapshot(&context, request, &response),
      context);

  return response;
}

LoadAllForRevertResponse
load_all_for_revert(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& file_path)
{
  ::grpc::ClientContext context;

  auto request = LoadAllForRevertRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_file_path(file_path);

  auto response = LoadAllForRevertResponse{};

  raise_if_error(
      stub->LoadAllForRevert(&context, request, &response),
      context);

  return response;
}

LoadConfigurationsFromJSONResponse
load_configurations_from_json(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& json_string)
{
  ::grpc::ClientContext context;

  auto request = LoadConfigurationsFromJSONRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_json_string(json_string);

  auto response = LoadConfigurationsFromJSONResponse{};

  raise_if_error(
      stub->LoadConfigurationsFromJSON(&context, request, &response),
      context);

  return response;
}

RegisterSpecialClientSnapshotInterestResponse
register_special_client_snapshot_interest(const StubPtr& stub, const std::string& resource_name)
{
  ::grpc::ClientContext context;

  auto request = RegisterSpecialClientSnapshotInterestRequest{};
  request.set_resource_name(resource_name);

  auto response = RegisterSpecialClientSnapshotInterestResponse{};

  raise_if_error(
      stub->RegisterSpecialClientSnapshotInterest(&context, request, &response),
      context);

  return response;
}

RequestPrivilegeResponse
request_privilege(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& privilege_level)
{
  ::grpc::ClientContext context;

  auto request = RequestPrivilegeRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_privilege_level(privilege_level);

  auto response = RequestPrivilegeResponse{};

  raise_if_error(
      stub->RequestPrivilege(&context, request, &response),
      context);

  return response;
}

SaveAllForRevertResponse
save_all_for_revert(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& file_path)
{
  ::grpc::ClientContext context;

  auto request = SaveAllForRevertRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_file_path(file_path);

  auto response = SaveAllForRevertResponse{};

  raise_if_error(
      stub->SaveAllForRevert(&context, request, &response),
      context);

  return response;
}

SaveConfigurationsToJSONResponse
save_configurations_to_json(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& signal_names)
{
  ::grpc::ClientContext context;

  auto request = SaveConfigurationsToJSONRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_signal_names(signal_names);

  auto response = SaveConfigurationsToJSONResponse{};

  raise_if_error(
      stub->SaveConfigurationsToJSON(&context, request, &response),
      context);

  return response;
}

SetForceAllTracesEnabledResponse
set_force_all_traces_enabled(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& channel_name, const pb::int32& attr_val)
{
  ::grpc::ClientContext context;

  auto request = SetForceAllTracesEnabledRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_channel_name(channel_name);
  request.set_attr_val(attr_val);

  auto response = SetForceAllTracesEnabledResponse{};

  raise_if_error(
      stub->SetForceAllTracesEnabled(&context, request, &response),
      context);

  return response;
}

SetIOTraceStatusResponse
set_io_trace_status(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& io_trace_status)
{
  ::grpc::ClientContext context;

  auto request = SetIOTraceStatusRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_io_trace_status(io_trace_status);

  auto response = SetIOTraceStatusResponse{};

  raise_if_error(
      stub->SetIOTraceStatus(&context, request, &response),
      context);

  return response;
}

UnregisterSpecialClientSnapshotInterestResponse
unregister_special_client_snapshot_interest(const StubPtr& stub, const std::string& resource_name)
{
  ::grpc::ClientContext context;

  auto request = UnregisterSpecialClientSnapshotInterestRequest{};
  request.set_resource_name(resource_name);

  auto response = UnregisterSpecialClientSnapshotInterestResponse{};

  raise_if_error(
      stub->UnregisterSpecialClientSnapshotInterest(&context, request, &response),
      context);

  return response;
}

GetSFPSessionAccessEnabledResponse
get_sfp_session_access_enabled(const StubPtr& stub, const std::string& option_string)
{
  ::grpc::ClientContext context;

  auto request = GetSFPSessionAccessEnabledRequest{};
  request.set_option_string(option_string);

  auto response = GetSFPSessionAccessEnabledResponse{};

  raise_if_error(
      stub->GetSFPSessionAccessEnabled(&context, request, &response),
      context);

  return response;
}

CreateDefaultSignalConfigurationResponse
create_default_signal_configuration(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& signal_name, const pb::int32& personality_id)
{
  ::grpc::ClientContext context;

  auto request = CreateDefaultSignalConfigurationRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_signal_name(signal_name);
  request.set_personality_id(personality_id);

  auto response = CreateDefaultSignalConfigurationResponse{};

  raise_if_error(
      stub->CreateDefaultSignalConfiguration(&context, request, &response),
      context);

  return response;
}

LoadExternalAttenuationTableResponse
load_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::string& file_path)
{
  ::grpc::ClientContext context;

  auto request = LoadExternalAttenuationTableRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  request.set_file_path(file_path);

  auto response = LoadExternalAttenuationTableResponse{};

  raise_if_error(
      stub->LoadExternalAttenuationTable(&context, request, &response),
      context);

  return response;
}

DefineExternalAttenuationTableResponse
define_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const pb::int32& number_of_points)
{
  ::grpc::ClientContext context;

  auto request = DefineExternalAttenuationTableRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  request.set_number_of_points(number_of_points);

  auto response = DefineExternalAttenuationTableResponse{};

  raise_if_error(
      stub->DefineExternalAttenuationTable(&context, request, &response),
      context);

  return response;
}

CfgSParameterExternalAttenuationTableFrequenciesResponse
cfg_s_parameter_external_attenuation_table_frequencies(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::vector<double>& s_parameter_frequencies)
{
  ::grpc::ClientContext context;

  auto request = CfgSParameterExternalAttenuationTableFrequenciesRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  copy_array(s_parameter_frequencies, request.mutable_s_parameter_frequencies());

  auto response = CfgSParameterExternalAttenuationTableFrequenciesResponse{};

  raise_if_error(
      stub->CfgSParameterExternalAttenuationTableFrequencies(&context, request, &response),
      context);

  return response;
}

CfgSParameterExternalAttenuationTableSParameterResponse
cfg_s_parameter_external_attenuation_table_s_parameter(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::vector<nidevice_grpc::NIComplexNumber>& s_parameters, const pb::int32& s_parameter_orientation)
{
  ::grpc::ClientContext context;

  auto request = CfgSParameterExternalAttenuationTableSParameterRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  copy_array(s_parameters, request.mutable_s_parameters());
  request.set_s_parameter_orientation(s_parameter_orientation);

  auto response = CfgSParameterExternalAttenuationTableSParameterResponse{};

  raise_if_error(
      stub->CfgSParameterExternalAttenuationTableSParameter(&context, request, &response),
      context);

  return response;
}

DefineSParameterExternalAttenuationTableResponse
define_s_parameter_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const pb::int32& number_of_frequency_points, const pb::int32& number_of_ports)
{
  ::grpc::ClientContext context;

  auto request = DefineSParameterExternalAttenuationTableRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  request.set_number_of_frequency_points(number_of_frequency_points);
  request.set_number_of_ports(number_of_ports);

  auto response = DefineSParameterExternalAttenuationTableResponse{};

  raise_if_error(
      stub->DefineSParameterExternalAttenuationTable(&context, request, &response),
      context);

  return response;
}

SaveExternalAttenuationTableResponse
save_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::string& file_path, const std::string& description)
{
  ::grpc::ClientContext context;

  auto request = SaveExternalAttenuationTableRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  request.set_file_path(file_path);
  request.set_description(description);

  auto response = SaveExternalAttenuationTableResponse{};

  raise_if_error(
      stub->SaveExternalAttenuationTable(&context, request, &response),
      context);

  return response;
}

CfgExternalAttenuationTableFrequenciesResponse
cfg_external_attenuation_table_frequencies(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::vector<double>& frequency)
{
  ::grpc::ClientContext context;

  auto request = CfgExternalAttenuationTableFrequenciesRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  copy_array(frequency, request.mutable_frequency());

  auto response = CfgExternalAttenuationTableFrequenciesResponse{};

  raise_if_error(
      stub->CfgExternalAttenuationTableFrequencies(&context, request, &response),
      context);

  return response;
}

CfgExternalAttenuationTableResponse
cfg_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const std::string& table_name, const std::vector<double>& frequency, const std::vector<double>& external_attenuation)
{
  ::grpc::ClientContext context;

  auto request = CfgExternalAttenuationTableRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_table_name(table_name);
  copy_array(frequency, request.mutable_frequency());
  copy_array(external_attenuation, request.mutable_external_attenuation());

  auto response = CfgExternalAttenuationTableResponse{};

  raise_if_error(
      stub->CfgExternalAttenuationTable(&context, request, &response),
      context);

  return response;
}


} // namespace nirfmxinstr_restricted_grpc::experimental::client
