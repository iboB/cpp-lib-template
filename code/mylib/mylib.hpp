// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#pragma once
#include "api.h"

namespace mylib {
class MYLIB_API add {
    int m_bias;
public:
    add(int bias);
    int operator()(int a, int b) const noexcept;
};
}
