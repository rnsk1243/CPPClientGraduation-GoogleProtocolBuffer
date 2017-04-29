// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: graduationWork.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "graduationWork.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace graduationWork {
class Vector3DefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Vector3> {
} _Vector3_default_instance_;
class TransformDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Transform> {
} _Transform_default_instance_;
class MessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Message> {
} _Message_default_instance_;

namespace protobuf_graduationWork_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[3];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, z_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, packetnum_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, rotation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transform, scale_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, message_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Vector3)},
  { 7, -1, sizeof(Transform)},
  { 15, -1, sizeof(Message)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Vector3_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Transform_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Message_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "graduationWork.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

}  // namespace

void TableStruct::Shutdown() {
  _Vector3_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Transform_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _Message_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Vector3_default_instance_.DefaultConstruct();
  _Transform_default_instance_.DefaultConstruct();
  _Message_default_instance_.DefaultConstruct();
  _Transform_default_instance_.get_mutable()->position_ = const_cast< ::graduationWork::Vector3*>(
      ::graduationWork::Vector3::internal_default_instance());
  _Transform_default_instance_.get_mutable()->rotation_ = const_cast< ::graduationWork::Vector3*>(
      ::graduationWork::Vector3::internal_default_instance());
  _Transform_default_instance_.get_mutable()->scale_ = const_cast< ::graduationWork::Vector3*>(
      ::graduationWork::Vector3::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024graduationWork.proto\022\016graduationWork\"*"
      "\n\007Vector3\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z\030\003 \001"
      "(\002\"\234\001\n\tTransform\022\021\n\tpacketNum\030\001 \001(\005\022)\n\010p"
      "osition\030\002 \001(\0132\027.graduationWork.Vector3\022)"
      "\n\010rotation\030\003 \001(\0132\027.graduationWork.Vector"
      "3\022&\n\005scale\030\004 \001(\0132\027.graduationWork.Vector"
      "3\"\032\n\007Message\022\017\n\007message\030\001 \001(\014B+\252\002(Google"
      ".Protobuf.GraduationWork.Transformb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 322);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "graduationWork.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_graduationWork_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3::kXFieldNumber;
const int Vector3::kYFieldNumber;
const int Vector3::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3::Vector3()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_graduationWork_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:graduationWork.Vector3)
}
Vector3::Vector3(float x, float y, float z)
{
	x_ = x; y_ = y; z_ = z;
}
Vector3::Vector3(const Vector3& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:graduationWork.Vector3)
}

void Vector3::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  _cached_size_ = 0;
}

Vector3::~Vector3() {
  // @@protoc_insertion_point(destructor:graduationWork.Vector3)
  SharedDtor();
}

void Vector3::SharedDtor() {
}

void Vector3::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3::descriptor() {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[0].descriptor;
}

const Vector3& Vector3::default_instance() {
  protobuf_graduationWork_2eproto::InitDefaults();
  return *internal_default_instance();
}

Vector3* Vector3::New(::google::protobuf::Arena* arena) const {
  Vector3* n = new Vector3;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Vector3::Clear() {
// @@protoc_insertion_point(message_clear_start:graduationWork.Vector3)
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
}

bool Vector3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:graduationWork.Vector3)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float x = 1;
      case 1: {
        if (tag == 13u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float y = 2;
      case 2: {
        if (tag == 21u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float z = 3;
      case 3: {
        if (tag == 29u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:graduationWork.Vector3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:graduationWork.Vector3)
  return false;
#undef DO_
}

void Vector3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:graduationWork.Vector3)
  // float x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(), output);
  }

  // float y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(), output);
  }

  // float z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:graduationWork.Vector3)
}

::google::protobuf::uint8* Vector3::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:graduationWork.Vector3)
  // float x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->x(), target);
  }

  // float y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->y(), target);
  }

  // float z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:graduationWork.Vector3)
  return target;
}

size_t Vector3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:graduationWork.Vector3)
  size_t total_size = 0;

  // float x = 1;
  if (this->x() != 0) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (this->y() != 0) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (this->z() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vector3::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:graduationWork.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:graduationWork.Vector3)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:graduationWork.Vector3)
    MergeFrom(*source);
  }
}

