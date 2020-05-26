/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/event_service_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_EVENT_SERVICE_CONFIG_PROTO_UPB_H_
#define ENVOY_API_V2_CORE_EVENT_SERVICE_CONFIG_PROTO_UPB_H_

#include "upb/generated_util.h"
#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_core_EventServiceConfig;
typedef struct envoy_api_v2_core_EventServiceConfig envoy_api_v2_core_EventServiceConfig;
extern const upb_msglayout envoy_api_v2_core_EventServiceConfig_msginit;
struct envoy_api_v2_core_GrpcService;
extern const upb_msglayout envoy_api_v2_core_GrpcService_msginit;


/* envoy.api.v2.core.EventServiceConfig */

UPB_INLINE envoy_api_v2_core_EventServiceConfig *envoy_api_v2_core_EventServiceConfig_new(upb_arena *arena) {
  return (envoy_api_v2_core_EventServiceConfig *)upb_msg_new(&envoy_api_v2_core_EventServiceConfig_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_EventServiceConfig *envoy_api_v2_core_EventServiceConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_EventServiceConfig *ret = envoy_api_v2_core_EventServiceConfig_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_EventServiceConfig_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_EventServiceConfig_serialize(const envoy_api_v2_core_EventServiceConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_EventServiceConfig_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_core_EventServiceConfig_config_source_specifier_grpc_service = 1,
  envoy_api_v2_core_EventServiceConfig_config_source_specifier_NOT_SET = 0
} envoy_api_v2_core_EventServiceConfig_config_source_specifier_oneofcases;
UPB_INLINE envoy_api_v2_core_EventServiceConfig_config_source_specifier_oneofcases envoy_api_v2_core_EventServiceConfig_config_source_specifier_case(const envoy_api_v2_core_EventServiceConfig* msg) { return (envoy_api_v2_core_EventServiceConfig_config_source_specifier_oneofcases)UPB_FIELD_AT(msg, int32_t, UPB_SIZE(4, 8)); }

UPB_INLINE bool envoy_api_v2_core_EventServiceConfig_has_grpc_service(const envoy_api_v2_core_EventServiceConfig *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(4, 8), 1); }
UPB_INLINE const struct envoy_api_v2_core_GrpcService* envoy_api_v2_core_EventServiceConfig_grpc_service(const envoy_api_v2_core_EventServiceConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_api_v2_core_GrpcService*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, NULL); }

UPB_INLINE void envoy_api_v2_core_EventServiceConfig_set_grpc_service(envoy_api_v2_core_EventServiceConfig *msg, struct envoy_api_v2_core_GrpcService* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_api_v2_core_GrpcService*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE struct envoy_api_v2_core_GrpcService* envoy_api_v2_core_EventServiceConfig_mutable_grpc_service(envoy_api_v2_core_EventServiceConfig *msg, upb_arena *arena) {
  struct envoy_api_v2_core_GrpcService* sub = (struct envoy_api_v2_core_GrpcService*)envoy_api_v2_core_EventServiceConfig_grpc_service(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_GrpcService*)upb_msg_new(&envoy_api_v2_core_GrpcService_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_EventServiceConfig_set_grpc_service(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_EVENT_SERVICE_CONFIG_PROTO_UPB_H_ */
