// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from date.djinni

#pragma once

#include "date_record.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeDateRecord
{
    using CppType = ::testsuite::DateRecord;
    using JsType = em::val;
    using Boxed = NativeDateRecord;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated
