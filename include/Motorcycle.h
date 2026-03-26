#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(std::string b, int y, bool s);
    void displayInfo() const override;
    void doWheelie() const;
};

#endif
