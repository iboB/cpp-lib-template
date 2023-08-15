// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <mylib/mylib.h>

#include <doctest/doctest.h>

TEST_CASE("basic") {
    CHECK(10 == mylib_add(5, 2, 3));
    CHECK(0 == mylib_add(5, -2, -3));
}
