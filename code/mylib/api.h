// Copyright (c) Borislav Stanimirov
// SPDX-License-Identifier: MIT
//
#pragma once
#include <splat/symbol_export.h>

#if MYLIB_SHARED
#   if BUILDING_MYLIB
#       define MYLIB_API SYMBOL_EXPORT
#   else
#       define MYLIB_API SYMBOL_IMPORT
#   endif
#else
#   define MYLIB_API
#endif
