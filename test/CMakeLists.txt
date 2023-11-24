# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
CPMAddPackage(gh:iboB/doctest-util@0.1.2)
CPMAddPackage(gh:ThrowTheSwitch/Unity@2.5.2)
set_target_properties(doctest PROPERTIES FOLDER test)
set_target_properties(doctest-main PROPERTIES FOLDER test)
set_target_properties(unity PROPERTIES FOLDER test)

add_library(doctest-unity STATIC
    doctest-unity-main.cpp
)
set_target_properties(doctest-unity PROPERTIES FOLDER test)
target_link_libraries(doctest-unity PUBLIC
    unity::framework
    doctest::headers
)

macro(mylib_x_test test)
    icm_add_test(
        NAME mylib-x-${test}
        TARGET test-mylib-x-${test}
        LIBRARIES
            doctest-unity
            mylib::mylib
        SOURCES
            x-${test}.c
            x-${test}.cpp
        FOLDER test
    )
endmacro()

macro(mylib_c_test test)
    icm_add_test(
        NAME mylib-c-${test}
        TARGET test-mylib-c-${test}
        LIBRARIES
            unity::framework
            mylib::mylib
        SOURCES
            ${ARGN}
        FOLDER test
    )
endmacro()

macro(mylib_cxx_test test)
    add_doctest_lib_test(${test} mylib ${ARGN})
endmacro()

mylib_x_test(xtest)
mylib_c_test(ctest t-ctest.c)
mylib_cxx_test(cxxtest t-cxxtest.cpp)
