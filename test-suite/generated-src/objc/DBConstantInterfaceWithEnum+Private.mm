// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from constant_enum.djinni

#import "DBConstantInterfaceWithEnum+Private.h"
#import "DBConstantInterfaceWithEnum.h"
#import "DBConstantEnum+Private.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBConstantInterfaceWithEnum ()

- (id)initWithCpp:(const std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>&)cppRef;

@end

@implementation DBConstantInterfaceWithEnum {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (DBConstantEnum)constEnum
{
    static DBConstantEnum const s_constEnum = DBConstantEnumSomeValue;
    return s_constEnum;
}


namespace djinni_generated {

auto ConstantInterfaceWithEnum::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto ConstantInterfaceWithEnum::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<DBConstantInterfaceWithEnum>(cpp);
}

}  // namespace djinni_generated

@end
