// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#include "extern_interface_2.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol DBExternInterface2;

namespace djinni_generated {

class ExternInterface2
{
public:
    using CppType = std::shared_ptr<::ExternInterface2>;
    using CppOptType = std::shared_ptr<::ExternInterface2>;
    using ObjcType = id<DBExternInterface2>;

    using Boxed = ExternInterface2;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

