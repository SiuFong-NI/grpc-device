
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-rfmxpulse Metadata
//---------------------------------------------------------------------
#include "nirfmxpulse_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxpulse_service.h"
#include "nirfmxpulse_service_registrar.h"

namespace nirfmxpulse_grpc {

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxPulseFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library = std::make_shared<NiRFmxPulseLibrary>();
    auto service = std::make_shared<NiRFmxPulseService>(
      library,
      resource_repository,
      toggles);
    builder.RegisterService(service.get());
    return service;
  }

  return {};
}

} // nirfmxpulse_grpc
