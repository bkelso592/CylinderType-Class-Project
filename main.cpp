#include "CylinderType.h"
#include <iostream>

int main() {
    PointType center(0, 0);
    CylinderType cylinder(5, 10, center);

    // Set new height
    cylinder.setHeight(12);

    // Set new center point
    cylinder.setCenter(PointType(3, 3));

    // Print cylinder properties
    cylinder.print();

    return 0;
}