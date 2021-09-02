// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "conflict_user.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeConflictUser : ::djinni::JsInterface<::testsuite::ConflictUser, NativeConflictUser> {
    using CppType = std::shared_ptr<::testsuite::ConflictUser>;
    using CppOptType = std::shared_ptr<::testsuite::ConflictUser>;
    using JsType = em::val;
    using Boxed = NativeConflictUser;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val Conflict(const CppType& self);
    static bool conflict_arg(const CppType& self, const em::val& w_cs);

    struct JsProxy: ::djinni::JsProxyBase, ::testsuite::ConflictUser, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        std::shared_ptr<::testsuite::Conflict> Conflict() override;
        bool conflict_arg(const std::unordered_set<std::shared_ptr<::testsuite::Conflict>> & cs) override;
    };
};

}  // namespace djinni_generated
