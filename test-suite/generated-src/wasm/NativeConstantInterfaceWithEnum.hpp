// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constant_enum.djinni

#pragma once

#include "constant_interface_with_enum.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeConstantInterfaceWithEnum : ::djinni::JsInterface<::testsuite::ConstantInterfaceWithEnum, NativeConstantInterfaceWithEnum> {
    using CppType = std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>;
    using CppOptType = std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>;
    using JsType = em::val;
    using Boxed = NativeConstantInterfaceWithEnum;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();


};

}  // namespace djinni_generated
