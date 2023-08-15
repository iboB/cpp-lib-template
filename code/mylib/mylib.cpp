// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#pragma once
#include "mylib.hpp"

namespace mylib {

add::add(int bias) : m_bias(bias) {}

int add::operator()(int a, int b) const noexcept {
    return m_bias + a + b;
}

}
