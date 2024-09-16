#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include "PointType.h"
#include <iostream>

class CircleType {
private:
    double radius;       // Radius of the circle
    PointType center;    // Center point of the circle

public:
    // Default constructor
    CircleType();

    // Constructor with radius and center point
    CircleType(double r, PointType c);

    // Set the radius of the circle
    void setRadius(double r);

    // Get the radius of the circle
    double getRadius() const;

    // Get the circumference of the circle
    double getCircumference() const;

    // Get the area of the circle
    double getArea() const;

    // Set the center of the circle
    void setCenter(PointType c);

    // Get the center of the circle
    PointType getCenter() const;

    // Print the circle properties (radius, circumference, area)
    void print() const;
};

#endif