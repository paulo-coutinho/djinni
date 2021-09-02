// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "reverse_client_interface.hpp"

namespace djinni_generated {

struct NativeReverseClientInterface : ::djinni::JsInterface<::testsuite::ReverseClientInterface, NativeReverseClientInterface> {
    using CppType = std::shared_ptr<::testsuite::ReverseClientInterface>;
    using CppOptType = std::shared_ptr<::testsuite::ReverseClientInterface>;
    using JsType = em::val;
    using Boxed = NativeReverseClientInterface;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static std::string return_str(const CppType& self);
    static std::string meth_taking_interface(const CppType& self, const em::val& w_i);
    static std::string meth_taking_optional_interface(const CppType& self, const em::val& w_i);
    static em::val create();

    struct JsProxy: ::djinni::JsProxyBase, ::testsuite::ReverseClientInterface, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        std::string return_str() const override;
        std::string meth_taking_interface(const std::shared_ptr<::testsuite::ReverseClientInterface> & i) override;
        std::string meth_taking_optional_interface(const std::shared_ptr<::testsuite::ReverseClientInterface> & i) override;
    };
};

}  // namespace djinni_generated
