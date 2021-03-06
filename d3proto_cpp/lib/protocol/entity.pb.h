// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lib/protocol/entity.proto

#ifndef PROTOBUF_lib_2fprotocol_2fentity_2eproto__INCLUDED
#define PROTOBUF_lib_2fprotocol_2fentity_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lib_2fprotocol_2fentity_2eproto();
void protobuf_AssignDesc_lib_2fprotocol_2fentity_2eproto();
void protobuf_ShutdownFile_lib_2fprotocol_2fentity_2eproto();

class EntityId;
class Identity;

// ===================================================================

class EntityId : public ::google::protobuf::Message {
 public:
  EntityId();
  virtual ~EntityId();
  
  EntityId(const EntityId& from);
  
  inline EntityId& operator=(const EntityId& from) {
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
  static const EntityId& default_instance();
  
  void Swap(EntityId* other);
  
  // implements Message ----------------------------------------------
  
  EntityId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EntityId& from);
  void MergeFrom(const EntityId& from);
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
  
  // required fixed64 high = 1;
  inline bool has_high() const;
  inline void clear_high();
  static const int kHighFieldNumber = 1;
  inline ::google::protobuf::uint64 high() const;
  inline void set_high(::google::protobuf::uint64 value);
  
  // required fixed64 low = 2;
  inline bool has_low() const;
  inline void clear_low();
  static const int kLowFieldNumber = 2;
  inline ::google::protobuf::uint64 low() const;
  inline void set_low(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.EntityId)
 private:
  inline void set_has_high();
  inline void clear_has_high();
  inline void set_has_low();
  inline void clear_has_low();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 high_;
  ::google::protobuf::uint64 low_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_lib_2fprotocol_2fentity_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fentity_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fentity_2eproto();
  
  void InitAsDefaultInstance();
  static EntityId* default_instance_;
};
// -------------------------------------------------------------------

class Identity : public ::google::protobuf::Message {
 public:
  Identity();
  virtual ~Identity();
  
  Identity(const Identity& from);
  
  inline Identity& operator=(const Identity& from) {
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
  static const Identity& default_instance();
  
  void Swap(Identity* other);
  
  // implements Message ----------------------------------------------
  
  Identity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Identity& from);
  void MergeFrom(const Identity& from);
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
  
  // optional .bnet.protocol.EntityId account_id = 1;
  inline bool has_account_id() const;
  inline void clear_account_id();
  static const int kAccountIdFieldNumber = 1;
  inline const ::bnet::protocol::EntityId& account_id() const;
  inline ::bnet::protocol::EntityId* mutable_account_id();
  inline ::bnet::protocol::EntityId* release_account_id();
  
  // optional .bnet.protocol.EntityId game_account_id = 2;
  inline bool has_game_account_id() const;
  inline void clear_game_account_id();
  static const int kGameAccountIdFieldNumber = 2;
  inline const ::bnet::protocol::EntityId& game_account_id() const;
  inline ::bnet::protocol::EntityId* mutable_game_account_id();
  inline ::bnet::protocol::EntityId* release_game_account_id();
  
  // optional .bnet.protocol.EntityId toon_id = 3;
  inline bool has_toon_id() const;
  inline void clear_toon_id();
  static const int kToonIdFieldNumber = 3;
  inline const ::bnet::protocol::EntityId& toon_id() const;
  inline ::bnet::protocol::EntityId* mutable_toon_id();
  inline ::bnet::protocol::EntityId* release_toon_id();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.Identity)
 private:
  inline void set_has_account_id();
  inline void clear_has_account_id();
  inline void set_has_game_account_id();
  inline void clear_has_game_account_id();
  inline void set_has_toon_id();
  inline void clear_has_toon_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::bnet::protocol::EntityId* account_id_;
  ::bnet::protocol::EntityId* game_account_id_;
  ::bnet::protocol::EntityId* toon_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_lib_2fprotocol_2fentity_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fentity_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fentity_2eproto();
  
  void InitAsDefaultInstance();
  static Identity* default_instance_;
};
// ===================================================================


