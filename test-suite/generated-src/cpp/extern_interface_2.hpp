// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#pragma once

#include "test_helpers.hpp"
#include <memory>

struct ExternRecordWithDerivings;

class ExternInterface2 {
public:
    virtual ~ExternInterface2() = default;

    virtual ExternRecordWithDerivings foo(const std::shared_ptr<::testsuite::TestHelpers> & i) = 0;
};
