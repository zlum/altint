cmake_minimum_required(VERSION 3.0.0)
project(AltInt LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14 -lstdc++ -lm -Wall -Wextra -Wpedantic")

if(NOT WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
endif(NOT WIN32)

include_directories(types)

# Types
set(SourceGroup_int24
    "types/include/int24.h"
    "types/int24_t/int24_t.cpp"
    "types/int24_t/int24_t.h"
    "types/int24_t/uint24_t.cpp"
    "types/int24_t/uint24_t.h"
)

set(SourceGroup_int40
    "types/include/int40.h"
    "types/int40_t/int40_t.cpp"
    "types/int40_t/int40_t.h"
    "types/int40_t/uint40_t.cpp"
    "types/int40_t/uint40_t.h"
)

set(SourceGroup_int48
    "types/include/int48.h"
    "types/int48_t/int48_t.cpp"
    "types/int48_t/int48_t.h"
    "types/int48_t/uint48_t.cpp"
    "types/int48_t/uint48_t.h"
)

set(SourceGroup_int56
    "types/include/int56.h"
    "types/int56_t/int56_t.cpp"
    "types/int56_t/int56_t.h"
    "types/int56_t/uint56_t.cpp"
    "types/int56_t/uint56_t.h"
)

# Core
set(SourceGroup_Core
    "types/altint.h"
    "types/core/conversion.hpp"
    "types/core/operators.hpp"
    "types/core/integer.hpp"
)

# Test
set(SourceGroup_Test
    "main.cpp"
)

set(SOURCE
    ${SourceGroup_int24}
    ${SourceGroup_int40}
    ${SourceGroup_int48}
    ${SourceGroup_int56}
    ${SourceGroup_Core}
    ${SourceGroup_Test}
)

add_executable(${PROJECT_NAME} ${SOURCE})
