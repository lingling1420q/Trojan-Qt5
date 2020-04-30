// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: trojangoapi.proto

#include "trojangoapi.pb.h"
#include "trojangoapi.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace api {

static const char* TrojanService_method_names[] = {
  "/api.TrojanService/QueryStats",
};

std::unique_ptr< TrojanService::Stub> TrojanService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TrojanService::Stub> stub(new TrojanService::Stub(channel));
  return stub;
}

TrojanService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_QueryStats_(TrojanService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status TrojanService::Stub::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::api::StatsReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_QueryStats_, context, request, response);
}

void TrojanService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, std::move(f));
}

void TrojanService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, std::move(f));
}

void TrojanService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, reactor);
}

void TrojanService::Stub::experimental_async::QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_QueryStats_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::api::StatsReply>* TrojanService::Stub::AsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::StatsReply>::Create(channel_.get(), cq, rpcmethod_QueryStats_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::api::StatsReply>* TrojanService::Stub::PrepareAsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::api::StatsReply>::Create(channel_.get(), cq, rpcmethod_QueryStats_, context, request, false);
}

TrojanService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TrojanService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TrojanService::Service, ::api::StatsRequest, ::api::StatsReply>(
          std::mem_fn(&TrojanService::Service::QueryStats), this)));
}

TrojanService::Service::~Service() {
}

::grpc::Status TrojanService::Service::QueryStats(::grpc::ServerContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace api
