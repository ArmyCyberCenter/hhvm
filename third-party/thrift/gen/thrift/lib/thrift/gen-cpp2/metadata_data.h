/**
 * Autogenerated by Thrift for /home/fbthrift/thrift/lib/thrift/metadata.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/lib/thrift/gen-cpp2/metadata_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::apache::thrift::metadata::ThriftPrimitiveType> {
  using type = ::apache::thrift::metadata::ThriftPrimitiveType;
  static constexpr const std::size_t size = 10;
  static constexpr const std::array<type, size> values = {{
    type::THRIFT_BOOL_TYPE,
    type::THRIFT_BYTE_TYPE,
    type::THRIFT_I16_TYPE,
    type::THRIFT_I32_TYPE,
    type::THRIFT_I64_TYPE,
    type::THRIFT_FLOAT_TYPE,
    type::THRIFT_DOUBLE_TYPE,
    type::THRIFT_BINARY_TYPE,
    type::THRIFT_STRING_TYPE,
    type::THRIFT_VOID_TYPE,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "THRIFT_BOOL_TYPE",
    "THRIFT_BYTE_TYPE",
    "THRIFT_I16_TYPE",
    "THRIFT_I32_TYPE",
    "THRIFT_I64_TYPE",
    "THRIFT_FLOAT_TYPE",
    "THRIFT_DOUBLE_TYPE",
    "THRIFT_BINARY_TYPE",
    "THRIFT_STRING_TYPE",
    "THRIFT_VOID_TYPE",
  }};
};

template <> struct TEnumDataStorage<::apache::thrift::metadata::ThriftType::Type> {
  using type = ::apache::thrift::metadata::ThriftType::Type;
  static constexpr const std::size_t size = 10;
  static constexpr const std::array<type, size> values = {{
    type::t_primitive,
    type::t_list,
    type::t_set,
    type::t_map,
    type::t_enum,
    type::t_struct,
    type::t_union,
    type::t_typedef,
    type::t_stream,
    type::t_sink,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "t_primitive",
    "t_list",
    "t_set",
    "t_map",
    "t_enum",
    "t_struct",
    "t_union",
    "t_typedef",
    "t_stream",
    "t_sink",
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftListType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "valueType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftSetType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "valueType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftMapType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "keyType",
    "valueType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftEnumType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftStructType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftUnionType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftTypedefType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "underlyingType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftStreamType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "elemType",
    "initialResponseType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftSinkType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "elemType",
    "finalResponseType",
    "initialResponseType",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftType> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 10;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "t_primitive",
    "t_list",
    "t_set",
    "t_map",
    "t_enum",
    "t_struct",
    "t_union",
    "t_typedef",
    "t_stream",
    "t_sink",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftEnum> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "elements",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_MAP,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftField> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "id",
    "type",
    "name",
    "is_optional",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_I32,
    TType::T_STRUCT,
    TType::T_STRING,
    TType::T_BOOL,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftStruct> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "fields",
    "is_union",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_LIST,
    TType::T_BOOL,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftException> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "fields",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_LIST,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftFunction> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 5;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "return_type",
    "arguments",
    "exceptions",
    "is_oneway",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
    4,
    5,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_STRUCT,
    TType::T_LIST,
    TType::T_LIST,
    TType::T_BOOL,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftService> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 3;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
    "functions",
    "parent",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
    3,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
    TType::T_LIST,
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftModuleContext> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 1;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "name",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRING,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftServiceContext> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "service_info",
    "module",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftMetadata> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 4;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "enums",
    "structs",
    "exceptions",
    "services",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    2,
    4,
    5,
    6,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_MAP,
    TType::T_MAP,
    TType::T_MAP,
    TType::T_MAP,
  }};
};


template <> struct TStructDataStorage<::apache::thrift::metadata::ThriftServiceMetadataResponse> {
 private:
  using TType = apache::thrift::protocol::TType;

 public:
  static constexpr const std::size_t fields_size = 2;
  static constexpr std::array<folly::StringPiece, fields_size> fields_names = {{
    "context",
    "metadata",
  }};
  static constexpr std::array<int16_t, fields_size> fields_ids = {{
    1,
    2,
  }};
  static constexpr std::array<TType, fields_size> fields_types = {{
    TType::T_STRUCT,
    TType::T_STRUCT,
  }};
};


}} // apache::thrift
