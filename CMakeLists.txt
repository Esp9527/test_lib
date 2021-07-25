cmake_minimum_required(VERSION 3.1)

project(TESTLIB)

add_library(lib_test SHARED lib_test.cpp export.h lib_test.h)