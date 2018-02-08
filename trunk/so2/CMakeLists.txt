# ./so2/CMakeLists.txt

project(so2)
message("${PROJECT_SOURCE_DIR}")
include_directories(${PROJECT_SOURCE_DIR}/inc/)
include_directories(${so_SOURCE_DIR}/inc/)
link_directories(${PROJECT_SOURCE_DIR}/lib/)

set(so2 so2.c)
add_library(so2 STATIC ${so2})

# link so1
target_link_libraries(so2 so1.a)