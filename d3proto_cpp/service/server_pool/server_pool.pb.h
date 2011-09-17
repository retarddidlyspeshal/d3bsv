// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service/server_pool/server_pool.proto

#ifndef PROTOBUF_service_2fserver_5fpool_2fserver_5fpool_2eproto__INCLUDED
#define PROTOBUF_service_2fserver_5fpool_2fserver_5fpool_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "lib/protocol/attribute.pb.h"
#include "lib/rpc/rpc.pb.h"
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace server_pool {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();

class GetLoadRequest;
class ServerState;
class ServerInfo;
class PoolStateRequest;
class PoolStateResponse;

// ===================================================================

class GetLoadRequest : public ::google::protobuf::Message {
 public:
  GetLoadRequest();
  virtual ~GetLoadRequest();
  
  GetLoadRequest(const GetLoadRequest& from);
  
  inline GetLoadRequest& operator=(const GetLoadRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetLoadRequest& default_instance();
  
  void Swap(GetLoadRequest* other);
  
  // implements Message ----------------------------------------------
  
  GetLoadRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetLoadRequest& from);
  void MergeFrom(const GetLoadRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.server_pool.GetLoadRequest)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  
  void InitAsDefaultInstance();
  static GetLoadRequest* default_instance_;
};
// -------------------------------------------------------------------

class ServerState : public ::google::protobuf::Message {
 public:
  ServerState();
  virtual ~ServerState();
  
  ServerState(const ServerState& from);
  
  inline ServerState& operator=(const ServerState& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerState& default_instance();
  
  void Swap(ServerState* other);
  
  // implements Message ----------------------------------------------
  
  ServerState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerState& from);
  void MergeFrom(const ServerState& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional float current_load = 1;
  inline bool has_current_load() const;
  inline void clear_current_load();
  static const int kCurrentLoadFieldNumber = 1;
  inline float current_load() const;
  inline void set_current_load(float value);
  
  // optional int32 game_count = 2;
  inline bool has_game_count() const;
  inline void clear_game_count();
  static const int kGameCountFieldNumber = 2;
  inline ::google::protobuf::int32 game_count() const;
  inline void set_game_count(::google::protobuf::int32 value);
  
  // optional int32 player_count = 3;
  inline bool has_player_count() const;
  inline void clear_player_count();
  static const int kPlayerCountFieldNumber = 3;
  inline ::google::protobuf::int32 player_count() const;
  inline void set_player_count(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.server_pool.ServerState)
 private:
  inline void set_has_current_load();
  inline void clear_has_current_load();
  inline void set_has_game_count();
  inline void clear_has_game_count();
  inline void set_has_player_count();
  inline void clear_has_player_count();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  float current_load_;
  ::google::protobuf::int32 game_count_;
  ::google::protobuf::int32 player_count_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  
  void InitAsDefaultInstance();
  static ServerState* default_instance_;
};
// -------------------------------------------------------------------

class ServerInfo : public ::google::protobuf::Message {
 public:
  ServerInfo();
  virtual ~ServerInfo();
  
  ServerInfo(const ServerInfo& from);
  
  inline ServerInfo& operator=(const ServerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerInfo& default_instance();
  
  void Swap(ServerInfo* other);
  
  // implements Message ----------------------------------------------
  
  ServerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerInfo& from);
  void MergeFrom(const ServerInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .bnet.protocol.ProcessId host = 1;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 1;
  inline const ::bnet::protocol::ProcessId& host() const;
  inline ::bnet::protocol::ProcessId* mutable_host();
  inline ::bnet::protocol::ProcessId* release_host();
  
  // optional bool replace = 2;
  inline bool has_replace() const;
  inline void clear_replace();
  static const int kReplaceFieldNumber = 2;
  inline bool replace() const;
  inline void set_replace(bool value);
  
  // optional .bnet.protocol.server_pool.ServerState state = 3;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 3;
  inline const ::bnet::protocol::server_pool::ServerState& state() const;
  inline ::bnet::protocol::server_pool::ServerState* mutable_state();
  inline ::bnet::protocol::server_pool::ServerState* release_state();
  
  // repeated .bnet.protocol.attribute.Attribute attribute = 4;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 4;
  inline const ::bnet::protocol::attribute::Attribute& attribute(int index) const;
  inline ::bnet::protocol::attribute::Attribute* mutable_attribute(int index);
  inline ::bnet::protocol::attribute::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
      mutable_attribute();
  
  // optional fixed32 program_id = 5;
  inline bool has_program_id() const;
  inline void clear_program_id();
  static const int kProgramIdFieldNumber = 5;
  inline ::google::protobuf::uint32 program_id() const;
  inline void set_program_id(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.server_pool.ServerInfo)
 private:
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_replace();
  inline void clear_has_replace();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_program_id();
  inline void clear_has_program_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::bnet::protocol::ProcessId* host_;
  ::bnet::protocol::server_pool::ServerState* state_;
  bool replace_;
  ::google::protobuf::uint32 program_id_;
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute > attribute_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  
  void InitAsDefaultInstance();
  static ServerInfo* default_instance_;
};
// -------------------------------------------------------------------

class PoolStateRequest : public ::google::protobuf::Message {
 public:
  PoolStateRequest();
  virtual ~PoolStateRequest();
  
  PoolStateRequest(const PoolStateRequest& from);
  
  inline PoolStateRequest& operator=(const PoolStateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PoolStateRequest& default_instance();
  
  void Swap(PoolStateRequest* other);
  
  // implements Message ----------------------------------------------
  
  PoolStateRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoolStateRequest& from);
  void MergeFrom(const PoolStateRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.server_pool.PoolStateRequest)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  
  void InitAsDefaultInstance();
  static PoolStateRequest* default_instance_;
};
// -------------------------------------------------------------------

class PoolStateResponse : public ::google::protobuf::Message {
 public:
  PoolStateResponse();
  virtual ~PoolStateResponse();
  
  PoolStateResponse(const PoolStateResponse& from);
  
  inline PoolStateResponse& operator=(const PoolStateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PoolStateResponse& default_instance();
  
  void Swap(PoolStateResponse* other);
  
  // implements Message ----------------------------------------------
  
  PoolStateResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoolStateResponse& from);
  void MergeFrom(const PoolStateResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .bnet.protocol.server_pool.ServerInfo info = 1;
  inline int info_size() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 1;
  inline const ::bnet::protocol::server_pool::ServerInfo& info(int index) const;
  inline ::bnet::protocol::server_pool::ServerInfo* mutable_info(int index);
  inline ::bnet::protocol::server_pool::ServerInfo* add_info();
  inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::server_pool::ServerInfo >&
      info() const;
  inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::server_pool::ServerInfo >*
      mutable_info();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.server_pool.PoolStateResponse)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::bnet::protocol::server_pool::ServerInfo > info_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_AssignDesc_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  friend void protobuf_ShutdownFile_service_2fserver_5fpool_2fserver_5fpool_2eproto();
  
  void InitAsDefaultInstance();
  static PoolStateResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GetLoadRequest

// -------------------------------------------------------------------

// ServerState

// optional float current_load = 1;
inline bool ServerState::has_current_load() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerState::set_has_current_load() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerState::clear_has_current_load() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerState::clear_current_load() {
  current_load_ = 0;
  clear_has_current_load();
}
inline float ServerState::current_load() const {
  return current_load_;
}
inline void ServerState::set_current_load(float value) {
  set_has_current_load();
  current_load_ = value;
}

// optional int32 game_count = 2;
inline bool ServerState::has_game_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerState::set_has_game_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerState::clear_has_game_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerState::clear_game_count() {
  game_count_ = 0;
  clear_has_game_count();
}
inline ::google::protobuf::int32 ServerState::game_count() const {
  return game_count_;
}
inline void ServerState::set_game_count(::google::protobuf::int32 value) {
  set_has_game_count();
  game_count_ = value;
}

// optional int32 player_count = 3;
inline bool ServerState::has_player_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerState::set_has_player_count() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ServerState::clear_has_player_count() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ServerState::clear_player_count() {
  player_count_ = 0;
  clear_has_player_count();
}
inline ::google::protobuf::int32 ServerState::player_count() const {
  return player_count_;
}
inline void ServerState::set_player_count(::google::protobuf::int32 value) {
  set_has_player_count();
  player_count_ = value;
}

// -------------------------------------------------------------------

// ServerInfo

// required .bnet.protocol.ProcessId host = 1;
inline bool ServerInfo::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerInfo::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerInfo::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerInfo::clear_host() {
  if (host_ != NULL) host_->::bnet::protocol::ProcessId::Clear();
  clear_has_host();
}
inline const ::bnet::protocol::ProcessId& ServerInfo::host() const {
  return host_ != NULL ? *host_ : *default_instance_->host_;
}
inline ::bnet::protocol::ProcessId* ServerInfo::mutable_host() {
  set_has_host();
  if (host_ == NULL) host_ = new ::bnet::protocol::ProcessId;
  return host_;
}
inline ::bnet::protocol::ProcessId* ServerInfo::release_host() {
  clear_has_host();
  ::bnet::protocol::ProcessId* temp = host_;
  host_ = NULL;
  return temp;
}

// optional bool replace = 2;
inline bool ServerInfo::has_replace() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerInfo::set_has_replace() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerInfo::clear_has_replace() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerInfo::clear_replace() {
  replace_ = false;
  clear_has_replace();
}
inline bool ServerInfo::replace() const {
  return replace_;
}
inline void ServerInfo::set_replace(bool value) {
  set_has_replace();
  replace_ = value;
}

// optional .bnet.protocol.server_pool.ServerState state = 3;
inline bool ServerInfo::has_state() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerInfo::set_has_state() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ServerInfo::clear_has_state() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ServerInfo::clear_state() {
  if (state_ != NULL) state_->::bnet::protocol::server_pool::ServerState::Clear();
  clear_has_state();
}
inline const ::bnet::protocol::server_pool::ServerState& ServerInfo::state() const {
  return state_ != NULL ? *state_ : *default_instance_->state_;
}
inline ::bnet::protocol::server_pool::ServerState* ServerInfo::mutable_state() {
  set_has_state();
  if (state_ == NULL) state_ = new ::bnet::protocol::server_pool::ServerState;
  return state_;
}
inline ::bnet::protocol::server_pool::ServerState* ServerInfo::release_state() {
  clear_has_state();
  ::bnet::protocol::server_pool::ServerState* temp = state_;
  state_ = NULL;
  return temp;
}

// repeated .bnet.protocol.attribute.Attribute attribute = 4;
inline int ServerInfo::attribute_size() const {
  return attribute_.size();
}
inline void ServerInfo::clear_attribute() {
  attribute_.Clear();
}
inline const ::bnet::protocol::attribute::Attribute& ServerInfo::attribute(int index) const {
  return attribute_.Get(index);
}
inline ::bnet::protocol::attribute::Attribute* ServerInfo::mutable_attribute(int index) {
  return attribute_.Mutable(index);
}
inline ::bnet::protocol::attribute::Attribute* ServerInfo::add_attribute() {
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >&
ServerInfo::attribute() const {
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::attribute::Attribute >*
ServerInfo::mutable_attribute() {
  return &attribute_;
}

// optional fixed32 program_id = 5;
inline bool ServerInfo::has_program_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ServerInfo::set_has_program_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ServerInfo::clear_has_program_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ServerInfo::clear_program_id() {
  program_id_ = 0u;
  clear_has_program_id();
}
inline ::google::protobuf::uint32 ServerInfo::program_id() const {
  return program_id_;
}
inline void ServerInfo::set_program_id(::google::protobuf::uint32 value) {
  set_has_program_id();
  program_id_ = value;
}

// -------------------------------------------------------------------

// PoolStateRequest

// -------------------------------------------------------------------

// PoolStateResponse

// repeated .bnet.protocol.server_pool.ServerInfo info = 1;
inline int PoolStateResponse::info_size() const {
  return info_.size();
}
inline void PoolStateResponse::clear_info() {
  info_.Clear();
}
inline const ::bnet::protocol::server_pool::ServerInfo& PoolStateResponse::info(int index) const {
  return info_.Get(index);
}
inline ::bnet::protocol::server_pool::ServerInfo* PoolStateResponse::mutable_info(int index) {
  return info_.Mutable(index);
}
inline ::bnet::protocol::server_pool::ServerInfo* PoolStateResponse::add_info() {
  return info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bnet::protocol::server_pool::ServerInfo >&
PoolStateResponse::info() const {
  return info_;
}
inline ::google::protobuf::RepeatedPtrField< ::bnet::protocol::server_pool::ServerInfo >*
PoolStateResponse::mutable_info() {
  return &info_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace server_pool
}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_service_2fserver_5fpool_2fserver_5fpool_2eproto__INCLUDED
