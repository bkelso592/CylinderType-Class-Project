#include "PointType.h"
#include <iostream>

PointType::PointType() : x(0), y(0) {}

PointType::PointType(double xVal, double yVal) : x(xVal), y(yVal) {}

void PointType::setX(double xVal) { x = xVal; }

void PointType::setY(double yVal) { y = yVal; }

double PointType::getX() const { return x; }

double PointType::getY() const { return y; }

void PointType::print() const {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
}