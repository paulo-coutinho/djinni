// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from varnames.djinni

#include "NativeVarnameRecord.hpp"  // my header

namespace djinni_generated {

auto NativeVarnameRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::I8::Boxed::toCpp(j["Field"])};
}
auto NativeVarnameRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("Field", ::djinni::I8::Boxed::fromCpp(c._field_));
    return js;
}

}  // namespace djinni_generated
