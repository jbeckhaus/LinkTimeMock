#include <iostream>
#include "Dependency.h"

int main(){
    auto myDependency{Dependency(42)};
    std::cout << "my main: " << myDependency.getSpecialString() << " " << myDependency.getSpecialInt() << "\n";
    std::cout << "my main: " << myDependency.getSpecialString() << " " << myDependency.getSpecialInt() << "\n";
}