#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(std::string b, int y, int d, int bc);
    void displayInfo() const override;
    void charge() const;
};

#endif
