#include "ElectricCar.h"
#include <iostream>

ElectricCar::ElectricCar(std::string b, int y, int d, int bc) 
    : Car(b, y, d), batteryCapacity(bc) {}

void ElectricCar::displayInfo() const {
    std::cout << "Electric Car Brand: " << brand << ", Year: " << year 
              << ", Battery: " << batteryCapacity << " kWh" << std::endl;
}

void ElectricCar::charge() const {
    std::cout << "Charging the " << brand << " electric car..." << std::endl;
}
