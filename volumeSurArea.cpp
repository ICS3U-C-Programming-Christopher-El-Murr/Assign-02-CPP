// Copyright (c) 2025 Christopher El-Mur All rights reserved
// Created by Christopher El-Mur
// Date:Oct 14 2025
// This program asks the user for the radius and then
// displays the Surface area and Volume of a Sphere
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // declare the variables radius,area, and circumference
    float radius;
    float volume;
    float surface_area;

    // Ask the user fo the radius
    std::cout << "Enter the radius of the Sphere: ";
    std::cin >> radius;

    // Calculate the Volume and surface area with pi from cmath
    volume = (4.0 / 3.0) * M_PI * (pow(radius, 3));
    surface_area = 4 * M_PI * (pow(radius, 2));

    // Round the output to two decimal places
    cout << fixed << setprecision(2);
    cout << "The Volume of the sphere is: " << volume << endl;
    cout << "The Surface area of the sphere is: " << surface_area << endl;
    return 0;
}
