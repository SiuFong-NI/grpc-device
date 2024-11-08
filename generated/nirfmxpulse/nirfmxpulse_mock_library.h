//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-rfmxpulse
//---------------------------------------------------------------------
#ifndef NIRFMXPULSE_GRPC_MOCK_LIBRARY_H
#define NIRFMXPULSE_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nirfmxpulse_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiRFmxPulseMockLibrary : public nirfmxpulse_grpc::NiRFmxPulseLibraryInterface {
 public:
  MOCK_METHOD(int32, AbortMeasurements, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, AnalyzeIQ1Waveform, (niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, NIComplexSingle iq[], int32 arraySize, int32 reset, int64 reserved), (override));
  MOCK_METHOD(int32, AnalyzeIQ1WaveformSplit, (niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[], float64 x0, float64 dx, float32 iqi[], float32 iqq[], int32 arraySize, int32 reset, int64 reserved), (override));
  MOCK_METHOD(int32, AutoLevel, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 bandwidth, float64 measurementInterval, float64* referenceLevel), (override));
  MOCK_METHOD(int32, BuildSignalString, (char signalName[], char resultName[], int32 selectorStringLength, char selectorString[]), (override));
  MOCK_METHOD(int32, Cfg1ReferenceWaveform, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, NIComplexSingle referenceWaveform[], int32 arraySize), (override));
  MOCK_METHOD(int32, Cfg1ReferenceWaveformSplit, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 x0, float64 dx, float32 referenceWaveformI[], float32 referenceWaveformQ[], int32 arraySize), (override));
  MOCK_METHOD(int32, CfgDigitalEdgeTrigger, (niRFmxInstrHandle instrumentHandle, char selectorString[], char digitalEdgeSource[], int32 digitalEdge, float64 triggerDelay, int32 enableTrigger), (override));
  MOCK_METHOD(int32, CfgExternalAttenuation, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 externalAttenuation), (override));
  MOCK_METHOD(int32, CfgFrequency, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency), (override));
  MOCK_METHOD(int32, CfgFrequencyReference, (niRFmxInstrHandle instrumentHandle, char channelName[], char frequencyReferenceSource[], float64 frequencyReferenceFrequency), (override));
  MOCK_METHOD(int32, CfgIQPowerEdgeTrigger, (niRFmxInstrHandle instrumentHandle, char selectorString[], char iqPowerEdgeSource[], int32 iqPowerEdgeSlope, float64 iqPowerEdgeLevel, float64 triggerDelay, int32 triggerMinQuietTimeMode, float64 triggerMinQuietTimeDuration, int32 iqPowerEdgeLevelType, int32 enableTrigger), (override));
  MOCK_METHOD(int32, CfgMechanicalAttenuation, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 mechanicalAttenuationAuto, float64 mechanicalAttenuationValue), (override));
  MOCK_METHOD(int32, CfgRF, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 centerFrequency, float64 referenceLevel, float64 externalAttenuation), (override));
  MOCK_METHOD(int32, CfgRFAttenuation, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 rfAttenuationAuto, float64 rfAttenuationValue), (override));
  MOCK_METHOD(int32, CfgReferenceLevel, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 referenceLevel), (override));
  MOCK_METHOD(int32, CfgSoftwareEdgeTrigger, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 triggerDelay, int32 enableTrigger), (override));
  MOCK_METHOD(int32, CheckMeasurementStatus, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32* isDone), (override));
  MOCK_METHOD(int32, ClearAllNamedResults, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, ClearNamedResult, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, CloneSignalConfiguration, (niRFmxInstrHandle instrumentHandle, char oldSignalName[], char newSignalName[]), (override));
  MOCK_METHOD(int32, Close, (niRFmxInstrHandle instrumentHandle, int32 forceDestroy), (override));
  MOCK_METHOD(int32, Commit, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, CreateSignalConfiguration, (niRFmxInstrHandle instrumentHandle, char signalName[]), (override));
  MOCK_METHOD(int32, DeleteSignalConfiguration, (niRFmxInstrHandle instrumentHandle, char signalName[]), (override));
  MOCK_METHOD(int32, DisableTrigger, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, FetchAcquiredAmplitudeTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, float64* sampleDuration, float32 amplitude[], int32 amplitudeArraySize, int32* amplitudeActualArraySize, int32 startIndex[], float64 startTimeStamp[], int32 startArraySize, int32* startActualArraySize), (override));
  MOCK_METHOD(int32, FetchAmplitudeTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 amplitude[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchBurstIntrapulseStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 intrapulseAverageAmplitudeStability[], float32 intrapulseAveragePhaseStability[], float32 intrapulseAverageTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchBurstSelectedPositionStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pulseAmplitudeStability[], float32 pulsePhaseStability[], float32 pulseTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchFrequencyTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 frequency[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchIQTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, NIComplexSingle iqData[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchIQTraceSplit, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 iqDataI[], float32 iqDataQ[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchIntrapulseStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 intrapulseAmplitudeStability[], float32 intrapulsePhaseStability[], float32 intrapulseTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchMultipleMeasurementPointsStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pulseAverageAmplitudeStability[], float32 pulseAveragePhaseStability[], float32 pulseAverageTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchPhaseWrappedTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 wrappedPhase[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchPulseToPulseStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, int32 pulseIndex[], float64 pulseToPulseAmplitudeStability[], float64 pulseToPulsePhaseStability[], float64 pulseToPulseTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchStabilityTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 pulseAmplitudeStability[], float32 pulsePhaseStability[], float32 pulseTotalStability[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, FetchTimeSidelobeTrace, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 timeSidelobe[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAllNamedResultNames, (niRFmxInstrHandle instrumentHandle, char selectorString[], char resultNames[], int32 resultNamesBufferSize, int32* actualResultNamesSize, int32* defaultResultExists), (override));
  MOCK_METHOD(int32, GetAttributeF32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeF32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeF64, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeF64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeI16, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeI32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeI32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeI64, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeI64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeI8, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeI8Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeNIComplexDoubleArray, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeNIComplexSingleArray, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeString, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 arraySize, char attrVal[]), (override));
  MOCK_METHOD(int32, GetAttributeU16, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeU32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeU32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeU64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeU8, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeU8Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetError, (niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, GetErrorString, (niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, Initialize, (char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession), (override));
  MOCK_METHOD(int32, InitializeFromNIRFSASession, (uInt32 nirfsaSession, niRFmxInstrHandle* handleOut), (override));
  MOCK_METHOD(int32, Initiate, (niRFmxInstrHandle instrumentHandle, char selectorString[], char resultName[]), (override));
  MOCK_METHOD(int32, ResetAttribute, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID), (override));
  MOCK_METHOD(int32, ResetToDefault, (niRFmxInstrHandle instrumentHandle, char selectorString[]), (override));
  MOCK_METHOD(int32, SelectMeasurements, (niRFmxInstrHandle instrumentHandle, char selectorString[], uInt32 measurements, int32 enableAllTraces), (override));
  MOCK_METHOD(int32, SendSoftwareEdgeTrigger, (niRFmxInstrHandle instrumentHandle), (override));
  MOCK_METHOD(int32, SetAttributeF32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeF32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float32 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeF64, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeF64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, float64 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeI16, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int16 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeI32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeI32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeI64, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeI64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int64 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeI8, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeI8Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int8 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeNIComplexDoubleArray, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexDouble attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeNIComplexSingleArray, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, NIComplexSingle attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeString, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, char attrVal[]), (override));
  MOCK_METHOD(int32, SetAttributeU16, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt16 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeU32, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeU32Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt32 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeU64Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt64 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, SetAttributeU8, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal), (override));
  MOCK_METHOD(int32, SetAttributeU8Array, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, uInt8 attrVal[], int32 arraySize), (override));
  MOCK_METHOD(int32, WaitForAcquisitionComplete, (niRFmxInstrHandle instrumentHandle, float64 timeout), (override));
  MOCK_METHOD(int32, WaitForMeasurementComplete, (niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIRFMXPULSE_GRPC_MOCK_LIBRARY_H