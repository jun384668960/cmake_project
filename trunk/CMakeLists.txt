# ./CMakeLists.txt，工程总配置文件

# 最低版本要求，必须
cmake_minimum_required(VERSION 3.0)

# 工程名称，这里用soTest这个名字
project(project)

# 设置生成的库文件目录，这里我们设置成和库目录相同
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/libs)

# 设置可执行文件目录，同样设成和库目录相同
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 添加子目录（每个子目录下都必须有自已的CMakeLists.txt文件
add_subdirectory(so)
add_subdirectory(so2)
add_subdirectory(test)