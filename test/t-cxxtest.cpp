// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <mylib/mylib.hpp>

#include <doctest/doctest.h>

TEST_CASE("basic") {
    mylib::add a(5);
    CHECK(10 == a(2, 3));
    CHECK(0 == a(-2, -3));
}
