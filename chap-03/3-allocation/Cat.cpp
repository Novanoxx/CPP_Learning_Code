#include "Cat.h"

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Cat> cat = std::make_unique<Cat>("Felix");
    std::cout << *cat << std::endl;

    std::unique_ptr<Cat> catto;
    if (catto == nullptr) {
        std::cout << "catto is nullptr" << std::endl;
    }
    catto = std::make_unique<Cat>("Catto");
    std::cout << "cat == catto ? " << (cat == catto) << std::endl;
    std::cout << "*cat == *catto ? " << (*cat == *catto) << std::endl;

    cat.reset();
    if (cat == nullptr) {
        std::cout << "cat is nullptr" << std::endl;
    }

    return 0;
}