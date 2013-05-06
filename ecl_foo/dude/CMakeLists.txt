
add_library(ecl_kobuki kobuki.cpp)
add_executable(dude main.cpp)
target_link_libraries(dude ecl_kobuki)
