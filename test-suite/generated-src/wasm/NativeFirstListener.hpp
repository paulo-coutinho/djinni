// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "first_listener.hpp"

namespace djinni_generated {

struct NativeFirstListener : ::djinni::JsInterface<::testsuite::FirstListener, NativeFirstListener> {
    using CppType = std::shared_ptr<::testsuite::FirstListener>;
    using CppOptType = std::shared_ptr<::testsuite::FirstListener>;
    using JsType = em::val;
    using Boxed = NativeFirstListener;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }


};

}  // namespace djinni_generated
