cmake_minimum_required(VERSION 3.21)
project(cpptest)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include F:/project/boost_1_85_0/boost_1_85_0)

add_executable(cpptest test.cpp multi_thread_test.cpp lockfreequeue_test.cpp
        include/locker.h
        include/threadpool.h
        include/lockfreequeue.h
        include/lockfreethreadpool.h
        include/boostlockfreethreadpool.h)


# 查找 Boost
# find_package(Boost 1.70.0 REQUIRED COMPONENTS system filesystem)  # 根据需要修改组件名

# 链接 Boost 库
# target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
