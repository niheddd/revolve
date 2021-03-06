// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_inserted.proto

#include "model_inserted.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_model_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Model_model_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace revolve {
namespace msgs {
class ModelInsertedDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ModelInserted> _instance;
} _ModelInserted_default_instance_;
}  // namespace msgs
}  // namespace revolve
static void InitDefaultsscc_info_ModelInserted_model_5finserted_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::revolve::msgs::_ModelInserted_default_instance_;
    new (ptr) ::revolve::msgs::ModelInserted();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::revolve::msgs::ModelInserted::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ModelInserted_model_5finserted_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ModelInserted_model_5finserted_2eproto}, {
      &scc_info_Time_time_2eproto.base,
      &scc_info_Model_model_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_model_5finserted_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_model_5finserted_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_model_5finserted_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_model_5finserted_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::ModelInserted, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::ModelInserted, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::ModelInserted, time_),
  PROTOBUF_FIELD_OFFSET(::revolve::msgs::ModelInserted, model_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::revolve::msgs::ModelInserted)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::revolve::msgs::_ModelInserted_default_instance_),
};

const char descriptor_table_protodef_model_5finserted_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024model_inserted.proto\022\014revolve.msgs\032\013mo"
  "del.proto\032\ntime.proto\"S\n\rModelInserted\022\037"
  "\n\004time\030\001 \002(\0132\021.gazebo.msgs.Time\022!\n\005model"
  "\030\002 \002(\0132\022.gazebo.msgs.Model"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_model_5finserted_2eproto_deps[2] = {
  &::descriptor_table_model_2eproto,
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_model_5finserted_2eproto_sccs[1] = {
  &scc_info_ModelInserted_model_5finserted_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_model_5finserted_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5finserted_2eproto = {
  false, false, descriptor_table_protodef_model_5finserted_2eproto, "model_inserted.proto", 146,
  &descriptor_table_model_5finserted_2eproto_once, descriptor_table_model_5finserted_2eproto_sccs, descriptor_table_model_5finserted_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_model_5finserted_2eproto::offsets,
  file_level_metadata_model_5finserted_2eproto, 1, file_level_enum_descriptors_model_5finserted_2eproto, file_level_service_descriptors_model_5finserted_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_model_5finserted_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_model_5finserted_2eproto)), true);
namespace revolve {
namespace msgs {

// ===================================================================

void ModelInserted::InitAsDefaultInstance() {
  ::revolve::msgs::_ModelInserted_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
  ::revolve::msgs::_ModelInserted_default_instance_._instance.get_mutable()->model_ = const_cast< ::gazebo::msgs::Model*>(
      ::gazebo::msgs::Model::internal_default_instance());
}
class ModelInserted::_Internal {
 public:
  using HasBits = decltype(std::declval<ModelInserted>()._has_bits_);
  static const ::gazebo::msgs::Time& time(const ModelInserted* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Model& model(const ModelInserted* msg);
  static void set_has_model(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

const ::gazebo::msgs::Time&
ModelInserted::_Internal::time(const ModelInserted* msg) {
  return *msg->time_;
}
const ::gazebo::msgs::Model&
ModelInserted::_Internal::model(const ModelInserted* msg) {
  return *msg->model_;
}
void ModelInserted::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void ModelInserted::clear_model() {
  if (model_ != nullptr) model_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
ModelInserted::ModelInserted(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:revolve.msgs.ModelInserted)
}
ModelInserted::ModelInserted(const ModelInserted& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  if (from._internal_has_model()) {
    model_ = new ::gazebo::msgs::Model(*from.model_);
  } else {
    model_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:revolve.msgs.ModelInserted)
}

void ModelInserted::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ModelInserted_model_5finserted_2eproto.base);
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&model_) -
      reinterpret_cast<char*>(&time_)) + sizeof(model_));
}

ModelInserted::~ModelInserted() {
  // @@protoc_insertion_point(destructor:revolve.msgs.ModelInserted)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ModelInserted::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete time_;
  if (this != internal_default_instance()) delete model_;
}

void ModelInserted::ArenaDtor(void* object) {
  ModelInserted* _this = reinterpret_cast< ModelInserted* >(object);
  (void)_this;
}
void ModelInserted::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ModelInserted::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ModelInserted& ModelInserted::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ModelInserted_model_5finserted_2eproto.base);
  return *internal_default_instance();
}


void ModelInserted::Clear() {
// @@protoc_insertion_point(message_clear_start:revolve.msgs.ModelInserted)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(time_ != nullptr);
      time_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(model_ != nullptr);
      model_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ModelInserted::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Time time = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Model model = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_model(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ModelInserted::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:revolve.msgs.ModelInserted)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::time(this), target, stream);
  }

  // required .gazebo.msgs.Model model = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::model(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:revolve.msgs.ModelInserted)
  return target;
}

size_t ModelInserted::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:revolve.msgs.ModelInserted)
  size_t total_size = 0;

  if (_internal_has_time()) {
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }

  if (_internal_has_model()) {
    // required .gazebo.msgs.Model model = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_);
  }

  return total_size;
}
size_t ModelInserted::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:revolve.msgs.ModelInserted)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);

    // required .gazebo.msgs.Model model = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *model_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ModelInserted::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:revolve.msgs.ModelInserted)
  GOOGLE_DCHECK_NE(&from, this);
  const ModelInserted* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ModelInserted>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:revolve.msgs.ModelInserted)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:revolve.msgs.ModelInserted)
    MergeFrom(*source);
  }
}

void ModelInserted::MergeFrom(const ModelInserted& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:revolve.msgs.ModelInserted)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_time()->::gazebo::msgs::Time::MergeFrom(from._internal_time());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_model()->::gazebo::msgs::Model::MergeFrom(from._internal_model());
    }
  }
}

void ModelInserted::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:revolve.msgs.ModelInserted)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModelInserted::CopyFrom(const ModelInserted& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:revolve.msgs.ModelInserted)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelInserted::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  if (_internal_has_model()) {
    if (!model_->IsInitialized()) return false;
  }
  return true;
}

void ModelInserted::InternalSwap(ModelInserted* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ModelInserted, model_)
      + sizeof(ModelInserted::model_)
      - PROTOBUF_FIELD_OFFSET(ModelInserted, time_)>(
          reinterpret_cast<char*>(&time_),
          reinterpret_cast<char*>(&other->time_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ModelInserted::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace revolve
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::revolve::msgs::ModelInserted* Arena::CreateMaybeMessage< ::revolve::msgs::ModelInserted >(Arena* arena) {
  return Arena::CreateMessageInternal< ::revolve::msgs::ModelInserted >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
