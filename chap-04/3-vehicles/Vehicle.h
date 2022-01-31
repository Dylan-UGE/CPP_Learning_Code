#pragma once

#include <iostream>

class Driver {
public:
    bool has_car_licence() const { return _car_license; }
    void pass_car_licence_exam() { _car_license = true; }

    bool has_flyingcar_licence() const { return _flyingcar_license; }
    void pass_flyingcar_licence_exam() { _flyingcar_license = true; }

private:
    bool _car_license       = false;
    bool _flyingcar_license = false;
};

class Vehicle {
public:
    Vehicle(const Driver& driver)
        : _driver { driver } {}
    virtual ~Vehicle() {}

    /*virtual unsigned int drive() const {
        std::cerr << "Not implemented" << std::endl;
        return 0u;
    }*/
    virtual unsigned int drive() const = 0;

protected:
    const Driver& _driver;
};
