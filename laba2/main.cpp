#include "twelve/twelve.h"

#include <iostream>

int main() {
    using twelve = pepe::twelve;
    twelve a, b;
    std::cin >> a >> b;
    std::cout << "Sum: " << (a + b) << std::endl;
    
    std::cout << "Diff: " << (a - b) << std::endl;
}