// ===================================================================

// EntityId

// required fixed64 high = 1;
inline bool EntityId::has_high() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EntityId::set_has_high() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EntityId::clear_has_high() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EntityId::clear_high() {
  high_ = GOOGLE_ULONGLONG(0);
  clear_has_high();
}
inline ::google::protobuf::uint64 EntityId::high() const {
  return high_;
}
inline void EntityId::set_high(::google::protobuf::uint64 value) {
  set_has_high();
  high_ = value;
}

// required fixed64 low = 2;
inline bool EntityId::has_low() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EntityId::set_has_low() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EntityId::clear_has_low() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EntityId::clear_low() {
  low_ = GOOGLE_ULONGLONG(0);
  clear_has_low();
}
inline ::google::protobuf::uint64 EntityId::low() const {
  return low_;
}
inline void EntityId::set_low(::google::protobuf::uint64 value) {
  set_has_low();
  low_ = value;
}

// -------------------------------------------------------------------

// Identity

// optional .bnet.protocol.EntityId account_id = 1;
inline bool Identity::has_account_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Identity::set_has_account_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Identity::clear_has_account_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Identity::clear_account_id() {
  if (account_id_ != NULL) account_id_->::bnet::protocol::EntityId::Clear();
  clear_has_account_id();
}
inline const ::bnet::protocol::EntityId& Identity::account_id() const {
  return account_id_ != NULL ? *account_id_ : *default_instance_->account_id_;
}
inline ::bnet::protocol::EntityId* Identity::mutable_account_id() {
  set_has_account_id();
  if (account_id_ == NULL) account_id_ = new ::bnet::protocol::EntityId;
  return account_id_;
}
inline ::bnet::protocol::EntityId* Identity::release_account_id() {
  clear_has_account_id();
  ::bnet::protocol::EntityId* temp = account_id_;
  account_id_ = NULL;
  return temp;
}

// optional .bnet.protocol.EntityId game_account_id = 2;
inline bool Identity::has_game_account_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Identity::set_has_game_account_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Identity::clear_has_game_account_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Identity::clear_game_account_id() {
  if (game_account_id_ != NULL) game_account_id_->::bnet::protocol::EntityId::Clear();
  clear_has_game_account_id();
}
inline const ::bnet::protocol::EntityId& Identity::game_account_id() const {
  return game_account_id_ != NULL ? *game_account_id_ : *default_instance_->game_account_id_;
}
inline ::bnet::protocol::EntityId* Identity::mutable_game_account_id() {
  set_has_game_account_id();
  if (game_account_id_ == NULL) game_account_id_ = new ::bnet::protocol::EntityId;
  return game_account_id_;
}
inline ::bnet::protocol::EntityId* Identity::release_game_account_id() {
  clear_has_game_account_id();
  ::bnet::protocol::EntityId* temp = game_account_id_;
  game_account_id_ = NULL;
  return temp;
}

// optional .bnet.protocol.EntityId toon_id = 3;
inline bool Identity::has_toon_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Identity::set_has_toon_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Identity::clear_has_toon_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Identity::clear_toon_id() {
  if (toon_id_ != NULL) toon_id_->::bnet::protocol::EntityId::Clear();
  clear_has_toon_id();
}
inline const ::bnet::protocol::EntityId& Identity::toon_id() const {
  return toon_id_ != NULL ? *toon_id_ : *default_instance_->toon_id_;
}
inline ::bnet::protocol::EntityId* Identity::mutable_toon_id() {
  set_has_toon_id();
  if (toon_id_ == NULL) toon_id_ = new ::bnet::protocol::EntityId;
  return toon_id_;
}
inline ::bnet::protocol::EntityId* Identity::release_toon_id() {
  clear_has_toon_id();
  ::bnet::protocol::EntityId* temp = toon_id_;
  toon_id_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lib_2fprotocol_2fentity_2eproto__INCLUDED
