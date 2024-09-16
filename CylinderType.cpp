#include "CylinderType.h"
#include <iostream>

CylinderType::CylinderType() : CircleType(), height(0) {}

CylinderType::CylinderType(double r, double h, PointType c)
    : CircleType(r, c), height(h) {}

void CylinderType::setHeight(double h) { height = h; }

double CylinderType::getHeight() const { return height; }

double CylinderType::getVolume() const {
    return getArea() * height;
}

double CylinderType::getSurfaceArea() const {
    return 2 * getArea() + getCircumference() * height;
}

void CylinderType::print() const {
    std::cout << "Cylinder Properties:" << std::endl;
    CircleType::print();
    std::cout << "Height: " << height << std::endl;
    std::cout << "Surface Area: " << getSurfaceArea() << std::endl;
    std::cout << "Volume: " << getVolume() << std::endl;
}