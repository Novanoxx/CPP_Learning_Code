#pragma once
#include "Car.h"

class FlyingCar : public Car {
public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed } {}

    unsigned int drive() const override {
        if (_driver.has_flying_licence()) {
            std::cout << "Sheeeeeeeesh!" << std::endl;
            return _speed * 10u;
        }
        else {
            return Car::drive();
        }
    }
};