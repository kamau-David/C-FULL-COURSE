#include "Car.h"
#include <iostream>

Car::Car(std::string b, int y, int d) : Vehicle(b, y), numDoors(d) {}

void Car::displayInfo() const {
    std::cout << "Car Brand: " << brand << ", Year: " << year << ", Doors: " << numDoors << std::endl;
}

void Car::openTrunk() const {
    std::cout << "Trunk opened for the " << brand << " car." << std::endl;
}
