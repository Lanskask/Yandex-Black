project(alignment)

add_executable(alignment alignment.cpp)

add_executable(alignment2 alignment2.cpp)
set_target_properties(alignment2 PROPERTIES COMPILE_FLAGS "-Wpadded")

add_executable(alignment3 alignment3.cpp)
set_target_properties(alignment3 PROPERTIES COMPILE_FLAGS "-Wpadded")

add_executable(reinterpret_cast_ex reinterpret_cast_ex.cpp)
set_target_properties(reinterpret_cast_ex PROPERTIES COMPILE_FLAGS "-Wpadded")

add_executable(test_alignment_bench alignment.cpp test_alignment_bench.cpp)
