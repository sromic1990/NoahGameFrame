// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFMsgMysql.proto

#ifndef PROTOBUF_NFMsgMysql_2eproto__INCLUDED
#define PROTOBUF_NFMsgMysql_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

// Internal implementation detail -- do not call these.
void LIBPROTOC_EXPORT protobuf_AddDesc_NFMsgMysql_2eproto();
void protobuf_AssignDesc_NFMsgMysql_2eproto();
void protobuf_ShutdownFile_NFMsgMysql_2eproto();

class PackMysqlParam;
class PackMysqlServerInfo;

// ===================================================================

class LIBPROTOC_EXPORT PackMysqlParam : public ::google::protobuf::Message {
 public:
  PackMysqlParam();
  virtual ~PackMysqlParam();

  PackMysqlParam(const PackMysqlParam& from);

  inline PackMysqlParam& operator=(const PackMysqlParam& from) {
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
  static const PackMysqlParam& default_instance();

  void Swap(PackMysqlParam* other);

  // implements Message ----------------------------------------------

  PackMysqlParam* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PackMysqlParam& from);
  void MergeFrom(const PackMysqlParam& from);
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

  // required bytes strRecordName = 1;
  inline bool has_strrecordname() const;
  inline void clear_strrecordname();
  static const int kStrRecordNameFieldNumber = 1;
  inline const ::std::string& strrecordname() const;
  inline void set_strrecordname(const ::std::string& value);
  inline void set_strrecordname(const char* value);
  inline void set_strrecordname(const void* value, size_t size);
  inline ::std::string* mutable_strrecordname();
  inline ::std::string* release_strrecordname();
  inline void set_allocated_strrecordname(::std::string* strrecordname);

  // required bytes strKey = 2;
  inline bool has_strkey() const;
  inline void clear_strkey();
  static const int kStrKeyFieldNumber = 2;
  inline const ::std::string& strkey() const;
  inline void set_strkey(const ::std::string& value);
  inline void set_strkey(const char* value);
  inline void set_strkey(const void* value, size_t size);
  inline ::std::string* mutable_strkey();
  inline ::std::string* release_strkey();
  inline void set_allocated_strkey(::std::string* strkey);

