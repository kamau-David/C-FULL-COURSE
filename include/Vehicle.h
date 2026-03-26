#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string brand;
    int year;

public:
    Vehicle(std::string b, int y);
    virtual ~Vehicle() {}

    virtual void displayInfo() const;
    void startEngine() const;
};

#endif
