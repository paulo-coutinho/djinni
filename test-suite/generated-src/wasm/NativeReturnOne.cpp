// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from multiple_inheritance.djinni

#include "NativeReturnOne.hpp"  // my header

namespace djinni_generated {

em::val NativeReturnOne::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "returnOne",
    });
    return methods;
}

em::val NativeReturnOne::get_instance() {
    auto r = ::testsuite::ReturnOne::get_instance();
    return ::djinni_generated::NativeReturnOne::fromCpp(r);
}
int8_t NativeReturnOne::return_one(const CppType& self) {
    auto r = self->return_one();
    return ::djinni::I8::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(testsuite_return_one) {
    ::djinni::DjinniClass_<::testsuite::ReturnOne>("testsuite_ReturnOne", "testsuite.ReturnOne")
        .smart_ptr<std::shared_ptr<::testsuite::ReturnOne>>("testsuite_ReturnOne")
        .function("nativeDestroy", &NativeReturnOne::nativeDestroy)
        .class_function("getInstance", NativeReturnOne::get_instance)
        .function("returnOne", NativeReturnOne::return_one)
        ;
}

}  // namespace djinni_generated
