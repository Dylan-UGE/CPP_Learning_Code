#pragma once

#include "Car.h"

class FlyingCar : public Car {
public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed } {}

    unsigned int drive() const override {
        if (_driver.has_flyingcar_licence()) {
            std::cout << "Sweeesh!" << std::endl;
            return _speed * 10;
        }
        else {
            Car::drive();
        }
    }
};