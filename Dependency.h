#pragma once
#include <string>

class Dependency {
public:
    explicit Dependency(int number);
    int getSpecialInt();
    std::string getSpecialString();

private:
    int m_number;
};
