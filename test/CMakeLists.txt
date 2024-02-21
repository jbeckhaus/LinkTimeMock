set(TEST_NAME test_ImportantClass)

enable_testing()

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR} ${GMOCK_INCLUDE_DIR})

add_executable(
        ${TEST_NAME}
        test_ImportantClass.cpp
        fakedDependency.cpp
        ../ImportantClass.cpp
)

target_include_directories(${TEST_NAME} PUBLIC ..)

target_link_libraries(
        ${TEST_NAME}
        GTest::gtest
        GTest::gtest_main
        GTest::gmock
)

include(GoogleTest)

gtest_discover_tests(${TEST_NAME})