// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "nested_outcome.hpp"

namespace djinni_generated {

struct NativeNestedOutcome
{
    using CppType = ::testsuite::NestedOutcome;
    using JsType = em::val;
    using Boxed = NativeNestedOutcome;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated
