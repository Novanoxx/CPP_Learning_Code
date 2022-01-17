#include "Rectangle.h"

#include <iostream>

int main() {
    Rectangle rect(2.f, 4.f);
    std::cout << rect << std::endl;

    rect.scale(3);
    std::cout << rect << std::endl;

    Rectangle square(2.5f);
    std::cout << square << std::endl;

    Rectangle s1;
    // Rectangle::_default_size = 2.f;
    Rectangle::set_default_size(2.f);
    Rectangle s2;
    Rectangle s3;

    return 0;
}
