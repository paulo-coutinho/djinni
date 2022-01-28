// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from extended_record.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "interface_using_extended_record.hpp"

namespace djinni_generated {

struct NativeInterfaceUsingExtendedRecord : ::djinni::JsInterface<::testsuite::InterfaceUsingExtendedRecord, NativeInterfaceUsingExtendedRecord> {
    using CppType = std::shared_ptr<::testsuite::InterfaceUsingExtendedRecord>;
    using CppOptType = std::shared_ptr<::testsuite::InterfaceUsingExtendedRecord>;
    using JsType = em::val;
    using Boxed = NativeInterfaceUsingExtendedRecord;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val meth(const CppType& self, const em::val& w_er);

    static void staticInitializeConstants();
};

}  // namespace djinni_generated
