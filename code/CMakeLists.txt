# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
include(icm_add_lib)

icm_add_lib(mylib MYLIB)
add_library(mylib::mylib ALIAS mylib)
target_include_directories(mylib INTERFACE .)

CPMAddPackage(gh:iboB/splat@1.3.2)

target_link_libraries(mylib PUBLIC
    splat::splat
)

target_sources(mylib PRIVATE
    mylib/api.h
    mylib/mylib.h
    mylib/mylib.c
    mylib/mylib.hpp
    mylib/mylib.cpp
)

