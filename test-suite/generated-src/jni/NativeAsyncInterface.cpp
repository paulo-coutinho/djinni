// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#include "NativeAsyncInterface.hpp"  // my header
#include "Future_jni.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

NativeAsyncInterface::NativeAsyncInterface() : ::djinni::JniInterface<::testsuite::AsyncInterface, NativeAsyncInterface>() {}

NativeAsyncInterface::~NativeAsyncInterface() = default;

NativeAsyncInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeAsyncInterface::JavaProxy::~JavaProxy() = default;

::djinni::Future<std::string> NativeAsyncInterface::JavaProxy::future_roundtrip(::djinni::Future<int32_t> c_f) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeAsyncInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_futureRoundtrip,
                                         ::djinni::get(::djinni::FutureAdaptor<::djinni::I32>::fromCpp(jniEnv, std::move(c_f))));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::FutureAdaptor<::djinni::String>::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
