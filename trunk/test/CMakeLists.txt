project(soTest)
set(st test.c)

include_directories(${so2_SOURCE_DIR}/inc/)
link_directories(${so2_SOURCE_DIR}/lib/)
#include_directories(${so1_SOURCE_DIR}/inc/)

# 生成可执行文件
add_executable(st test.c)
target_link_libraries(st so2 so)
target_link_libraries(st so2)