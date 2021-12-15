// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace testsuite {

class JsExceptionThrower;

class CppException {
public:
    virtual ~CppException() = default;

    virtual int32_t throw_an_exception() = 0;

    virtual int32_t throw_an_exception_from_js(const std::shared_ptr<JsExceptionThrower> & thrower) = 0;

    static std::shared_ptr<CppException> get();
};

}  // namespace testsuite
