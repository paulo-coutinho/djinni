// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from nested_collection.djinni

#include "NativeNestedCollection.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeNestedCollection::NativeNestedCollection() = default;

NativeNestedCollection::~NativeNestedCollection() = default;

auto NativeNestedCollection::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeNestedCollection>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::List<::djinni::Set<::djinni::String>>::fromCpp(jniEnv, c.set_list)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeNestedCollection::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeNestedCollection>::get();
    return {::djinni::List<::djinni::Set<::djinni::String>>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mSetList))};
}

}  // namespace djinni_generated
