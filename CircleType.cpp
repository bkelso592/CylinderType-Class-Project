#include "CircleType.h"
#include <iostream>
#include <cmath>  // For Pi and mathematical operations

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Default constructor
CircleType::CircleType() : radius(0), center(PointType()) {}

// Constructor with radius and center point
CircleType::CircleType(double r, PointType c) : radius(r), center(c) {}

// Set the radius of the circle
void CircleType::setRadius(double r) { radius = r; }

// Get the radius of the circle
double CircleType::getRadius() const { return radius; }

// Get the circumference of the circle
double CircleType::getCircumference() const {
    return 2 * M_PI * radius;
}

// Get the area of the circle
double CircleType::getArea() const {
    return M_PI * radius * radius;
}

// Set the center of the circle
void CircleType::setCenter(PointType c) { center = c; }

// Get the center of the circle
PointType CircleType::getCenter() const { return center; }

// Print the circle's properties
void CircleType::print() const {
    std::cout << "Circle Radius: " << radius << std::endl;
    std::cout << "Circle Circumference: " << getCircumference() << std::endl;
    std::cout << "Circle Area: " << getArea() << std::endl;
    center.print();  // Call PointType's print method
}