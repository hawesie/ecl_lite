
add_library(ecl_crane f.cpp)
add_executable(crane main.cpp)
target_link_libraries(crane ecl_crane)
