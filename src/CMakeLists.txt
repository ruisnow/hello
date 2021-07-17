cmake_minimum_required(VERSION 2.8)

project("Hello_World")

aux_source_directory(. DIR_SRCS)

add_executable(Hello ${DIR_SRCS})
