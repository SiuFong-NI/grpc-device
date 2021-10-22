
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFSG.
//---------------------------------------------------------------------
#ifndef NIRFSG_GRPC_CLIENT_H
#define NIRFSG_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfsg.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfsg_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFSG::Stub>;
using namespace nidevice_grpc::experimental::client;


AbortResponse abort(const StubPtr& stub, const nidevice_grpc::Session& vi);
AllocateArbWaveformResponse allocate_arb_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const pb::int32& size_in_samples);
CheckAttributeViBooleanResponse check_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const bool& value);
CheckAttributeViInt32Response check_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const simple_variant<NiRFSGInt32AttributeValues, pb::int32>& value);
CheckAttributeViInt64Response check_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const pb::int64& value_raw);
CheckAttributeViReal64Response check_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const double& value_raw);
CheckAttributeViSessionResponse check_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const nidevice_grpc::Session& value);
CheckAttributeViStringResponse check_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const simple_variant<NiRFSGStringAttributeValuesMapped, std::string>& value);
CheckGenerationStatusResponse check_generation_status(const StubPtr& stub, const nidevice_grpc::Session& vi);
CheckIfConfigurationListExistsResponse check_if_configuration_list_exists(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& list_name);
CheckIfScriptExistsResponse check_if_script_exists(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& script_name);
CheckIfWaveformExistsResponse check_if_waveform_exists(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name);
ClearAllArbWaveformsResponse clear_all_arb_waveforms(const StubPtr& stub, const nidevice_grpc::Session& vi);
ClearArbWaveformResponse clear_arb_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& name);
ClearErrorResponse clear_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
ClearSelfCalibrateRangeResponse clear_self_calibrate_range(const StubPtr& stub, const nidevice_grpc::Session& vi);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& vi);
CommitResponse commit(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureDeembeddingTableInterpolationLinearResponse configure_deembedding_table_interpolation_linear(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name, const simple_variant<LinearInterpolationFormat, pb::int32>& format);
ConfigureDeembeddingTableInterpolationNearestResponse configure_deembedding_table_interpolation_nearest(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name);
ConfigureDeembeddingTableInterpolationSplineResponse configure_deembedding_table_interpolation_spline(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name);
ConfigureDigitalEdgeConfigurationListStepTriggerResponse configure_digital_edge_configuration_list_step_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<DigitalEdgeConfigurationListStepTriggerSource, std::string>& source, const simple_variant<DigitalEdgeEdge, pb::int32>& edge);
ConfigureDigitalEdgeScriptTriggerResponse configure_digital_edge_script_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<DigitalEdgeScriptTriggerIdentifier, std::string>& trigger_id, const simple_variant<TriggerSource, std::string>& source, const simple_variant<DigitalEdgeEdge, pb::int32>& edge);
ConfigureDigitalEdgeStartTriggerResponse configure_digital_edge_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<TriggerSource, std::string>& source, const simple_variant<DigitalEdgeEdge, pb::int32>& edge);
ConfigureDigitalLevelScriptTriggerResponse configure_digital_level_script_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<DigitalEdgeScriptTriggerIdentifier, std::string>& trigger_id, const simple_variant<TriggerSource, std::string>& source, const simple_variant<DigitalLevelActiveLevel, pb::int32>& level);
ConfigureDigitalModulationUserDefinedWaveformResponse configure_digital_modulation_user_defined_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& user_defined_waveform);
ConfigureGenerationModeResponse configure_generation_mode(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<GenerationMode, pb::int32>& generation_mode);
ConfigureOutputEnabledResponse configure_output_enabled(const StubPtr& stub, const nidevice_grpc::Session& vi, const bool& output_enabled);
ConfigureP2PEndpointFullnessStartTriggerResponse configure_p2p_endpoint_fullness_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int64& p2p_endpoint_fullness_level);
ConfigurePXIChassisClk10Response configure_pxi_chassis_clk10(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<PXIChassisClk10, std::string>& pxi_clk10_source);
ConfigurePowerLevelTypeResponse configure_power_level_type(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<PowerLevelType, pb::int32>& power_level_type);
ConfigureRFResponse configure_rf(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& frequency, const double& power_level);
ConfigureRefClockResponse configure_ref_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<RefClockSource, std::string>& ref_clock_source, const double& ref_clock_rate);
ConfigureSignalBandwidthResponse configure_signal_bandwidth(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& signal_bandwidth);
ConfigureSoftwareScriptTriggerResponse configure_software_script_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<DigitalEdgeScriptTriggerIdentifier, std::string>& trigger_id);
ConfigureSoftwareStartTriggerResponse configure_software_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureUpconverterPLLSettlingTimeResponse configure_upconverter_pll_settling_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& pll_settling_time, const bool& ensure_pll_locked, const pb::int32& reserved_for_future_use);
CreateConfigurationListResponse create_configuration_list(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& list_name, const std::vector<NiRFSGAttributes>& configuration_list_attributes, const bool& set_as_active_list);
CreateConfigurationListStepResponse create_configuration_list_step(const StubPtr& stub, const nidevice_grpc::Session& vi, const bool& set_as_active_step);
CreateDeembeddingSparameterTableArrayResponse create_deembedding_sparameter_table_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name, const std::vector<double>& frequencies, const std::vector<NIComplexNumber>& sparameter_table, const pb::int32& number_of_ports, const simple_variant<SParameterOrientation, pb::int32>& sparameter_orientation);
CreateDeembeddingSparameterTableS2PFileResponse create_deembedding_sparameter_table_s2p_file(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name, const pb::string& s2p_file_path, const simple_variant<SParameterOrientation, pb::int32>& sparameter_orientation);
DeleteAllDeembeddingTablesResponse delete_all_deembedding_tables(const StubPtr& stub, const nidevice_grpc::Session& vi);
DeleteConfigurationListResponse delete_configuration_list(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& list_name);
DeleteDeembeddingTableResponse delete_deembedding_table(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& port, const pb::string& table_name);
DeleteScriptResponse delete_script(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& script_name);
DisableResponse disable(const StubPtr& stub, const nidevice_grpc::Session& vi);
DisableAllModulationResponse disable_all_modulation(const StubPtr& stub, const nidevice_grpc::Session& vi);
DisableConfigurationListStepTriggerResponse disable_configuration_list_step_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi);
DisableScriptTriggerResponse disable_script_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<DigitalEdgeScriptTriggerIdentifier, std::string>& trigger_id);
DisableStartTriggerResponse disable_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi);
ErrorMessageResponse error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
ErrorQueryResponse error_query(const StubPtr& stub, const nidevice_grpc::Session& vi);
ExportSignalResponse export_signal(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<RoutedSignal, pb::int32>& signal, const simple_variant<SignalIdentifier, std::string>& signal_identifier, const simple_variant<OutputSignal, std::string>& output_terminal);
GetAttributeViBooleanResponse get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetAttributeViInt32Response get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetAttributeViInt64Response get_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetAttributeViSessionResponse get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute);
GetChannelNameResponse get_channel_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& index);
GetDeembeddingSparametersResponse get_deembedding_sparameters(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetExternalCalibrationLastDateAndTimeResponse get_external_calibration_last_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetSelfCalibrationDateAndTimeResponse get_self_calibration_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<Module, pb::int32>& module);
GetSelfCalibrationTemperatureResponse get_self_calibration_temperature(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<Module, pb::int32>& module);
GetStreamEndpointHandleResponse get_stream_endpoint_handle(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& stream_endpoint);
GetTerminalNameResponse get_terminal_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<RoutedSignal, pb::int32>& signal, const simple_variant<SignalIdentifier, std::string>& signal_identifier);
GetUserDataResponse get_user_data(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& identifier);
GetWaveformBurstStartLocationsResponse get_waveform_burst_start_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name);
GetWaveformBurstStopLocationsResponse get_waveform_burst_stop_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name);
GetWaveformMarkerEventLocationsResponse get_waveform_marker_event_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name);
InitResponse init(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device);
InitWithOptionsResponse init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const pb::string& option_string);
InitiateResponse initiate(const StubPtr& stub, const nidevice_grpc::Session& vi);
InvalidateAllAttributesResponse invalidate_all_attributes(const StubPtr& stub, const nidevice_grpc::Session& vi);
LoadConfigurationsFromFileResponse load_configurations_from_file(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const pb::string& file_path);
PerformPowerSearchResponse perform_power_search(const StubPtr& stub, const nidevice_grpc::Session& vi);
PerformThermalCorrectionResponse perform_thermal_correction(const StubPtr& stub, const nidevice_grpc::Session& vi);
QueryArbWaveformCapabilitiesResponse query_arb_waveform_capabilities(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReadAndDownloadWaveformFromFileTDMSResponse read_and_download_waveform_from_file_tdms(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const pb::string& file_path, const pb::uint32& waveform_index);
ResetResponse reset(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetAttributeResponse reset_attribute(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute_id);
ResetDeviceResponse reset_device(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetWithDefaultsResponse reset_with_defaults(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetWithOptionsResponse reset_with_options(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::uint64& steps_to_omit);
RevisionQueryResponse revision_query(const StubPtr& stub, const nidevice_grpc::Session& vi);
SaveConfigurationsToFileResponse save_configurations_to_file(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const pb::string& file_path);
SelectArbWaveformResponse select_arb_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& name);
SelfCalResponse self_cal(const StubPtr& stub, const nidevice_grpc::Session& vi);
SelfCalibrateRangeResponse self_calibrate_range(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int64& steps_to_omit, const double& min_frequency, const double& max_frequency, const double& min_power_level, const double& max_power_level);
SelfTestResponse self_test(const StubPtr& stub, const nidevice_grpc::Session& vi);
SendSoftwareEdgeTriggerResponse send_software_edge_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<RoutedSignal, pb::int32>& trigger, const simple_variant<SignalIdentifier, std::string>& trigger_identifier);
SetArbWaveformNextWritePositionResponse set_arb_waveform_next_write_position(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const simple_variant<RelativeTo, pb::int32>& relative_to, const pb::int32& offset);
SetAttributeViBooleanResponse set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const bool& value);
SetAttributeViInt32Response set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const simple_variant<NiRFSGInt32AttributeValues, pb::int32>& value);
SetAttributeViInt64Response set_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const pb::int64& value_raw);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const double& value_raw);
SetAttributeViSessionResponse set_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const nidevice_grpc::Session& value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiRFSGAttributes& attribute, const simple_variant<NiRFSGStringAttributeValuesMapped, std::string>& value);
SetUserDataResponse set_user_data(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& identifier, const pb::string& data);
SetWaveformBurstStartLocationsResponse set_waveform_burst_start_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const std::vector<double>& locations);
SetWaveformBurstStopLocationsResponse set_waveform_burst_stop_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const std::vector<double>& locations);
SetWaveformMarkerEventLocationsResponse set_waveform_marker_event_locations(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const std::vector<double>& locations);
WaitUntilSettledResponse wait_until_settled(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& max_time_milliseconds);
WriteArbWaveformResponse write_arb_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<double>& i_data, const std::vector<double>& q_data, const bool& more_data_pending);
WriteArbWaveformComplexF32Response write_arb_waveform_complex_f32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<NIComplexNumberF32>& wfm_data, const bool& more_data_pending);
WriteArbWaveformComplexF64Response write_arb_waveform_complex_f64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<NIComplexNumber>& wfm_data, const bool& more_data_pending);
WriteArbWaveformComplexI16Response write_arb_waveform_complex_i16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<NIComplexI16>& wfm_data);
WriteArbWaveformF32Response write_arb_waveform_f32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& waveform_name, const std::vector<float>& i_data, const std::vector<float>& q_data, const bool& more_data_pending);
WriteP2PEndpointI16Response write_p2p_endpoint_i16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& stream_endpoint, const std::vector<pb::int32>& endpoint_data);
WriteScriptResponse write_script(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& script);

} // namespace nirfsg_grpc::experimental::client

#endif /* NIRFSG_GRPC_CLIENT_H */
