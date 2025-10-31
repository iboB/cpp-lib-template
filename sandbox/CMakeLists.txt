# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
add_executable(mylib-sandbox
    sandbox.cpp
)
target_link_libraries(mylib-sandbox PRIVATE mylib::mylib)
set_target_properties(mylib-sandbox PROPERTIES FOLDER sandbox)
