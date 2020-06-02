project(address-book)

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS person.proto)

add_executable(main main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(main ${Protobuf_LIBRARIES})
