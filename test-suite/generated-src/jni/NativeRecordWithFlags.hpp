// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum_flags.djinni

#pragma once

#include "djinni_support.hpp"
#include "record_with_flags.hpp"

namespace djinni_generated {

class NativeRecordWithFlags final {
public:
    using CppType = ::testsuite::RecordWithFlags;
    using JniType = jobject;

    using Boxed = NativeRecordWithFlags;

    ~NativeRecordWithFlags();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRecordWithFlags();
    friend ::djinni::JniClass<NativeRecordWithFlags>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/RecordWithFlags") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/EnumSet;)V") };
    const jfieldID field_mAccess { ::djinni::jniGetFieldID(clazz.get(), "mAccess", "Ljava/util/EnumSet;") };
};

}  // namespace djinni_generated
