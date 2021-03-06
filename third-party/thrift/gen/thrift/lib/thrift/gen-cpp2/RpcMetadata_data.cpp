/**
 * Autogenerated by Thrift for /home/fbthrift/thrift/lib/thrift/RpcMetadata.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/lib/thrift/gen-cpp2/RpcMetadata_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {


constexpr const std::size_t TEnumDataStorage<::apache::thrift::ProtocolId>::size;
constexpr const std::array<::apache::thrift::ProtocolId, 2> TEnumDataStorage<::apache::thrift::ProtocolId>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::ProtocolId>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::RpcKind>::size;
constexpr const std::array<::apache::thrift::RpcKind, 7> TEnumDataStorage<::apache::thrift::RpcKind>::values;
constexpr const std::array<folly::StringPiece, 7> TEnumDataStorage<::apache::thrift::RpcKind>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::RpcPriority>::size;
constexpr const std::array<::apache::thrift::RpcPriority, 6> TEnumDataStorage<::apache::thrift::RpcPriority>::values;
constexpr const std::array<folly::StringPiece, 6> TEnumDataStorage<::apache::thrift::RpcPriority>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::CompressionAlgorithm>::size;
constexpr const std::array<::apache::thrift::CompressionAlgorithm, 3> TEnumDataStorage<::apache::thrift::CompressionAlgorithm>::values;
constexpr const std::array<folly::StringPiece, 3> TEnumDataStorage<::apache::thrift::CompressionAlgorithm>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::RequestRpcMetadataFlags>::size;
constexpr const std::array<::apache::thrift::RequestRpcMetadataFlags, 2> TEnumDataStorage<::apache::thrift::RequestRpcMetadataFlags>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::RequestRpcMetadataFlags>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::ResponseRpcErrorCategory>::size;
constexpr const std::array<::apache::thrift::ResponseRpcErrorCategory, 4> TEnumDataStorage<::apache::thrift::ResponseRpcErrorCategory>::values;
constexpr const std::array<folly::StringPiece, 4> TEnumDataStorage<::apache::thrift::ResponseRpcErrorCategory>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::ResponseRpcErrorCode>::size;
constexpr const std::array<::apache::thrift::ResponseRpcErrorCode, 16> TEnumDataStorage<::apache::thrift::ResponseRpcErrorCode>::values;
constexpr const std::array<folly::StringPiece, 16> TEnumDataStorage<::apache::thrift::ResponseRpcErrorCode>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::InterfaceKind>::size;
constexpr const std::array<::apache::thrift::InterfaceKind, 2> TEnumDataStorage<::apache::thrift::InterfaceKind>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::InterfaceKind>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::CodecConfig::Type>::size;
constexpr const std::array<::apache::thrift::CodecConfig::Type, 2> TEnumDataStorage<::apache::thrift::CodecConfig::Type>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::CodecConfig::Type>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::PayloadExceptionMetadata::Type>::size;
constexpr const std::array<::apache::thrift::PayloadExceptionMetadata::Type, 5> TEnumDataStorage<::apache::thrift::PayloadExceptionMetadata::Type>::values;
constexpr const std::array<folly::StringPiece, 5> TEnumDataStorage<::apache::thrift::PayloadExceptionMetadata::Type>::names;


constexpr const std::size_t TEnumDataStorage<::apache::thrift::PayloadMetadata::Type>::size;
constexpr const std::array<::apache::thrift::PayloadMetadata::Type, 2> TEnumDataStorage<::apache::thrift::PayloadMetadata::Type>::values;
constexpr const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::PayloadMetadata::Type>::names;


constexpr const std::size_t TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZlibCompressionCodecConfig>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_size> TStructDataStorage<::apache::thrift::ZstdCompressionCodecConfig>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::CodecConfig>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::CodecConfig>::fields_size> TStructDataStorage<::apache::thrift::CodecConfig>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::CodecConfig>::fields_size> TStructDataStorage<::apache::thrift::CodecConfig>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::CodecConfig>::fields_size> TStructDataStorage<::apache::thrift::CodecConfig>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::CompressionConfig>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::CompressionConfig>::fields_size> TStructDataStorage<::apache::thrift::CompressionConfig>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::CompressionConfig>::fields_size> TStructDataStorage<::apache::thrift::CompressionConfig>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::CompressionConfig>::fields_size> TStructDataStorage<::apache::thrift::CompressionConfig>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_size> TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_size> TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_size> TStructDataStorage<::apache::thrift::NegotiationParameters>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::InteractionCreate>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::InteractionCreate>::fields_size> TStructDataStorage<::apache::thrift::InteractionCreate>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::InteractionCreate>::fields_size> TStructDataStorage<::apache::thrift::InteractionCreate>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::InteractionCreate>::fields_size> TStructDataStorage<::apache::thrift::InteractionCreate>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_size> TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_size> TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_size> TStructDataStorage<::apache::thrift::InteractionTerminate>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestRpcMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadResponseMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadDeclaredExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxyExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadProxiedExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppClientExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadAppServerExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_size> TStructDataStorage<::apache::thrift::PayloadExceptionMetadataBase>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::PayloadMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::ProxiedPayloadMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_size> TStructDataStorage<::apache::thrift::ResponseRpcError>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::StreamPayloadMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_size> TStructDataStorage<::apache::thrift::RequestSetupMetadata>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadContent>::fields_types;
constexpr const std::size_t TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_size;
constexpr const std::array<folly::StringPiece, TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_names;
constexpr const std::array<int16_t, TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_ids;
constexpr const std::array<apache::thrift::protocol::TType, TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_size> TStructDataStorage<::apache::thrift::HeadersPayloadMetadata>::fields_types;

} // namespace thrift
} // namespace apache
