// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <iostream>
#include <mylib/mylib.hpp>

int main() {
    std::cout << "hello " << mylib::add{4}(1, 10) << '\n';
}
