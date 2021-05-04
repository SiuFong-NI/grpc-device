
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-SYNC Metadata
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_SERVICE_H
#define NISYNC_GRPC_SERVICE_H

#include <nisync.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nisync_library_interface.h"

namespace nisync_grpc {

class NiSyncService final : public NiSync::Service {
public:
  NiSyncService(NiSyncLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiSyncService();
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status SendSoftwareTrigger(::grpc::ServerContext* context, const SendSoftwareTriggerRequest* request, SendSoftwareTriggerResponse* response) override;
  ::grpc::Status ConnectClkTerminals(::grpc::ServerContext* context, const ConnectClkTerminalsRequest* request, ConnectClkTerminalsResponse* response) override;
  ::grpc::Status DisconnectClkTerminals(::grpc::ServerContext* context, const DisconnectClkTerminalsRequest* request, DisconnectClkTerminalsResponse* response) override;
  ::grpc::Status ConnectSWTrigToTerminal(::grpc::ServerContext* context, const ConnectSWTrigToTerminalRequest* request, ConnectSWTrigToTerminalResponse* response) override;
  ::grpc::Status DisconnectSWTrigFromTerminal(::grpc::ServerContext* context, const DisconnectSWTrigFromTerminalRequest* request, DisconnectSWTrigFromTerminalResponse* response) override;
  ::grpc::Status ConnectTrigTerminals(::grpc::ServerContext* context, const ConnectTrigTerminalsRequest* request, ConnectTrigTerminalsResponse* response) override;
  ::grpc::Status DisconnectTrigTerminals(::grpc::ServerContext* context, const DisconnectTrigTerminalsRequest* request, DisconnectTrigTerminalsResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
private:
  NiSyncLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
};

} // namespace nisync_grpc

#endif  // NISYNC_GRPC_SERVICE_H
