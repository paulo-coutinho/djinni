// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from constants.djinni

#pragma once

#include "constants_interface.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeConstantsInterface : ::djinni::JsInterface<::testsuite::ConstantsInterface, NativeConstantsInterface> {
    using CppType = std::shared_ptr<::testsuite::ConstantsInterface>;
    using CppOptType = std::shared_ptr<::testsuite::ConstantsInterface>;
    using JsType = em::val;
    using Boxed = NativeConstantsInterface;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static void dummy(const CppType& self);

    static void staticInitializeConstants();
};

}  // namespace djinni_generated