void Vector3::MergeFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:graduationWork.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Vector3::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:graduationWork.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3::CopyFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:graduationWork.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3::IsInitialized() const {
  return true;
}

void Vector3::Swap(Vector3* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3::InternalSwap(Vector3* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vector3::GetMetadata() const {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector3

// float x = 1;
void Vector3::clear_x() {
  x_ = 0;
}
float Vector3::x() const {
  // @@protoc_insertion_point(field_get:graduationWork.Vector3.x)
  return x_;
}
void Vector3::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:graduationWork.Vector3.x)
}

// float y = 2;
void Vector3::clear_y() {
  y_ = 0;
}
float Vector3::y() const {
  // @@protoc_insertion_point(field_get:graduationWork.Vector3.y)
  return y_;
}
void Vector3::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:graduationWork.Vector3.y)
}

// float z = 3;
void Vector3::clear_z() {
  z_ = 0;
}
float Vector3::z() const {
  // @@protoc_insertion_point(field_get:graduationWork.Vector3.z)
  return z_;
}
void Vector3::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:graduationWork.Vector3.z)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transform::kPacketNumFieldNumber;
const int Transform::kPositionFieldNumber;
const int Transform::kRotationFieldNumber;
const int Transform::kScaleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transform::Transform()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_graduationWork_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:graduationWork.Transform)
}
Transform::Transform(Vector3 * position, Vector3 * rotation, Vector3 * scale)
{
	position_ = position;
	rotation_ = rotation;
	scale_ = scale;
}
Transform::Transform(const Transform& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_position()) {
    position_ = new ::graduationWork::Vector3(*from.position_);
  } else {
    position_ = NULL;
  }
  if (from.has_rotation()) {
    rotation_ = new ::graduationWork::Vector3(*from.rotation_);
  } else {
    rotation_ = NULL;
  }
  if (from.has_scale()) {
    scale_ = new ::graduationWork::Vector3(*from.scale_);
  } else {
    scale_ = NULL;
  }
  packetnum_ = from.packetnum_;
  // @@protoc_insertion_point(copy_constructor:graduationWork.Transform)
}

void Transform::SharedCtor() {
  ::memset(&position_, 0, reinterpret_cast<char*>(&packetnum_) -
    reinterpret_cast<char*>(&position_) + sizeof(packetnum_));
  _cached_size_ = 0;
}

Transform::~Transform() {
  // @@protoc_insertion_point(destructor:graduationWork.Transform)
  SharedDtor();
}

void Transform::SharedDtor() {
  if (this != internal_default_instance()) {
	  release_position();
    delete position_;
  }
  if (this != internal_default_instance()) {
	  release_rotation();
    delete rotation_;
  }
  if (this != internal_default_instance()) {
	  release_scale();
    delete scale_;
  }
}

void Transform::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transform::descriptor() {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[1].descriptor;
}

const Transform& Transform::default_instance() {
  protobuf_graduationWork_2eproto::InitDefaults();
  return *internal_default_instance();
}

Transform* Transform::New(::google::protobuf::Arena* arena) const {
  Transform* n = new Transform;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transform::Clear() {
// @@protoc_insertion_point(message_clear_start:graduationWork.Transform)
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  if (GetArenaNoVirtual() == NULL && rotation_ != NULL) {
    delete rotation_;
  }
  rotation_ = NULL;
  if (GetArenaNoVirtual() == NULL && scale_ != NULL) {
    delete scale_;
  }
  scale_ = NULL;
  packetnum_ = 0;
}

bool Transform::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:graduationWork.Transform)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 packetNum = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &packetnum_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .graduationWork.Vector3 position = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .graduationWork.Vector3 rotation = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rotation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .graduationWork.Vector3 scale = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scale()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:graduationWork.Transform)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:graduationWork.Transform)
  return false;
#undef DO_
}

void Transform::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:graduationWork.Transform)
  // int32 packetNum = 1;
  if (this->packetnum() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->packetnum(), output);
  }

  // .graduationWork.Vector3 position = 2;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->position_, output);
  }

  // .graduationWork.Vector3 rotation = 3;
  if (this->has_rotation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->rotation_, output);
  }

  // .graduationWork.Vector3 scale = 4;
  if (this->has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->scale_, output);
  }

  // @@protoc_insertion_point(serialize_end:graduationWork.Transform)
}

