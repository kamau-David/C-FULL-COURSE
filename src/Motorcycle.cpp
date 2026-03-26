#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle(std::string b, int y, bool s) : Vehicle(b, y), hasSidecar(s) {}

void Motorcycle::displayInfo() const {
    std::cout << "Motorcycle Brand: " << brand << ", Year: " << year 
              << ", Has Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
}

void Motorcycle::doWheelie() const {
    std::cout << "The " << brand << " motorcycle is doing a wheelie!" << std::endl;
}
