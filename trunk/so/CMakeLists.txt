# ./so1/CMakeLists.txt
# project name: soTest
project(so)
include_directories(${PROJECT_SOURCE_DIR}/inc/)
# set source files
set(so so.c)

# set make to a shared library
add_library(so STATIC ${so})