::google::protobuf::uint8* Transform::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:graduationWork.Transform)
  // int32 packetNum = 1;
  if (this->packetnum() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->packetnum(), target);
  }

  // .graduationWork.Vector3 position = 2;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->position_, false, target);
  }

  // .graduationWork.Vector3 rotation = 3;
  if (this->has_rotation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->rotation_, false, target);
  }

  // .graduationWork.Vector3 scale = 4;
  if (this->has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->scale_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:graduationWork.Transform)
  return target;
}

size_t Transform::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:graduationWork.Transform)
  size_t total_size = 0;

  // .graduationWork.Vector3 position = 2;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->position_);
  }

  // .graduationWork.Vector3 rotation = 3;
  if (this->has_rotation()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rotation_);
  }

  // .graduationWork.Vector3 scale = 4;
  if (this->has_scale()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->scale_);
  }

  // int32 packetNum = 1;
  if (this->packetnum() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->packetnum());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transform::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:graduationWork.Transform)
  GOOGLE_DCHECK_NE(&from, this);
  const Transform* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Transform>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:graduationWork.Transform)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:graduationWork.Transform)
    MergeFrom(*source);
  }
}

void Transform::MergeFrom(const Transform& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:graduationWork.Transform)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_position()) {
    mutable_position()->::graduationWork::Vector3::MergeFrom(from.position());
  }
  if (from.has_rotation()) {
    mutable_rotation()->::graduationWork::Vector3::MergeFrom(from.rotation());
  }
  if (from.has_scale()) {
    mutable_scale()->::graduationWork::Vector3::MergeFrom(from.scale());
  }
  if (from.packetnum() != 0) {
    set_packetnum(from.packetnum());
  }
}

void Transform::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:graduationWork.Transform)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transform::CopyFrom(const Transform& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:graduationWork.Transform)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transform::IsInitialized() const {
  return true;
}

void Transform::Swap(Transform* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transform::InternalSwap(Transform* other) {
  std::swap(position_, other->position_);
  std::swap(rotation_, other->rotation_);
  std::swap(scale_, other->scale_);
  std::swap(packetnum_, other->packetnum_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transform::GetMetadata() const {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Transform

// int32 packetNum = 1;
void Transform::clear_packetnum() {
  packetnum_ = 0;
}
::google::protobuf::int32 Transform::packetnum() const {
  // @@protoc_insertion_point(field_get:graduationWork.Transform.packetNum)
  return packetnum_;
}
void Transform::set_packetnum(::google::protobuf::int32 value) {
  
  packetnum_ = value;
  // @@protoc_insertion_point(field_set:graduationWork.Transform.packetNum)
}

// .graduationWork.Vector3 position = 2;
bool Transform::has_position() const {
  return this != internal_default_instance() && position_ != NULL;
}
void Transform::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) delete position_;
  position_ = NULL;
}
const ::graduationWork::Vector3& Transform::position() const {
  // @@protoc_insertion_point(field_get:graduationWork.Transform.position)
  return position_ != NULL ? *position_
                         : *::graduationWork::Vector3::internal_default_instance();
}
::graduationWork::Vector3* Transform::mutable_position() {
  
  if (position_ == NULL) {
    position_ = new ::graduationWork::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:graduationWork.Transform.position)
  return position_;
}
::graduationWork::Vector3* Transform::release_position() {
  // @@protoc_insertion_point(field_release:graduationWork.Transform.position)
  
  ::graduationWork::Vector3* temp = position_;
  position_ = NULL;
  return temp;
}
void Transform::set_allocated_position(::graduationWork::Vector3* position) {
  delete position_;
  position_ = position;
  if (position) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:graduationWork.Transform.position)
}

// .graduationWork.Vector3 rotation = 3;
bool Transform::has_rotation() const {
  return this != internal_default_instance() && rotation_ != NULL;
}
void Transform::clear_rotation() {
  if (GetArenaNoVirtual() == NULL && rotation_ != NULL) delete rotation_;
  rotation_ = NULL;
}
const ::graduationWork::Vector3& Transform::rotation() const {
  // @@protoc_insertion_point(field_get:graduationWork.Transform.rotation)
  return rotation_ != NULL ? *rotation_
                         : *::graduationWork::Vector3::internal_default_instance();
}
::graduationWork::Vector3* Transform::mutable_rotation() {
  
  if (rotation_ == NULL) {
    rotation_ = new ::graduationWork::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:graduationWork.Transform.rotation)
  return rotation_;
}
::graduationWork::Vector3* Transform::release_rotation() {
  // @@protoc_insertion_point(field_release:graduationWork.Transform.rotation)
  
  ::graduationWork::Vector3* temp = rotation_;
  rotation_ = NULL;
  return temp;
}
void Transform::set_allocated_rotation(::graduationWork::Vector3* rotation) {
  delete rotation_;
  rotation_ = rotation;
  if (rotation) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:graduationWork.Transform.rotation)
}

