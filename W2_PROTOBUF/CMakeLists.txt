project(W2_PROTOBUF)

#add_subdirectory(address-book)

add_executable(simple_in_cpp simple_in_cpp.cpp)
add_executable(writer writer.cpp)
add_executable(reader reader.cpp)


find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS person.proto address.proto)

add_executable(main main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(main ${Protobuf_LIBRARIES})
