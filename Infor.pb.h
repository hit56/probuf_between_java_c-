// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Infor.proto

#ifndef PROTOBUF_Infor_2eproto__INCLUDED
#define PROTOBUF_Infor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Infor_2eproto();
void protobuf_InitDefaults_Infor_2eproto();
void protobuf_AssignDesc_Infor_2eproto();
void protobuf_ShutdownFile_Infor_2eproto();

class my_message;

// ===================================================================

class my_message : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:my_message) */ {
 public:
  my_message();
  virtual ~my_message();

  my_message(const my_message& from);

  inline my_message& operator=(const my_message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const my_message& default_instance();

  static const my_message* internal_default_instance();

  void Swap(my_message* other);

  // implements Message ----------------------------------------------

  inline my_message* New() const { return New(NULL); }

  my_message* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const my_message& from);
  void MergeFrom(const my_message& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(my_message* other);
  void UnsafeMergeFrom(const my_message& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string startedTime = 1;
  bool has_startedtime() const;
  void clear_startedtime();
  static const int kStartedTimeFieldNumber = 1;
  const ::std::string& startedtime() const;
  void set_startedtime(const ::std::string& value);
  void set_startedtime(const char* value);
  void set_startedtime(const char* value, size_t size);
  ::std::string* mutable_startedtime();
  ::std::string* release_startedtime();
  void set_allocated_startedtime(::std::string* startedtime);

  // required string version = 2;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // required double configuredCapacity = 3;
  bool has_configuredcapacity() const;
  void clear_configuredcapacity();
  static const int kConfiguredCapacityFieldNumber = 3;
  double configuredcapacity() const;
  void set_configuredcapacity(double value);

  // required double dfsUsed = 4;
  bool has_dfsused() const;
  void clear_dfsused();
  static const int kDfsUsedFieldNumber = 4;
  double dfsused() const;
  void set_dfsused(double value);

  // required int32 fileNum = 5;
  bool has_filenum() const;
  void clear_filenum();
  static const int kFileNumFieldNumber = 5;
  ::google::protobuf::int32 filenum() const;
  void set_filenum(::google::protobuf::int32 value);

  // required int32 replicatedFilesNum = 6;
  bool has_replicatedfilesnum() const;
  void clear_replicatedfilesnum();
  static const int kReplicatedFilesNumFieldNumber = 6;
  ::google::protobuf::int32 replicatedfilesnum() const;
  void set_replicatedfilesnum(::google::protobuf::int32 value);

  // required int32 blockNum = 7;
  bool has_blocknum() const;
  void clear_blocknum();
  static const int kBlockNumFieldNumber = 7;
  ::google::protobuf::int32 blocknum() const;
  void set_blocknum(::google::protobuf::int32 value);

  // required int32 livedNodeNum = 8;
  bool has_livednodenum() const;
  void clear_livednodenum();
  static const int kLivedNodeNumFieldNumber = 8;
  ::google::protobuf::int32 livednodenum() const;
  void set_livednodenum(::google::protobuf::int32 value);

  // required int32 decommissioningNodeNum = 9;
  bool has_decommissioningnodenum() const;
  void clear_decommissioningnodenum();
  static const int kDecommissioningNodeNumFieldNumber = 9;
  ::google::protobuf::int32 decommissioningnodenum() const;
  void set_decommissioningnodenum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:my_message)
 private:
  inline void set_has_startedtime();
  inline void clear_has_startedtime();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_configuredcapacity();
  inline void clear_has_configuredcapacity();
  inline void set_has_dfsused();
  inline void clear_has_dfsused();
  inline void set_has_filenum();
  inline void clear_has_filenum();
  inline void set_has_replicatedfilesnum();
  inline void clear_has_replicatedfilesnum();
  inline void set_has_blocknum();
  inline void clear_has_blocknum();
  inline void set_has_livednodenum();
  inline void clear_has_livednodenum();
  inline void set_has_decommissioningnodenum();
  inline void clear_has_decommissioningnodenum();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr startedtime_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  double configuredcapacity_;
  double dfsused_;
  ::google::protobuf::int32 filenum_;
  ::google::protobuf::int32 replicatedfilesnum_;
  ::google::protobuf::int32 blocknum_;
  ::google::protobuf::int32 livednodenum_;
  ::google::protobuf::int32 decommissioningnodenum_;
  friend void  protobuf_InitDefaults_Infor_2eproto_impl();
  friend void  protobuf_AddDesc_Infor_2eproto_impl();
  friend void protobuf_AssignDesc_Infor_2eproto();
  friend void protobuf_ShutdownFile_Infor_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<my_message> my_message_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// my_message

// required string startedTime = 1;
inline bool my_message::has_startedtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void my_message::set_has_startedtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void my_message::clear_has_startedtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void my_message::clear_startedtime() {
  startedtime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_startedtime();
}
inline const ::std::string& my_message::startedtime() const {
  // @@protoc_insertion_point(field_get:my_message.startedTime)
  return startedtime_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void my_message::set_startedtime(const ::std::string& value) {
  set_has_startedtime();
  startedtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_message.startedTime)
}
inline void my_message::set_startedtime(const char* value) {
  set_has_startedtime();
  startedtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_message.startedTime)
}
inline void my_message::set_startedtime(const char* value, size_t size) {
  set_has_startedtime();
  startedtime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_message.startedTime)
}
inline ::std::string* my_message::mutable_startedtime() {
  set_has_startedtime();
  // @@protoc_insertion_point(field_mutable:my_message.startedTime)
  return startedtime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* my_message::release_startedtime() {
  // @@protoc_insertion_point(field_release:my_message.startedTime)
  clear_has_startedtime();
  return startedtime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void my_message::set_allocated_startedtime(::std::string* startedtime) {
  if (startedtime != NULL) {
    set_has_startedtime();
  } else {
    clear_has_startedtime();
  }
  startedtime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), startedtime);
  // @@protoc_insertion_point(field_set_allocated:my_message.startedTime)
}

