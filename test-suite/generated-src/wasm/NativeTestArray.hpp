// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from array.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "test_array.hpp"

namespace djinni_generated {

struct NativeTestArray : ::djinni::JsInterface<::testsuite::TestArray, NativeTestArray> {
    using CppType = std::shared_ptr<::testsuite::TestArray>;
    using CppOptType = std::shared_ptr<::testsuite::TestArray>;
    using JsType = em::val;
    using Boxed = NativeTestArray;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val testStringArray(const em::val& w_a);
    static em::val testIntArray(const em::val& w_a);
    static em::val testRecordArray(const em::val& w_a);
    static em::val testArrayOfArray(const em::val& w_a);

};

}  // namespace djinni_generated
