
#include "ImportantClass.h"

ImportantClass::ImportantClass(int number) : m_importantInt{number}, m_dependency(number) {}

int ImportantClass::calculateCoolStuff() {
    return m_dependency.getSpecialInt() + m_importantInt;
}

std::string ImportantClass::printCoolStuff() {
    return m_dependency.getSpecialString() + " " + std::to_string(
            m_dependency.getSpecialInt() + m_importantInt);
}


