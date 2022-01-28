// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#include "NativeDjinniPerfBenchmark.hpp"  // my header
#include "DataRef_wasm.hpp"
#include "DataView_wasm.hpp"
#include "NativeEnumSixValue.hpp"
#include "NativeObjectNative.hpp"
#include "NativeObjectPlatform.hpp"
#include "NativeRecordSixInt.hpp"

namespace djinni_generated {

em::val NativeDjinniPerfBenchmark::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "cppTests",
        "baseline",
        "argString",
        "argBinary",
        "argDataRef",
        "argDataView",
        "argEnumSixValue",
        "argRecordSixInt",
        "argListInt",
        "argArrayInt",
        "argObject",
        "argListObject",
        "argListRecord",
        "argArrayRecord",
        "returnInt",
        "returnString",
        "returnBinary",
        "returnObject",
        "returnListInt",
        "returnArrayInt",
        "returnListObject",
        "returnListRecord",
        "returnArrayRecord",
        "roundTripString",
    });
    return methods;
}

em::val NativeDjinniPerfBenchmark::getInstance() {
    auto r = ::snapchat::djinni::benchmark::DjinniPerfBenchmark::getInstance();
    return ::djinni_generated::NativeDjinniPerfBenchmark::fromCpp(r);
}
int64_t NativeDjinniPerfBenchmark::cppTests(const CppType& self) {
    auto r = self->cppTests();
    return ::djinni::I64::fromCpp(r);
}
void NativeDjinniPerfBenchmark::baseline(const CppType& self) {
    self->baseline();
}
void NativeDjinniPerfBenchmark::argString(const CppType& self, const std::string& w_s) {
    self->argString(::djinni::String::toCpp(w_s));
}
void NativeDjinniPerfBenchmark::argBinary(const CppType& self, const em::val& w_b) {
    self->argBinary(::djinni::Binary::toCpp(w_b));
}
void NativeDjinniPerfBenchmark::argDataRef(const CppType& self, const em::val& w_r) {
    self->argDataRef(::djinni::NativeDataRef::toCpp(w_r));
}
void NativeDjinniPerfBenchmark::argDataView(const CppType& self, const em::val& w_d) {
    self->argDataView(::djinni::NativeDataView::toCpp(w_d));
}
void NativeDjinniPerfBenchmark::argEnumSixValue(const CppType& self, int32_t w_e) {
    self->argEnumSixValue(::djinni_generated::NativeEnumSixValue::toCpp(w_e));
}
void NativeDjinniPerfBenchmark::argRecordSixInt(const CppType& self, const em::val& w_r) {
    self->argRecordSixInt(::djinni_generated::NativeRecordSixInt::toCpp(w_r));
}
void NativeDjinniPerfBenchmark::argListInt(const CppType& self, const em::val& w_v) {
    self->argListInt(::djinni::List<::djinni::I64>::toCpp(w_v));
}
void NativeDjinniPerfBenchmark::argArrayInt(const CppType& self, const em::val& w_v) {
    self->argArrayInt(::djinni::Array<::djinni::I64>::toCpp(w_v));
}
void NativeDjinniPerfBenchmark::argObject(const CppType& self, const em::val& w_c) {
    self->argObject(::djinni_generated::NativeObjectPlatform::toCpp(w_c));
}
void NativeDjinniPerfBenchmark::argListObject(const CppType& self, const em::val& w_l) {
    self->argListObject(::djinni::List<::djinni_generated::NativeObjectPlatform>::toCpp(w_l));
}
void NativeDjinniPerfBenchmark::argListRecord(const CppType& self, const em::val& w_l) {
    self->argListRecord(::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(w_l));
}
void NativeDjinniPerfBenchmark::argArrayRecord(const CppType& self, const em::val& w_a) {
    self->argArrayRecord(::djinni::List<::djinni_generated::NativeRecordSixInt>::toCpp(w_a));
}
int64_t NativeDjinniPerfBenchmark::returnInt(const CppType& self, int64_t w_i) {
    auto r = self->returnInt(::djinni::I64::toCpp(w_i));
    return ::djinni::I64::fromCpp(r);
}
std::string NativeDjinniPerfBenchmark::returnString(const CppType& self, int32_t w_size) {
    auto r = self->returnString(::djinni::I32::toCpp(w_size));
    return ::djinni::String::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnBinary(const CppType& self, int32_t w_size) {
    auto r = self->returnBinary(::djinni::I32::toCpp(w_size));
    return ::djinni::Binary::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnObject(const CppType& self) {
    auto r = self->returnObject();
    return ::djinni_generated::NativeObjectNative::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnListInt(const CppType& self, int32_t w_size) {
    auto r = self->returnListInt(::djinni::I32::toCpp(w_size));
    return ::djinni::List<::djinni::I64>::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnArrayInt(const CppType& self, int32_t w_size) {
    auto r = self->returnArrayInt(::djinni::I32::toCpp(w_size));
    return ::djinni::Array<::djinni::I64>::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnListObject(const CppType& self, int32_t w_size) {
    auto r = self->returnListObject(::djinni::I32::toCpp(w_size));
    return ::djinni::List<::djinni_generated::NativeObjectNative>::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnListRecord(const CppType& self, int32_t w_size) {
    auto r = self->returnListRecord(::djinni::I32::toCpp(w_size));
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(r);
}
em::val NativeDjinniPerfBenchmark::returnArrayRecord(const CppType& self, int32_t w_size) {
    auto r = self->returnArrayRecord(::djinni::I32::toCpp(w_size));
    return ::djinni::List<::djinni_generated::NativeRecordSixInt>::fromCpp(r);
}
std::string NativeDjinniPerfBenchmark::roundTripString(const CppType& self, const std::string& w_s) {
    auto r = self->roundTripString(::djinni::String::toCpp(w_s));
    return ::djinni::String::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(snapchat_djinni_benchmark_djinni_perf_benchmark) {
    em::class_<::snapchat::djinni::benchmark::DjinniPerfBenchmark>("benchmark_DjinniPerfBenchmark")
        .smart_ptr<std::shared_ptr<::snapchat::djinni::benchmark::DjinniPerfBenchmark>>("benchmark_DjinniPerfBenchmark")
        .function("nativeDestroy", &NativeDjinniPerfBenchmark::nativeDestroy)
        .class_function("getInstance", NativeDjinniPerfBenchmark::getInstance)
        .function("cppTests", NativeDjinniPerfBenchmark::cppTests)
        .function("baseline", NativeDjinniPerfBenchmark::baseline)
        .function("argString", NativeDjinniPerfBenchmark::argString)
        .function("argBinary", NativeDjinniPerfBenchmark::argBinary)
        .function("argDataRef", NativeDjinniPerfBenchmark::argDataRef)
        .function("argDataView", NativeDjinniPerfBenchmark::argDataView)
        .function("argEnumSixValue", NativeDjinniPerfBenchmark::argEnumSixValue)
        .function("argRecordSixInt", NativeDjinniPerfBenchmark::argRecordSixInt)
        .function("argListInt", NativeDjinniPerfBenchmark::argListInt)
        .function("argArrayInt", NativeDjinniPerfBenchmark::argArrayInt)
        .function("argObject", NativeDjinniPerfBenchmark::argObject)
        .function("argListObject", NativeDjinniPerfBenchmark::argListObject)
        .function("argListRecord", NativeDjinniPerfBenchmark::argListRecord)
        .function("argArrayRecord", NativeDjinniPerfBenchmark::argArrayRecord)
        .function("returnInt", NativeDjinniPerfBenchmark::returnInt)
        .function("returnString", NativeDjinniPerfBenchmark::returnString)
        .function("returnBinary", NativeDjinniPerfBenchmark::returnBinary)
        .function("returnObject", NativeDjinniPerfBenchmark::returnObject)
        .function("returnListInt", NativeDjinniPerfBenchmark::returnListInt)
        .function("returnArrayInt", NativeDjinniPerfBenchmark::returnArrayInt)
        .function("returnListObject", NativeDjinniPerfBenchmark::returnListObject)
        .function("returnListRecord", NativeDjinniPerfBenchmark::returnListRecord)
        .function("returnArrayRecord", NativeDjinniPerfBenchmark::returnArrayRecord)
        .function("roundTripString", NativeDjinniPerfBenchmark::roundTripString)
        ;
}

}  // namespace djinni_generated
