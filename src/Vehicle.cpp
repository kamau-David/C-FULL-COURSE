#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string b, int y) : brand(b), year(y) {}

void Vehicle::displayInfo() const {
    std::cout << "Vehicle Brand: " << brand << ", Year: " << year << std::endl;
}

void Vehicle::startEngine() const {
    std::cout << "Engine started for " << brand << "." << std::endl;
}
