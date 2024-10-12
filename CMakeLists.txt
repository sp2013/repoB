# Repo B: CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(RepoB)

# Add submodule Repo C (utils)
add_subdirectory(utils)

# Create a library target for math_operations
add_library(math_operations STATIC math_operations.cpp)

# Link Repo C (utils) to Repo B
target_link_libraries(math_operations PUBLIC utils)

# Include the directory of utils
target_include_directories(math_operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} utils/)
