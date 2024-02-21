#pragma once
#include <gmock/gmock.h>
#include <string>

class MockDependency {
public:
    MOCK_METHOD(void, Dependency, (int), ());
    MOCK_METHOD(int, getSpecialInt, (), ());
    MOCK_METHOD(std::string, getSpecialString, (), ());
    static void setMock(MockDependency* mockDep);
};

// forward declaration