  // repeated bytes fieldVecList = 3;
  inline int fieldveclist_size() const;
  inline void clear_fieldveclist();
  static const int kFieldVecListFieldNumber = 3;
  inline const ::std::string& fieldveclist(int index) const;
  inline ::std::string* mutable_fieldveclist(int index);
  inline void set_fieldveclist(int index, const ::std::string& value);
  inline void set_fieldveclist(int index, const char* value);
  inline void set_fieldveclist(int index, const void* value, size_t size);
  inline ::std::string* add_fieldveclist();
  inline void add_fieldveclist(const ::std::string& value);
  inline void add_fieldveclist(const char* value);
  inline void add_fieldveclist(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& fieldveclist() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_fieldveclist();

  // repeated bytes valueVecList = 4;
  inline int valueveclist_size() const;
  inline void clear_valueveclist();
  static const int kValueVecListFieldNumber = 4;
  inline const ::std::string& valueveclist(int index) const;
  inline ::std::string* mutable_valueveclist(int index);
  inline void set_valueveclist(int index, const ::std::string& value);
  inline void set_valueveclist(int index, const char* value);
  inline void set_valueveclist(int index, const void* value, size_t size);
  inline ::std::string* add_valueveclist();
  inline void add_valueveclist(const ::std::string& value);
  inline void add_valueveclist(const char* value);
  inline void add_valueveclist(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& valueveclist() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_valueveclist();

  // required int64 bExit = 5;
  inline bool has_bexit() const;
  inline void clear_bexit();
  static const int kBExitFieldNumber = 5;
  inline ::google::protobuf::int64 bexit() const;
  inline void set_bexit(::google::protobuf::int64 value);

  // required int64 nreqid = 6;
  inline bool has_nreqid() const;
  inline void clear_nreqid();
  static const int kNreqidFieldNumber = 6;
  inline ::google::protobuf::int64 nreqid() const;
  inline void set_nreqid(::google::protobuf::int64 value);

  // required int64 nRet = 7;
  inline bool has_nret() const;
  inline void clear_nret();
  static const int kNRetFieldNumber = 7;
  inline ::google::protobuf::int64 nret() const;
  inline void set_nret(::google::protobuf::int64 value);

  // required int64 eType = 8;
  inline bool has_etype() const;
  inline void clear_etype();
  static const int kETypeFieldNumber = 8;
  inline ::google::protobuf::int64 etype() const;
  inline void set_etype(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NFMsg.PackMysqlParam)
 private:
  inline void set_has_strrecordname();
  inline void clear_has_strrecordname();
  inline void set_has_strkey();
  inline void clear_has_strkey();
  inline void set_has_bexit();
  inline void clear_has_bexit();
  inline void set_has_nreqid();
  inline void clear_has_nreqid();
  inline void set_has_nret();
  inline void clear_has_nret();
  inline void set_has_etype();
  inline void clear_has_etype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* strrecordname_;
  ::std::string* strkey_;
  ::google::protobuf::RepeatedPtrField< ::std::string> fieldveclist_;
  ::google::protobuf::RepeatedPtrField< ::std::string> valueveclist_;
  ::google::protobuf::int64 bexit_;
  ::google::protobuf::int64 nreqid_;
  ::google::protobuf::int64 nret_;
  ::google::protobuf::int64 etype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void LIBPROTOC_EXPORT protobuf_AddDesc_NFMsgMysql_2eproto();
  friend void protobuf_AssignDesc_NFMsgMysql_2eproto();
  friend void protobuf_ShutdownFile_NFMsgMysql_2eproto();

  void InitAsDefaultInstance();
  static PackMysqlParam* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOC_EXPORT PackMysqlServerInfo : public ::google::protobuf::Message {
 public:
  PackMysqlServerInfo();
  virtual ~PackMysqlServerInfo();

  PackMysqlServerInfo(const PackMysqlServerInfo& from);

  inline PackMysqlServerInfo& operator=(const PackMysqlServerInfo& from) {
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
  static const PackMysqlServerInfo& default_instance();

  void Swap(PackMysqlServerInfo* other);

  // implements Message ----------------------------------------------

  PackMysqlServerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PackMysqlServerInfo& from);
  void MergeFrom(const PackMysqlServerInfo& from);
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

  // required int64 nRconnectTime = 1;
  inline bool has_nrconnecttime() const;
  inline void clear_nrconnecttime();
  static const int kNRconnectTimeFieldNumber = 1;
  inline ::google::protobuf::int64 nrconnecttime() const;
  inline void set_nrconnecttime(::google::protobuf::int64 value);

  // required int64 nRconneCount = 2;
  inline bool has_nrconnecount() const;
  inline void clear_nrconnecount();
  static const int kNRconneCountFieldNumber = 2;
  inline ::google::protobuf::int64 nrconnecount() const;
  inline void set_nrconnecount(::google::protobuf::int64 value);

  // required int64 nPort = 3;
  inline bool has_nport() const;
  inline void clear_nport();
  static const int kNPortFieldNumber = 3;
  inline ::google::protobuf::int64 nport() const;
  inline void set_nport(::google::protobuf::int64 value);

  // required bytes strDBName = 4;
  inline bool has_strdbname() const;
  inline void clear_strdbname();
  static const int kStrDBNameFieldNumber = 4;
  inline const ::std::string& strdbname() const;
  inline void set_strdbname(const ::std::string& value);
  inline void set_strdbname(const char* value);
  inline void set_strdbname(const void* value, size_t size);
  inline ::std::string* mutable_strdbname();
  inline ::std::string* release_strdbname();
  inline void set_allocated_strdbname(::std::string* strdbname);

  // required bytes strDnsIp = 5;
  inline bool has_strdnsip() const;
  inline void clear_strdnsip();
  static const int kStrDnsIpFieldNumber = 5;
  inline const ::std::string& strdnsip() const;
  inline void set_strdnsip(const ::std::string& value);
  inline void set_strdnsip(const char* value);
  inline void set_strdnsip(const void* value, size_t size);
  inline ::std::string* mutable_strdnsip();
  inline ::std::string* release_strdnsip();
  inline void set_allocated_strdnsip(::std::string* strdnsip);

  // required bytes strDBUser = 6;
  inline bool has_strdbuser() const;
  inline void clear_strdbuser();
  static const int kStrDBUserFieldNumber = 6;
  inline const ::std::string& strdbuser() const;
  inline void set_strdbuser(const ::std::string& value);
  inline void set_strdbuser(const char* value);
  inline void set_strdbuser(const void* value, size_t size);
  inline ::std::string* mutable_strdbuser();
  inline ::std::string* release_strdbuser();
  inline void set_allocated_strdbuser(::std::string* strdbuser);

  // required bytes strDBPwd = 7;
  inline bool has_strdbpwd() const;
  inline void clear_strdbpwd();
  static const int kStrDBPwdFieldNumber = 7;
  inline const ::std::string& strdbpwd() const;
  inline void set_strdbpwd(const ::std::string& value);
  inline void set_strdbpwd(const char* value);
  inline void set_strdbpwd(const void* value, size_t size);
  inline ::std::string* mutable_strdbpwd();
  inline ::std::string* release_strdbpwd();
  inline void set_allocated_strdbpwd(::std::string* strdbpwd);

  // required int64 nServerID = 8;
  inline bool has_nserverid() const;
  inline void clear_nserverid();
  static const int kNServerIDFieldNumber = 8;
  inline ::google::protobuf::int64 nserverid() const;
  inline void set_nserverid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NFMsg.PackMysqlServerInfo)
 private:
  inline void set_has_nrconnecttime();
  inline void clear_has_nrconnecttime();
  inline void set_has_nrconnecount();
  inline void clear_has_nrconnecount();
  inline void set_has_nport();
  inline void clear_has_nport();
  inline void set_has_strdbname();
  inline void clear_has_strdbname();
  inline void set_has_strdnsip();
  inline void clear_has_strdnsip();
  inline void set_has_strdbuser();
  inline void clear_has_strdbuser();
  inline void set_has_strdbpwd();
  inline void clear_has_strdbpwd();
  inline void set_has_nserverid();
  inline void clear_has_nserverid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 nrconnecttime_;
  ::google::protobuf::int64 nrconnecount_;
  ::google::protobuf::int64 nport_;
  ::std::string* strdbname_;
  ::std::string* strdnsip_;
  ::std::string* strdbuser_;
  ::std::string* strdbpwd_;
  ::google::protobuf::int64 nserverid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void LIBPROTOC_EXPORT protobuf_AddDesc_NFMsgMysql_2eproto();
  friend void protobuf_AssignDesc_NFMsgMysql_2eproto();
  friend void protobuf_ShutdownFile_NFMsgMysql_2eproto();

  void InitAsDefaultInstance();
  static PackMysqlServerInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// PackMysqlParam

// required bytes strRecordName = 1;
inline bool PackMysqlParam::has_strrecordname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PackMysqlParam::set_has_strrecordname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PackMysqlParam::clear_has_strrecordname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PackMysqlParam::clear_strrecordname() {
  if (strrecordname_ != &::google::protobuf::internal::kEmptyString) {
    strrecordname_->clear();
  }
  clear_has_strrecordname();
}
inline const ::std::string& PackMysqlParam::strrecordname() const {
  return *strrecordname_;
}
inline void PackMysqlParam::set_strrecordname(const ::std::string& value) {
  set_has_strrecordname();
  if (strrecordname_ == &::google::protobuf::internal::kEmptyString) {
    strrecordname_ = new ::std::string;
  }
  strrecordname_->assign(value);
}
inline void PackMysqlParam::set_strrecordname(const char* value) {
  set_has_strrecordname();
  if (strrecordname_ == &::google::protobuf::internal::kEmptyString) {
    strrecordname_ = new ::std::string;
  }
  strrecordname_->assign(value);
}
inline void PackMysqlParam::set_strrecordname(const void* value, size_t size) {
  set_has_strrecordname();
  if (strrecordname_ == &::google::protobuf::internal::kEmptyString) {
    strrecordname_ = new ::std::string;
  }
  strrecordname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlParam::mutable_strrecordname() {
  set_has_strrecordname();
  if (strrecordname_ == &::google::protobuf::internal::kEmptyString) {
    strrecordname_ = new ::std::string;
  }
  return strrecordname_;
}
inline ::std::string* PackMysqlParam::release_strrecordname() {
  clear_has_strrecordname();
  if (strrecordname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strrecordname_;
    strrecordname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlParam::set_allocated_strrecordname(::std::string* strrecordname) {
  if (strrecordname_ != &::google::protobuf::internal::kEmptyString) {
    delete strrecordname_;
  }
  if (strrecordname) {
    set_has_strrecordname();
    strrecordname_ = strrecordname;
  } else {
    clear_has_strrecordname();
    strrecordname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes strKey = 2;
inline bool PackMysqlParam::has_strkey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PackMysqlParam::set_has_strkey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PackMysqlParam::clear_has_strkey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PackMysqlParam::clear_strkey() {
  if (strkey_ != &::google::protobuf::internal::kEmptyString) {
    strkey_->clear();
  }
  clear_has_strkey();
}
inline const ::std::string& PackMysqlParam::strkey() const {
  return *strkey_;
}
inline void PackMysqlParam::set_strkey(const ::std::string& value) {
  set_has_strkey();
  if (strkey_ == &::google::protobuf::internal::kEmptyString) {
    strkey_ = new ::std::string;
  }
  strkey_->assign(value);
}
inline void PackMysqlParam::set_strkey(const char* value) {
  set_has_strkey();
  if (strkey_ == &::google::protobuf::internal::kEmptyString) {
    strkey_ = new ::std::string;
  }
  strkey_->assign(value);
}
inline void PackMysqlParam::set_strkey(const void* value, size_t size) {
  set_has_strkey();
  if (strkey_ == &::google::protobuf::internal::kEmptyString) {
    strkey_ = new ::std::string;
  }
  strkey_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlParam::mutable_strkey() {
  set_has_strkey();
  if (strkey_ == &::google::protobuf::internal::kEmptyString) {
    strkey_ = new ::std::string;
  }
  return strkey_;
}
inline ::std::string* PackMysqlParam::release_strkey() {
  clear_has_strkey();
  if (strkey_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strkey_;
    strkey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlParam::set_allocated_strkey(::std::string* strkey) {
  if (strkey_ != &::google::protobuf::internal::kEmptyString) {
    delete strkey_;
  }
  if (strkey) {
    set_has_strkey();
    strkey_ = strkey;
  } else {
    clear_has_strkey();
    strkey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated bytes fieldVecList = 3;
inline int PackMysqlParam::fieldveclist_size() const {
  return fieldveclist_.size();
}
inline void PackMysqlParam::clear_fieldveclist() {
  fieldveclist_.Clear();
}
inline const ::std::string& PackMysqlParam::fieldveclist(int index) const {
  return fieldveclist_.Get(index);
}
inline ::std::string* PackMysqlParam::mutable_fieldveclist(int index) {
  return fieldveclist_.Mutable(index);
}
inline void PackMysqlParam::set_fieldveclist(int index, const ::std::string& value) {
  fieldveclist_.Mutable(index)->assign(value);
}
inline void PackMysqlParam::set_fieldveclist(int index, const char* value) {
  fieldveclist_.Mutable(index)->assign(value);
}
inline void PackMysqlParam::set_fieldveclist(int index, const void* value, size_t size) {
  fieldveclist_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlParam::add_fieldveclist() {
  return fieldveclist_.Add();
}
inline void PackMysqlParam::add_fieldveclist(const ::std::string& value) {
  fieldveclist_.Add()->assign(value);
}
inline void PackMysqlParam::add_fieldveclist(const char* value) {
  fieldveclist_.Add()->assign(value);
}
inline void PackMysqlParam::add_fieldveclist(const void* value, size_t size) {
  fieldveclist_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PackMysqlParam::fieldveclist() const {
  return fieldveclist_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PackMysqlParam::mutable_fieldveclist() {
  return &fieldveclist_;
}

// repeated bytes valueVecList = 4;
inline int PackMysqlParam::valueveclist_size() const {
  return valueveclist_.size();
}
inline void PackMysqlParam::clear_valueveclist() {
  valueveclist_.Clear();
}
inline const ::std::string& PackMysqlParam::valueveclist(int index) const {
  return valueveclist_.Get(index);
}
inline ::std::string* PackMysqlParam::mutable_valueveclist(int index) {
  return valueveclist_.Mutable(index);
}
inline void PackMysqlParam::set_valueveclist(int index, const ::std::string& value) {
  valueveclist_.Mutable(index)->assign(value);
}
inline void PackMysqlParam::set_valueveclist(int index, const char* value) {
  valueveclist_.Mutable(index)->assign(value);
}
inline void PackMysqlParam::set_valueveclist(int index, const void* value, size_t size) {
  valueveclist_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlParam::add_valueveclist() {
  return valueveclist_.Add();
}
inline void PackMysqlParam::add_valueveclist(const ::std::string& value) {
  valueveclist_.Add()->assign(value);
}
inline void PackMysqlParam::add_valueveclist(const char* value) {
  valueveclist_.Add()->assign(value);
}
inline void PackMysqlParam::add_valueveclist(const void* value, size_t size) {
  valueveclist_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
PackMysqlParam::valueveclist() const {
  return valueveclist_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
PackMysqlParam::mutable_valueveclist() {
  return &valueveclist_;
}

// required int64 bExit = 5;
inline bool PackMysqlParam::has_bexit() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PackMysqlParam::set_has_bexit() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PackMysqlParam::clear_has_bexit() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PackMysqlParam::clear_bexit() {
  bexit_ = GOOGLE_LONGLONG(0);
  clear_has_bexit();
}
inline ::google::protobuf::int64 PackMysqlParam::bexit() const {
  return bexit_;
}
inline void PackMysqlParam::set_bexit(::google::protobuf::int64 value) {
  set_has_bexit();
  bexit_ = value;
}

// required int64 nreqid = 6;
inline bool PackMysqlParam::has_nreqid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PackMysqlParam::set_has_nreqid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PackMysqlParam::clear_has_nreqid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PackMysqlParam::clear_nreqid() {
  nreqid_ = GOOGLE_LONGLONG(0);
  clear_has_nreqid();
}
inline ::google::protobuf::int64 PackMysqlParam::nreqid() const {
  return nreqid_;
}
inline void PackMysqlParam::set_nreqid(::google::protobuf::int64 value) {
  set_has_nreqid();
  nreqid_ = value;
}

// required int64 nRet = 7;
inline bool PackMysqlParam::has_nret() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PackMysqlParam::set_has_nret() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PackMysqlParam::clear_has_nret() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PackMysqlParam::clear_nret() {
  nret_ = GOOGLE_LONGLONG(0);
  clear_has_nret();
}
inline ::google::protobuf::int64 PackMysqlParam::nret() const {
  return nret_;
}
inline void PackMysqlParam::set_nret(::google::protobuf::int64 value) {
  set_has_nret();
  nret_ = value;
}

// required int64 eType = 8;
inline bool PackMysqlParam::has_etype() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void PackMysqlParam::set_has_etype() {
  _has_bits_[0] |= 0x00000080u;
}
inline void PackMysqlParam::clear_has_etype() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void PackMysqlParam::clear_etype() {
  etype_ = GOOGLE_LONGLONG(0);
  clear_has_etype();
}
inline ::google::protobuf::int64 PackMysqlParam::etype() const {
  return etype_;
}
inline void PackMysqlParam::set_etype(::google::protobuf::int64 value) {
  set_has_etype();
  etype_ = value;
}

// -------------------------------------------------------------------

// PackMysqlServerInfo

// required int64 nRconnectTime = 1;
inline bool PackMysqlServerInfo::has_nrconnecttime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PackMysqlServerInfo::set_has_nrconnecttime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PackMysqlServerInfo::clear_has_nrconnecttime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PackMysqlServerInfo::clear_nrconnecttime() {
  nrconnecttime_ = GOOGLE_LONGLONG(0);
  clear_has_nrconnecttime();
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nrconnecttime() const {
  return nrconnecttime_;
}
inline void PackMysqlServerInfo::set_nrconnecttime(::google::protobuf::int64 value) {
  set_has_nrconnecttime();
  nrconnecttime_ = value;
}

// required int64 nRconneCount = 2;
inline bool PackMysqlServerInfo::has_nrconnecount() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PackMysqlServerInfo::set_has_nrconnecount() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PackMysqlServerInfo::clear_has_nrconnecount() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PackMysqlServerInfo::clear_nrconnecount() {
  nrconnecount_ = GOOGLE_LONGLONG(0);
  clear_has_nrconnecount();
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nrconnecount() const {
  return nrconnecount_;
}
inline void PackMysqlServerInfo::set_nrconnecount(::google::protobuf::int64 value) {
  set_has_nrconnecount();
  nrconnecount_ = value;
}

// required int64 nPort = 3;
inline bool PackMysqlServerInfo::has_nport() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PackMysqlServerInfo::set_has_nport() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PackMysqlServerInfo::clear_has_nport() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PackMysqlServerInfo::clear_nport() {
  nport_ = GOOGLE_LONGLONG(0);
  clear_has_nport();
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nport() const {
  return nport_;
}
inline void PackMysqlServerInfo::set_nport(::google::protobuf::int64 value) {
  set_has_nport();
  nport_ = value;
}

// required bytes strDBName = 4;
inline bool PackMysqlServerInfo::has_strdbname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PackMysqlServerInfo::set_has_strdbname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PackMysqlServerInfo::clear_has_strdbname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PackMysqlServerInfo::clear_strdbname() {
  if (strdbname_ != &::google::protobuf::internal::kEmptyString) {
    strdbname_->clear();
  }
  clear_has_strdbname();
}
inline const ::std::string& PackMysqlServerInfo::strdbname() const {
  return *strdbname_;
}
inline void PackMysqlServerInfo::set_strdbname(const ::std::string& value) {
  set_has_strdbname();
  if (strdbname_ == &::google::protobuf::internal::kEmptyString) {
    strdbname_ = new ::std::string;
  }
  strdbname_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbname(const char* value) {
  set_has_strdbname();
  if (strdbname_ == &::google::protobuf::internal::kEmptyString) {
    strdbname_ = new ::std::string;
  }
  strdbname_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbname(const void* value, size_t size) {
  set_has_strdbname();
  if (strdbname_ == &::google::protobuf::internal::kEmptyString) {
    strdbname_ = new ::std::string;
  }
  strdbname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbname() {
  set_has_strdbname();
  if (strdbname_ == &::google::protobuf::internal::kEmptyString) {
    strdbname_ = new ::std::string;
  }
  return strdbname_;
}
inline ::std::string* PackMysqlServerInfo::release_strdbname() {
  clear_has_strdbname();
  if (strdbname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strdbname_;
    strdbname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlServerInfo::set_allocated_strdbname(::std::string* strdbname) {
  if (strdbname_ != &::google::protobuf::internal::kEmptyString) {
    delete strdbname_;
  }
  if (strdbname) {
    set_has_strdbname();
    strdbname_ = strdbname;
  } else {
    clear_has_strdbname();
    strdbname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes strDnsIp = 5;
inline bool PackMysqlServerInfo::has_strdnsip() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PackMysqlServerInfo::set_has_strdnsip() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PackMysqlServerInfo::clear_has_strdnsip() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PackMysqlServerInfo::clear_strdnsip() {
  if (strdnsip_ != &::google::protobuf::internal::kEmptyString) {
    strdnsip_->clear();
  }
  clear_has_strdnsip();
}
inline const ::std::string& PackMysqlServerInfo::strdnsip() const {
  return *strdnsip_;
}
inline void PackMysqlServerInfo::set_strdnsip(const ::std::string& value) {
  set_has_strdnsip();
  if (strdnsip_ == &::google::protobuf::internal::kEmptyString) {
    strdnsip_ = new ::std::string;
  }
  strdnsip_->assign(value);
}
inline void PackMysqlServerInfo::set_strdnsip(const char* value) {
  set_has_strdnsip();
  if (strdnsip_ == &::google::protobuf::internal::kEmptyString) {
    strdnsip_ = new ::std::string;
  }
  strdnsip_->assign(value);
}
inline void PackMysqlServerInfo::set_strdnsip(const void* value, size_t size) {
  set_has_strdnsip();
  if (strdnsip_ == &::google::protobuf::internal::kEmptyString) {
    strdnsip_ = new ::std::string;
  }
  strdnsip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlServerInfo::mutable_strdnsip() {
  set_has_strdnsip();
  if (strdnsip_ == &::google::protobuf::internal::kEmptyString) {
    strdnsip_ = new ::std::string;
  }
  return strdnsip_;
}
inline ::std::string* PackMysqlServerInfo::release_strdnsip() {
  clear_has_strdnsip();
  if (strdnsip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strdnsip_;
    strdnsip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlServerInfo::set_allocated_strdnsip(::std::string* strdnsip) {
  if (strdnsip_ != &::google::protobuf::internal::kEmptyString) {
    delete strdnsip_;
  }
  if (strdnsip) {
    set_has_strdnsip();
    strdnsip_ = strdnsip;
  } else {
    clear_has_strdnsip();
    strdnsip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes strDBUser = 6;
inline bool PackMysqlServerInfo::has_strdbuser() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PackMysqlServerInfo::set_has_strdbuser() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PackMysqlServerInfo::clear_has_strdbuser() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PackMysqlServerInfo::clear_strdbuser() {
  if (strdbuser_ != &::google::protobuf::internal::kEmptyString) {
    strdbuser_->clear();
  }
  clear_has_strdbuser();
}
inline const ::std::string& PackMysqlServerInfo::strdbuser() const {
  return *strdbuser_;
}
inline void PackMysqlServerInfo::set_strdbuser(const ::std::string& value) {
  set_has_strdbuser();
  if (strdbuser_ == &::google::protobuf::internal::kEmptyString) {
    strdbuser_ = new ::std::string;
  }
  strdbuser_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbuser(const char* value) {
  set_has_strdbuser();
  if (strdbuser_ == &::google::protobuf::internal::kEmptyString) {
    strdbuser_ = new ::std::string;
  }
  strdbuser_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbuser(const void* value, size_t size) {
  set_has_strdbuser();
  if (strdbuser_ == &::google::protobuf::internal::kEmptyString) {
    strdbuser_ = new ::std::string;
  }
  strdbuser_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbuser() {
  set_has_strdbuser();
  if (strdbuser_ == &::google::protobuf::internal::kEmptyString) {
    strdbuser_ = new ::std::string;
  }
  return strdbuser_;
}
inline ::std::string* PackMysqlServerInfo::release_strdbuser() {
  clear_has_strdbuser();
  if (strdbuser_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strdbuser_;
    strdbuser_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlServerInfo::set_allocated_strdbuser(::std::string* strdbuser) {
  if (strdbuser_ != &::google::protobuf::internal::kEmptyString) {
    delete strdbuser_;
  }
  if (strdbuser) {
    set_has_strdbuser();
    strdbuser_ = strdbuser;
  } else {
    clear_has_strdbuser();
    strdbuser_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes strDBPwd = 7;
inline bool PackMysqlServerInfo::has_strdbpwd() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PackMysqlServerInfo::set_has_strdbpwd() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PackMysqlServerInfo::clear_has_strdbpwd() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PackMysqlServerInfo::clear_strdbpwd() {
  if (strdbpwd_ != &::google::protobuf::internal::kEmptyString) {
    strdbpwd_->clear();
  }
  clear_has_strdbpwd();
}
inline const ::std::string& PackMysqlServerInfo::strdbpwd() const {
  return *strdbpwd_;
}
inline void PackMysqlServerInfo::set_strdbpwd(const ::std::string& value) {
  set_has_strdbpwd();
  if (strdbpwd_ == &::google::protobuf::internal::kEmptyString) {
    strdbpwd_ = new ::std::string;
  }
  strdbpwd_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbpwd(const char* value) {
  set_has_strdbpwd();
  if (strdbpwd_ == &::google::protobuf::internal::kEmptyString) {
    strdbpwd_ = new ::std::string;
  }
  strdbpwd_->assign(value);
}
inline void PackMysqlServerInfo::set_strdbpwd(const void* value, size_t size) {
  set_has_strdbpwd();
  if (strdbpwd_ == &::google::protobuf::internal::kEmptyString) {
    strdbpwd_ = new ::std::string;
  }
  strdbpwd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbpwd() {
  set_has_strdbpwd();
  if (strdbpwd_ == &::google::protobuf::internal::kEmptyString) {
    strdbpwd_ = new ::std::string;
  }
  return strdbpwd_;
}
inline ::std::string* PackMysqlServerInfo::release_strdbpwd() {
  clear_has_strdbpwd();
  if (strdbpwd_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = strdbpwd_;
    strdbpwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PackMysqlServerInfo::set_allocated_strdbpwd(::std::string* strdbpwd) {
  if (strdbpwd_ != &::google::protobuf::internal::kEmptyString) {
    delete strdbpwd_;
  }
  if (strdbpwd) {
    set_has_strdbpwd();
    strdbpwd_ = strdbpwd;
  } else {
    clear_has_strdbpwd();
    strdbpwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int64 nServerID = 8;
inline bool PackMysqlServerInfo::has_nserverid() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void PackMysqlServerInfo::set_has_nserverid() {
  _has_bits_[0] |= 0x00000080u;
}
inline void PackMysqlServerInfo::clear_has_nserverid() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void PackMysqlServerInfo::clear_nserverid() {
  nserverid_ = GOOGLE_LONGLONG(0);
  clear_has_nserverid();
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nserverid() const {
  return nserverid_;
}
inline void PackMysqlServerInfo::set_nserverid(::google::protobuf::int64 value) {
  set_has_nserverid();
  nserverid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NFMsgMysql_2eproto__INCLUDED
