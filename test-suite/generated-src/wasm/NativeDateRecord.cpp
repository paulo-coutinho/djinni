// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from date.djinni

#include "NativeDateRecord.hpp"  // my header
#include "djinni_wasm.hpp"

namespace djinni_generated {

auto NativeDateRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::Date::Boxed::toCpp(j["createdAt"])};
}
auto NativeDateRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("createdAt", ::djinni::Date::Boxed::fromCpp(c.created_at));
    return js;
}

}  // namespace djinni_generated
