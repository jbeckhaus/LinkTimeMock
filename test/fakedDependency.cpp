
#include "Dependency.h"
#include "mock_Dependency.h"

// mock instance
static MockDependency* mock;


void MockDependency::setMock(MockDependency* mockDep){
    mock = mockDep;
}

Dependency::Dependency(int number): m_number{number} {
    mock->Dependency(number);
};

int Dependency::getSpecialInt() {
    return mock->getSpecialInt();
}

std::string Dependency::getSpecialString() {
    return mock->getSpecialString();
}
