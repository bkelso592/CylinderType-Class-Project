#pragma once
#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include "CircleType.h"

class CylinderType : public CircleType {
private:
    double height;
public:
    CylinderType();
    CylinderType(double r, double h, PointType c);
    void setHeight(double h);
    double getHeight() const;
    double getVolume() const;
    double getSurfaceArea() const;
    void print() const;
};

#endif