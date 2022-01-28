// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from primtypes.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include <cstdint>
#include <utility>

namespace testsuite {

struct AssortedPrimitives final {
    bool b;
    int8_t eight;
    int16_t sixteen;
    int32_t thirtytwo;
    int64_t sixtyfour;
    float fthirtytwo;
    double fsixtyfour;
    std::experimental::optional<bool> o_b;
    std::experimental::optional<int8_t> o_eight;
    std::experimental::optional<int16_t> o_sixteen;
    std::experimental::optional<int32_t> o_thirtytwo;
    std::experimental::optional<int64_t> o_sixtyfour;
    std::experimental::optional<float> o_fthirtytwo;
    std::experimental::optional<double> o_fsixtyfour;

    friend bool operator==(const AssortedPrimitives& lhs, const AssortedPrimitives& rhs);
    friend bool operator!=(const AssortedPrimitives& lhs, const AssortedPrimitives& rhs);

    AssortedPrimitives(bool b_,
                       int8_t eight_,
                       int16_t sixteen_,
                       int32_t thirtytwo_,
                       int64_t sixtyfour_,
                       float fthirtytwo_,
                       double fsixtyfour_,
                       std::experimental::optional<bool> o_b_,
                       std::experimental::optional<int8_t> o_eight_,
                       std::experimental::optional<int16_t> o_sixteen_,
                       std::experimental::optional<int32_t> o_thirtytwo_,
                       std::experimental::optional<int64_t> o_sixtyfour_,
                       std::experimental::optional<float> o_fthirtytwo_,
                       std::experimental::optional<double> o_fsixtyfour_)
    : b(std::move(b_))
    , eight(std::move(eight_))
    , sixteen(std::move(sixteen_))
    , thirtytwo(std::move(thirtytwo_))
    , sixtyfour(std::move(sixtyfour_))
    , fthirtytwo(std::move(fthirtytwo_))
    , fsixtyfour(std::move(fsixtyfour_))
    , o_b(std::move(o_b_))
    , o_eight(std::move(o_eight_))
    , o_sixteen(std::move(o_sixteen_))
    , o_thirtytwo(std::move(o_thirtytwo_))
    , o_sixtyfour(std::move(o_sixtyfour_))
    , o_fthirtytwo(std::move(o_fthirtytwo_))
    , o_fsixtyfour(std::move(o_fsixtyfour_))
    {}
};

}  // namespace testsuite
