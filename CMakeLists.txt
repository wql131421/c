cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c)
add_executable(01 01-5.25.c)
add_executable(02 02-5.25.c)
add_executable(03 03-5.25.c)
add_executable(04 04-5.25.c) # switch结构 将等级转换为分数
add_executable(05 05-5.27.c)
add_executable(06 06-5.27.c)
add_executable(07 07-5.29.c)
add_executable(08 08-5.29.c) # if结构 排序，降序
add_executable(09 09-5.29.c) # if结构 判断是否为闰年
add_executable(10 10-5.29.c) # if结构 大写字母转为小写字母
add_executable(11 11-5.29.c) # ？结构 大写字母转为小写字母