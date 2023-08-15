// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#include <vector>
#include <cstdlib> // for rand

#include <picobench/picobench.hpp>

#include <mylib/mylib.hpp>

constexpr uint32_t seed = 42;

static void rand_vector(picobench::state& s)
{
    srand(seed);
    mylib::add a(rand());
    std::vector<int> v;
    for (auto i : s)
    {
        v.push_back(a(i, rand()));
    }
}
PICOBENCH(rand_vector);

static void rand_vector_reserve(picobench::state& s)
{
    srand(seed);
    mylib::add a(rand());
    std::vector<int> v;
    v.reserve(s.iterations());
    for (auto i : s)
    {
        v.push_back(a(i, rand()));
    }
}
PICOBENCH(rand_vector_reserve);
