#pragma once

#include <iostream>

class Driver {
public:
    void pass_car_licence_exam() { _licence = true; }
    void pass_fly_licence_exam() { _flying_licence = true; }
    bool has_licence() const { return _licence; }
    bool has_flying_licence() const { return _flying_licence; }

private:
    bool _licence        = false;
    bool _flying_licence = false;
};

class Vehicle {
public:
    virtual ~Vehicle() {}

    virtual unsigned int drive() const = 0;

protected:
    Vehicle(const Driver& driver)
        : _driver { driver } {}
    const Driver& _driver;
};
