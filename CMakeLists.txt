cmake_minimum_required(VERSION 3.14)

project(using-fetchcontent LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    submodule-test
    GIT_REPOSITORY "https://github.com/MLIOSBond/submodule-test"
    #GIT_TAG
    )

FetchContent_MakeAvailable(submodule-test)

add_executable(using-fetchcontent
    main.cpp)

message(STATUS "[submodule-test dir]: ${submodule-test_SOURCE_DIR}")

target_include_directories(using-fetchcontent PRIVATE "${submodule-test_SOURCE_DIR}/include")
target_link_libraries(using-fetchcontent sub::module1)

