// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wchar_test.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "wchar_test_helpers.hpp"

namespace djinni_generated {

struct NativeWcharTestHelpers : ::djinni::JsInterface<::testsuite::WcharTestHelpers, NativeWcharTestHelpers> {
    using CppType = std::shared_ptr<::testsuite::WcharTestHelpers>;
    using CppOptType = std::shared_ptr<::testsuite::WcharTestHelpers>;
    using JsType = em::val;
    using Boxed = NativeWcharTestHelpers;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val get_record();
    static std::wstring get_string();
    static bool check_string(const std::wstring& w_str);
    static bool check_record(const em::val& w_rec);

};

}  // namespace djinni_generated
