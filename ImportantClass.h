#pragma once
#include "Dependency.h"

class ImportantClass {
public:
    explicit ImportantClass(int number);
    int calculateCoolStuff();
    std::string printCoolStuff();

private:
    int m_importantInt;
    Dependency m_dependency;
};
