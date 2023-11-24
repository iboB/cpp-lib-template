# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(mylib
    LANGUAGES C CXX
)

# cpm
include(./get_cpm.cmake)

#######################################
# cmake lib
CPMAddPackage(gh:iboB/icm@1.5.0)

list(APPEND CMAKE_MODULE_PATH
    "${icm_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
)

set(ICM_DEV_C_STANDARD 11)
set(ICM_DEV_CXX_STANDARD 20)

include(icm_dev_mode)

#######################################
# options

option(MYLIB_STATIC "mylib: build as a static library" OFF)
option(MYLIB_BUILD_TESTS "mylib: enable testing and build tests" ${ICM_DEV_MODE})
option(MYLIB_BUILD_EXAMPLES "mylib: build examples" ${ICM_DEV_MODE})
option(MYLIB_BUILD_TUTORIALS "mylib: build tutorials" ${ICM_DEV_MODE})
option(MYLIB_BUILD_BENCH "mylib: build benchmarks" ${ICM_DEV_MODE})
option(MYLIB_BUILD_SCRATCH "mylib: build scratch project (dev experiments)" ${ICM_DEV_MODE})
mark_as_advanced(MYLIB_BUILD_SCRATCH)

#######################################
# cfg
if(ICM_STATIC_LIBS OR MYLIB_STATIC)
    set(MYLIB_SHARED FALSE)
else()
    set(MYLIB_SHARED TRUE)
endif()

#######################################
# code
add_subdirectory(code)

if(MYLIB_BUILD_SCRATCH)
    add_subdirectory(scratch)
endif()

if(MYLIB_BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

if(MYLIB_BUILD_BENCH)
    add_subdirectory(bench)
endif()

if(MYLIB_BUILD_EXAMPLES)
    add_subdirectory(example)
endif()
