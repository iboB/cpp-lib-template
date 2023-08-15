// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <mylib/mylib.h>

#include "s-unity.h"

void setUp(void) {}
void tearDown(void) {}

void basic(void) {
    T_EQ(10, mylib_add(2, 3, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(basic);
    return UNITY_END();
}
