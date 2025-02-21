/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/transport_sockets/tls/v3/common.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/sensitive.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_TlsParameters__fields[5] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 4), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(16, 24), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit = {
  NULL,
  &envoy_extensions_transport_sockets_tls_v3_TlsParameters__fields[0],
  UPB_SIZE(24, 32), 5, kUpb_ExtMode_NonExtendable, 5, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_TlsCertificate_submsgs[8] = {
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit},
  {.submsg = &envoy_config_core_v3_WatchedDirectory_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_TlsCertificate__fields[8] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), UPB_SIZE(3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), UPB_SIZE(4, 4), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40), UPB_SIZE(0, 0), 4, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 48), UPB_SIZE(5, 5), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(28, 56), UPB_SIZE(6, 6), 6, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(32, 64), UPB_SIZE(7, 7), 7, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_TlsCertificate__fields[0],
  UPB_SIZE(40, 72), 8, kUpb_ExtMode_NonExtendable, 8, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys__fields[0],
  UPB_SIZE(8, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance_msginit = {
  NULL,
  &envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_v3_StringMatcher_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher__fields[2] = {
  {1, UPB_SIZE(4, 4), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher__fields[0],
  UPB_SIZE(16, 16), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_submsgs[9] = {
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_type_matcher_v3_StringMatcher_msginit},
  {.submsg = &envoy_config_core_v3_WatchedDirectory_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext__fields[14] = {
  {1, UPB_SIZE(12, 16), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 40), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(28, 48), UPB_SIZE(3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(1, 1), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(32, 56), UPB_SIZE(0, 0), 3, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(4, 4), UPB_SIZE(0, 0), kUpb_NoSub, 5, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {11, UPB_SIZE(36, 64), UPB_SIZE(4, 4), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {12, UPB_SIZE(40, 72), UPB_SIZE(5, 5), 5, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {13, UPB_SIZE(44, 80), UPB_SIZE(6, 6), 6, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {14, UPB_SIZE(8, 8), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(48, 88), UPB_SIZE(0, 0), 7, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {16, UPB_SIZE(52, 96), UPB_SIZE(7, 7), 8, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit = {
  &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_submsgs[0],
  &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext__fields[0],
  UPB_SIZE(56, 104), 14, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable *messages_layout[7] = {
  &envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit,
  &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit,
  &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit,
  &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CertificateProviderPluginInstance_msginit,
  &envoy_extensions_transport_sockets_tls_v3_SubjectAltNameMatcher_msginit,
  &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit,
};

const upb_MiniTable_File envoy_extensions_transport_sockets_tls_v3_common_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  7,
  0,
  0,
};

#include "upb/port_undef.inc"

