cmake_minimum_required(VERSION 3.13)  # CMake version check
project(c-tutorial)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.c functions-tutorial/proto.c functions-tutorial/swap.c functions-tutorial/day_month.c functions-tutorial/sum_arr.c structs/book.c structs/friend.c strings-tutorial/strings1.c strings-tutorial/p_and_s.c strings-tutorial/fget1.c simple/loc_stat.c simple/global.c structs/manybook.c structs/funds1.c structs/funds2.c structs/funds3.c structs/name2.c)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(c-tutorial ${SOURCE_FILES})