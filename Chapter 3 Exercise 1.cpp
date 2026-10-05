#include <iostream>
#include <iomanip>

int main() {
    double tankCapacity;
    double milesDriven;

    std::cout << "Enter the number of gallons of gas the car can hold: ";
    std::cin >> tankCapacity;

    std::cout << "Enter the number of miles the car can be driven on a full tank: ";
    std::cin >> milesDriven;

    if (tankCapacity > 0) {
        double mpg = milesDriven / tankCapacity;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The car gets " << mpg << " miles per gallon (MPG)." << std::endl;
    }
    else {
        std::cout << "Error: Gallons capacity must be greater than zero." << std::endl;
    }

    return 0;
}