// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <mylib/mylib.h>

#include "s-unity.h"

void basic(void) {
    T_EQ(6, mylib_add(3, 2, 1));
}

void run_unity_tests(void) {
    RUN_TEST(basic);
}
