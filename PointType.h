#pragma once
#ifndef POINTTYPE_H
#define POINTTYPE_H

#include <iostream>

class PointType {
private:
    double x, y;
public:
    PointType();
    PointType(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void print() const;
};

#endif