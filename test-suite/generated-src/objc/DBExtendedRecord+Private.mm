// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from extended_record.djinni

#import "DBExtendedRecord+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ExtendedRecord::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Bool::toCpp(obj.foo)};
}

auto ExtendedRecord::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBExtendedRecord alloc] initWithFoo:(::djinni::Bool::fromCpp(cpp.foo))];
}

}  // namespace djinni_generated
