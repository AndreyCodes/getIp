cmake_minimum_required(VERSION 3.20)

add_executable(client main.cpp)

target_compile_options(client PRIVATE -std=c++20)
target_include_directories(client PRIVATE ${DEPS_DIR}/boost/libs/asio/include)
target_link_libraries(client PRIVATE Boost::asio ws2_32)