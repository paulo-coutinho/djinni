// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "sample_interface.hpp"

namespace djinni_generated {

struct NativeSampleInterface : ::djinni::JsInterface<::testsuite::SampleInterface, NativeSampleInterface> {
    using CppType = std::shared_ptr<::testsuite::SampleInterface>;
    using CppOptType = std::shared_ptr<::testsuite::SampleInterface>;
    using JsType = em::val;
    using Boxed = NativeSampleInterface;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();


    struct JsProxy: ::djinni::JsProxyBase, ::testsuite::SampleInterface, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
    };
};

}  // namespace djinni_generated
