
#include "Dependency.h"

Dependency::Dependency(int number): m_number{number} {};

int Dependency::getSpecialInt() {
    m_number ++;
    return m_number;
}

std::string Dependency::getSpecialString() {
    m_number ++;
    return "this function is the best " + std::to_string(m_number);
}
