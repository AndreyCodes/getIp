cmake_minimum_required(VERSION 3.20)

set(DEPS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/deps)

add_subdirectory(deps)

project(GetIp)

add_subdirectory(client)
add_subdirectory(acceptor)