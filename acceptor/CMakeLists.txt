cmake_minimum_required(VERSION 3.20)

add_executable(acceptor main.cpp)

target_compile_options(acceptor PRIVATE -std=c++20)
target_include_directories(acceptor PRIVATE ${DEPS_DIR}/boost/libs/asio/include)
target_link_libraries(acceptor PRIVATE Boost::asio ws2_32)