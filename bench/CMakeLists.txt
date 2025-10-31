# Copyright (c) Borislav Stanimirov
# SPDX-License-Identifier: MIT
#
CPMAddPackage(gh:iboB/picobench@2.08)

add_subdirectory(picobench-main)

macro(mylib_benchmark name)
    set(tgt bench-mylib-${name})
    add_executable(${tgt})
    set_target_properties(${tgt} PROPERTIES FOLDER bench)
    target_sources(${tgt} PRIVATE ${ARGN})
    target_link_libraries(${tgt} PRIVATE mylib::mylib picobench-main)
    add_custom_target(
        run-${tgt}
        COMMAND ${tgt}
    )
    set_target_properties(run-${tgt} PROPERTIES FOLDER bench)
endmacro()

mylib_benchmark(core
    b-core.cpp
)
