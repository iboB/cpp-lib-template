# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
add_executable(mylib-example-hello-world hello-world.cpp)
target_link_libraries(mylib-example-hello-world mylib::mylib)
set_target_properties(mylib-example-hello-world PROPERTIES FOLDER example)
