// SphereVolumeCalculator
// CSCI 201: Lab Assignment 1

#include <iostream>
using namespace std;

const double PI = 3.14159265;

int main()
{
    // Prompt user for the radius of the sphere
    double radius, volume;
    cout << "Enter the radius of a sphere: ";
    cin >> radius;

    // Calculate the volume of the sphere using the formula: V = (4/3) * π * r^3
    volume = 4.0 / 3.0 * PI * radius * radius * radius;

    // Display the calculated volume
    cout << "The sphere's volume is: " << volume << endl;

    return 0;
}
