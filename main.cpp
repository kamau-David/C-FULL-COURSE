#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "ElectricCar.h"

int main() {
    std::cout << "--- Vehicle Management System Demo ---\n" << std::endl;

    // Creating objects of different types
    Car myCar("Toyota", 2022, 4);
    Motorcycle myBike("Harley-Davidson", 2021, false);
    ElectricCar myTesla("Tesla", 2023, 4, 75);

    // Demonstration of individual methods
    myCar.displayInfo();
    myCar.openTrunk();
    std::cout << std::endl;

    myBike.displayInfo();
    myBike.doWheelie();
    std::cout << std::endl;

    myTesla.displayInfo();
    myTesla.charge();
    std::cout << std::endl;

    // Demonstration of Polymorphism
    std::cout << "--- Polymorphism Demo (using Base Class Pointers) ---" << std::endl;
    std::vector<Vehicle*> fleet;
    fleet.push_back(&myCar);
    fleet.push_back(&myBike);
    fleet.push_back(&myTesla);

    for (const auto& v : fleet) {
        v->displayInfo();   // Calls the correct overridden method
        v->startEngine();   // Calls the base class method
    }

    return 0;
}
