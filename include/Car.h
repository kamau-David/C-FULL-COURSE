#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(std::string b, int y, int d);
    void displayInfo() const override;
    void openTrunk() const;
};

#endif
