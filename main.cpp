#include <iostream>
#include "Dependency.h"
#include "ImportantClass.h"

int main(){
    auto myDependency{Dependency(42)};
    std::cout << "Dependency: " << myDependency.getSpecialString() << " " << myDependency.getSpecialInt() << "\n";
    auto myImportantClass{ImportantClass{22}};
    std::cout << "ImportantClass: " << myImportantClass.calculateCoolStuff() << " " << myImportantClass.printCoolStuff() << "\n";
}