cmake_minimum_required(VERSION 3.0.0)
project(Yandex_Black)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wno-long-long -pedantic -fsanitize=address -g3")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wno-long-long -pedantic -fsanitize=bounds -g3")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -pedantic")

add_subdirectory(W1_UNDEFINED_BEHAVIOR)
add_subdirectory(W2_PROTOBUF)
add_subdirectory(W3_STORING_IN_MEMORY)
add_subdirectory(W4_CUSTOM_VECTOR)
