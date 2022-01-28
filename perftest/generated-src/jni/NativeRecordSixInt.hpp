// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "RecordSixInt.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRecordSixInt final {
public:
    using CppType = ::snapchat::djinni::benchmark::RecordSixInt;
    using JniType = jobject;

    using Boxed = NativeRecordSixInt;

    ~NativeRecordSixInt();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRecordSixInt();
    friend ::djinni::JniClass<NativeRecordSixInt>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/snapchat/djinni/benchmark/RecordSixInt") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(JJJJJJ)V") };
    const jfieldID field_mI1 { ::djinni::jniGetFieldID(clazz.get(), "mI1", "J") };
    const jfieldID field_mI2 { ::djinni::jniGetFieldID(clazz.get(), "mI2", "J") };
    const jfieldID field_mI3 { ::djinni::jniGetFieldID(clazz.get(), "mI3", "J") };
    const jfieldID field_mI4 { ::djinni::jniGetFieldID(clazz.get(), "mI4", "J") };
    const jfieldID field_mI5 { ::djinni::jniGetFieldID(clazz.get(), "mI5", "J") };
    const jfieldID field_mI6 { ::djinni::jniGetFieldID(clazz.get(), "mI6", "J") };
};

}  // namespace djinni_generated