// required string version = 2;
inline bool my_message::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void my_message::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void my_message::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void my_message::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_version();
}
inline const ::std::string& my_message::version() const {
  // @@protoc_insertion_point(field_get:my_message.version)
  return version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void my_message::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_message.version)
}
inline void my_message::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_message.version)
}
inline void my_message::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_message.version)
}
inline ::std::string* my_message::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:my_message.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* my_message::release_version() {
  // @@protoc_insertion_point(field_release:my_message.version)
  clear_has_version();
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void my_message::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:my_message.version)
}

// required double configuredCapacity = 3;
inline bool my_message::has_configuredcapacity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void my_message::set_has_configuredcapacity() {
  _has_bits_[0] |= 0x00000004u;
}
inline void my_message::clear_has_configuredcapacity() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void my_message::clear_configuredcapacity() {
  configuredcapacity_ = 0;
  clear_has_configuredcapacity();
}
inline double my_message::configuredcapacity() const {
  // @@protoc_insertion_point(field_get:my_message.configuredCapacity)
  return configuredcapacity_;
}
inline void my_message::set_configuredcapacity(double value) {
  set_has_configuredcapacity();
  configuredcapacity_ = value;
  // @@protoc_insertion_point(field_set:my_message.configuredCapacity)
}

// required double dfsUsed = 4;
inline bool my_message::has_dfsused() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void my_message::set_has_dfsused() {
  _has_bits_[0] |= 0x00000008u;
}
inline void my_message::clear_has_dfsused() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void my_message::clear_dfsused() {
  dfsused_ = 0;
  clear_has_dfsused();
}
inline double my_message::dfsused() const {
  // @@protoc_insertion_point(field_get:my_message.dfsUsed)
  return dfsused_;
}
inline void my_message::set_dfsused(double value) {
  set_has_dfsused();
  dfsused_ = value;
  // @@protoc_insertion_point(field_set:my_message.dfsUsed)
}

