// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Stats.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace D3 {
namespace Stats {

namespace {

const ::google::protobuf::Descriptor* StatCategory_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StatCategory_reflection_ = NULL;
const ::google::protobuf::Descriptor* StatList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StatList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Stats_2eproto() {
  protobuf_AddDesc_Stats_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Stats.proto");
  GOOGLE_CHECK(file != NULL);
  StatCategory_descriptor_ = file->message_type(0);
  static const int StatCategory_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, stat_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, data_1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, data_2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, total_),
  };
  StatCategory_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StatCategory_descriptor_,
      StatCategory::default_instance_,
      StatCategory_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatCategory, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StatCategory));
  StatList_descriptor_ = file->message_type(1);
  static const int StatList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatList, stats_),
  };
  StatList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StatList_descriptor_,
      StatList::default_instance_,
      StatList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StatList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Stats_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StatCategory_descriptor_, &StatCategory::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StatList_descriptor_, &StatList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Stats_2eproto() {
  delete StatCategory::default_instance_;
  delete StatCategory_reflection_;
  delete StatList::default_instance_;
  delete StatList_reflection_;
}

void protobuf_AddDesc_Stats_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Stats.proto\022\010D3.Stats\"N\n\014StatCategory\022"
    "\017\n\007stat_id\030\001 \002(\r\022\016\n\006data_1\030\002 \002(\r\022\016\n\006data"
    "_2\030\003 \001(\r\022\r\n\005total\030\004 \002(\004\"1\n\010StatList\022%\n\005s"
    "tats\030\001 \003(\0132\026.D3.Stats.StatCategory", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Stats.proto", &protobuf_RegisterTypes);
  StatCategory::default_instance_ = new StatCategory();
  StatList::default_instance_ = new StatList();
  StatCategory::default_instance_->InitAsDefaultInstance();
  StatList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Stats_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Stats_2eproto {
  StaticDescriptorInitializer_Stats_2eproto() {
    protobuf_AddDesc_Stats_2eproto();
  }
} static_descriptor_initializer_Stats_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int StatCategory::kStatIdFieldNumber;
const int StatCategory::kData1FieldNumber;
const int StatCategory::kData2FieldNumber;
const int StatCategory::kTotalFieldNumber;
#endif  // !_MSC_VER

StatCategory::StatCategory()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void StatCategory::InitAsDefaultInstance() {
}

StatCategory::StatCategory(const StatCategory& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void StatCategory::SharedCtor() {
  _cached_size_ = 0;
  stat_id_ = 0u;
  data_1_ = 0u;
  data_2_ = 0u;
  total_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StatCategory::~StatCategory() {
  SharedDtor();
}

void StatCategory::SharedDtor() {
  if (this != default_instance_) {
  }
}

void StatCategory::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StatCategory::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatCategory_descriptor_;
}

const StatCategory& StatCategory::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Stats_2eproto();  return *default_instance_;
}

StatCategory* StatCategory::default_instance_ = NULL;

StatCategory* StatCategory::New() const {
  return new StatCategory;
}

void StatCategory::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stat_id_ = 0u;
    data_1_ = 0u;
    data_2_ = 0u;
    total_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StatCategory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 stat_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &stat_id_)));
          set_has_stat_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_data_1;
        break;
      }
      
      // required uint32 data_1 = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_data_1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &data_1_)));
          set_has_data_1();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_data_2;
        break;
      }
      
      // optional uint32 data_2 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_data_2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &data_2_)));
          set_has_data_2();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_total;
        break;
      }
      
      // required uint64 total = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_total:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &total_)));
          set_has_total();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void StatCategory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 stat_id = 1;
  if (has_stat_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->stat_id(), output);
  }
  
  // required uint32 data_1 = 2;
  if (has_data_1()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->data_1(), output);
  }
  
  // optional uint32 data_2 = 3;
  if (has_data_2()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->data_2(), output);
  }
  
  // required uint64 total = 4;
  if (has_total()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->total(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* StatCategory::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 stat_id = 1;
  if (has_stat_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->stat_id(), target);
  }
  
  // required uint32 data_1 = 2;
  if (has_data_1()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->data_1(), target);
  }
  
  // optional uint32 data_2 = 3;
  if (has_data_2()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->data_2(), target);
  }
  
  // required uint64 total = 4;
  if (has_total()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->total(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int StatCategory::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 stat_id = 1;
    if (has_stat_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->stat_id());
    }
    
    // required uint32 data_1 = 2;
    if (has_data_1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->data_1());
    }
    
    // optional uint32 data_2 = 3;
    if (has_data_2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->data_2());
    }
    
    // required uint64 total = 4;
    if (has_total()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->total());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StatCategory::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StatCategory* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StatCategory*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StatCategory::MergeFrom(const StatCategory& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stat_id()) {
      set_stat_id(from.stat_id());
    }
    if (from.has_data_1()) {
      set_data_1(from.data_1());
    }
    if (from.has_data_2()) {
      set_data_2(from.data_2());
    }
    if (from.has_total()) {
      set_total(from.total());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StatCategory::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatCategory::CopyFrom(const StatCategory& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatCategory::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000b) != 0x0000000b) return false;
  
  return true;
}

void StatCategory::Swap(StatCategory* other) {
  if (other != this) {
    std::swap(stat_id_, other->stat_id_);
    std::swap(data_1_, other->data_1_);
    std::swap(data_2_, other->data_2_);
    std::swap(total_, other->total_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StatCategory::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StatCategory_descriptor_;
  metadata.reflection = StatCategory_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int StatList::kStatsFieldNumber;
#endif  // !_MSC_VER

StatList::StatList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void StatList::InitAsDefaultInstance() {
}

StatList::StatList(const StatList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void StatList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StatList::~StatList() {
  SharedDtor();
}

void StatList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void StatList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StatList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatList_descriptor_;
}

const StatList& StatList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Stats_2eproto();  return *default_instance_;
}

StatList* StatList::default_instance_ = NULL;

StatList* StatList::New() const {
  return new StatList;
}

void StatList::Clear() {
  stats_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StatList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .D3.Stats.StatCategory stats = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_stats:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_stats()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_stats;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void StatList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .D3.Stats.StatCategory stats = 1;
  for (int i = 0; i < this->stats_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->stats(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* StatList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .D3.Stats.StatCategory stats = 1;
  for (int i = 0; i < this->stats_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->stats(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int StatList::ByteSize() const {
  int total_size = 0;
  
  // repeated .D3.Stats.StatCategory stats = 1;
  total_size += 1 * this->stats_size();
  for (int i = 0; i < this->stats_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->stats(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StatList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StatList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StatList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StatList::MergeFrom(const StatList& from) {
  GOOGLE_CHECK_NE(&from, this);
  stats_.MergeFrom(from.stats_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StatList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatList::CopyFrom(const StatList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatList::IsInitialized() const {
  
  for (int i = 0; i < stats_size(); i++) {
    if (!this->stats(i).IsInitialized()) return false;
  }
  return true;
}

void StatList::Swap(StatList* other) {
  if (other != this) {
    stats_.Swap(&other->stats_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StatList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StatList_descriptor_;
  metadata.reflection = StatList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Stats
}  // namespace D3

// @@protoc_insertion_point(global_scope)
