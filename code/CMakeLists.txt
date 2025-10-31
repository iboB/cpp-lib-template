# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
include(icm_add_lib)

icm_add_lib(mylib MYLIB)
add_library(mylib::mylib ALIAS mylib)

CPMAddPackage(gh:iboB/splat@1.3.5)
target_link_libraries(mylib PUBLIC
    splat::splat
)

target_sources(mylib
    INTERFACE FILE_SET HEADERS FILES
        mylib/api.h
        mylib/mylib.h
        mylib/mylib.hpp
    PRIVATE
        mylib/mylib.c
        mylib/mylib.cpp
)