// required int32 fileNum = 5;
inline bool my_message::has_filenum() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void my_message::set_has_filenum() {
  _has_bits_[0] |= 0x00000010u;
}
inline void my_message::clear_has_filenum() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void my_message::clear_filenum() {
  filenum_ = 0;
  clear_has_filenum();
}
inline ::google::protobuf::int32 my_message::filenum() const {
  // @@protoc_insertion_point(field_get:my_message.fileNum)
  return filenum_;
}
inline void my_message::set_filenum(::google::protobuf::int32 value) {
  set_has_filenum();
  filenum_ = value;
  // @@protoc_insertion_point(field_set:my_message.fileNum)
}

// required int32 replicatedFilesNum = 6;
inline bool my_message::has_replicatedfilesnum() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void my_message::set_has_replicatedfilesnum() {
  _has_bits_[0] |= 0x00000020u;
}
inline void my_message::clear_has_replicatedfilesnum() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void my_message::clear_replicatedfilesnum() {
  replicatedfilesnum_ = 0;
  clear_has_replicatedfilesnum();
}
inline ::google::protobuf::int32 my_message::replicatedfilesnum() const {
  // @@protoc_insertion_point(field_get:my_message.replicatedFilesNum)
  return replicatedfilesnum_;
}
inline void my_message::set_replicatedfilesnum(::google::protobuf::int32 value) {
  set_has_replicatedfilesnum();
  replicatedfilesnum_ = value;
  // @@protoc_insertion_point(field_set:my_message.replicatedFilesNum)
}

// required int32 blockNum = 7;
inline bool my_message::has_blocknum() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void my_message::set_has_blocknum() {
  _has_bits_[0] |= 0x00000040u;
}
inline void my_message::clear_has_blocknum() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void my_message::clear_blocknum() {
  blocknum_ = 0;
  clear_has_blocknum();
}
inline ::google::protobuf::int32 my_message::blocknum() const {
  // @@protoc_insertion_point(field_get:my_message.blockNum)
  return blocknum_;
}
inline void my_message::set_blocknum(::google::protobuf::int32 value) {
  set_has_blocknum();
  blocknum_ = value;
  // @@protoc_insertion_point(field_set:my_message.blockNum)
}

// required int32 livedNodeNum = 8;
inline bool my_message::has_livednodenum() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void my_message::set_has_livednodenum() {
  _has_bits_[0] |= 0x00000080u;
}
inline void my_message::clear_has_livednodenum() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void my_message::clear_livednodenum() {
  livednodenum_ = 0;
  clear_has_livednodenum();
}
inline ::google::protobuf::int32 my_message::livednodenum() const {
  // @@protoc_insertion_point(field_get:my_message.livedNodeNum)
  return livednodenum_;
}
inline void my_message::set_livednodenum(::google::protobuf::int32 value) {
  set_has_livednodenum();
  livednodenum_ = value;
  // @@protoc_insertion_point(field_set:my_message.livedNodeNum)
}

// required int32 decommissioningNodeNum = 9;
inline bool my_message::has_decommissioningnodenum() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void my_message::set_has_decommissioningnodenum() {
  _has_bits_[0] |= 0x00000100u;
}
inline void my_message::clear_has_decommissioningnodenum() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void my_message::clear_decommissioningnodenum() {
  decommissioningnodenum_ = 0;
  clear_has_decommissioningnodenum();
}
inline ::google::protobuf::int32 my_message::decommissioningnodenum() const {
  // @@protoc_insertion_point(field_get:my_message.decommissioningNodeNum)
  return decommissioningnodenum_;
}
inline void my_message::set_decommissioningnodenum(::google::protobuf::int32 value) {
  set_has_decommissioningnodenum();
  decommissioningnodenum_ = value;
  // @@protoc_insertion_point(field_set:my_message.decommissioningNodeNum)
}

inline const my_message* my_message::internal_default_instance() {
  return &my_message_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Infor_2eproto__INCLUDED
