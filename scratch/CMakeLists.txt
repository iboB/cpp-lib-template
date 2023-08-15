# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
add_executable(mylib-scratch
    scratch.cpp
)
target_link_libraries(mylib-scratch mylib::mylib)
set_target_properties(mylib-scratch PROPERTIES FOLDER scratch)