// .graduationWork.Vector3 scale = 4;
bool Transform::has_scale() const {
  return this != internal_default_instance() && scale_ != NULL;
}
void Transform::clear_scale() {
  if (GetArenaNoVirtual() == NULL && scale_ != NULL) delete scale_;
  scale_ = NULL;
}
const ::graduationWork::Vector3& Transform::scale() const {
  // @@protoc_insertion_point(field_get:graduationWork.Transform.scale)
  return scale_ != NULL ? *scale_
                         : *::graduationWork::Vector3::internal_default_instance();
}
::graduationWork::Vector3* Transform::mutable_scale() {
  
  if (scale_ == NULL) {
    scale_ = new ::graduationWork::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:graduationWork.Transform.scale)
  return scale_;
}
::graduationWork::Vector3* Transform::release_scale() {
  // @@protoc_insertion_point(field_release:graduationWork.Transform.scale)
  
  ::graduationWork::Vector3* temp = scale_;
  scale_ = NULL;
  return temp;
}
void Transform::set_allocated_scale(::graduationWork::Vector3* scale) {
  delete scale_;
  scale_ = scale;
  if (scale) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:graduationWork.Transform.scale)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Message::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Message::Message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_graduationWork_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:graduationWork.Message)
}
Message::Message(const Message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  // @@protoc_insertion_point(copy_constructor:graduationWork.Message)
}

void Message::SharedCtor() {
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:graduationWork.Message)
  SharedDtor();
}

void Message::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Message::descriptor() {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[2].descriptor;
}

const Message& Message::default_instance() {
  protobuf_graduationWork_2eproto::InitDefaults();
  return *internal_default_instance();
}

Message* Message::New(::google::protobuf::Arena* arena) const {
  Message* n = new Message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:graduationWork.Message)
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:graduationWork.Message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes message = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:graduationWork.Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:graduationWork.Message)
  return false;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:graduationWork.Message)
  // bytes message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->message(), output);
  }

  // @@protoc_insertion_point(serialize_end:graduationWork.Message)
}

::google::protobuf::uint8* Message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:graduationWork.Message)
  // bytes message = 1;
  if (this->message().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->message(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:graduationWork.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:graduationWork.Message)
  size_t total_size = 0;

  // bytes message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:graduationWork.Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:graduationWork.Message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:graduationWork.Message)
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:graduationWork.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void Message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:graduationWork.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:graduationWork.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::Swap(Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Message::InternalSwap(Message* other) {
  message_.Swap(&other->message_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Message::GetMetadata() const {
  protobuf_graduationWork_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_graduationWork_2eproto::file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Message

// bytes message = 1;
void Message::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Message::message() const {
  // @@protoc_insertion_point(field_get:graduationWork.Message.message)
  return message_.GetNoArena();
}
void Message::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:graduationWork.Message.message)
}
#if LANG_CXX11
void Message::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:graduationWork.Message.message)
}
#endif
void Message::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:graduationWork.Message.message)
}
void Message::set_message(const void* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:graduationWork.Message.message)
}
::std::string* Message::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:graduationWork.Message.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Message::release_message() {
  // @@protoc_insertion_point(field_release:graduationWork.Message.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Message::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:graduationWork.Message.message)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace graduationWork

// @@protoc_insertion_point(global_scope)