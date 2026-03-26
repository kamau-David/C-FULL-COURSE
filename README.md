# Vehicle Management System

This is a C++ project demonstrating the core concepts of Inheritance.

## Key Features Demonstrated
- **Base and Derived Classes**: `Vehicle` serves as the base for `Car` and `Motorcycle`.
- **Public Inheritance**: All classes use public inheritance to model an "is-a" relationship.
- **Method Overriding**: Derived classes override the `displayInfo()` virtual function.
- **Polymorphism**: Using `Vehicle*` to manage a fleet of different vehicle types.
- **Multi-level Inheritance**: `ElectricCar` inherits from `Car`, which in turn inherits from `Vehicle`.

## Building the Project

You can compile the project using `g++` (ensure you are in the project root directory):

```bash
g++ -Iinclude src/*.cpp main.cpp -o vehicle_app
```

## Running the Project

```bash
./vehicle_app
```
