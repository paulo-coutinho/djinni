// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#include "NativeCppException.hpp"  // my header
#include "NativeJsExceptionThrower.hpp"

namespace djinni_generated {

em::val NativeCppException::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "throwAnException",
        "throwAnExceptionFromJs",
    });
    return methods;
}

int32_t NativeCppException::throw_an_exception(const CppType& self) {
    auto r = self->throw_an_exception();
    return ::djinni::I32::fromCpp(r);
}
int32_t NativeCppException::throw_an_exception_from_js(const CppType& self, const em::val& w_thrower) {
    auto r = self->throw_an_exception_from_js(::djinni_generated::NativeJsExceptionThrower::toCpp(w_thrower));
    return ::djinni::I32::fromCpp(r);
}
em::val NativeCppException::get() {
    auto r = ::testsuite::CppException::get();
    return ::djinni_generated::NativeCppException::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(cpp_exception) {
    em::class_<::testsuite::CppException>("CppException")
        .smart_ptr<std::shared_ptr<::testsuite::CppException>>("CppException")
        .function("nativeDestroy", &NativeCppException::nativeDestroy)
        .function("throwAnException", NativeCppException::throw_an_exception)
        .function("throwAnExceptionFromJs", NativeCppException::throw_an_exception_from_js)
        .class_function("get", NativeCppException::get)
        ;
}

}  // namespace djinni_generated
