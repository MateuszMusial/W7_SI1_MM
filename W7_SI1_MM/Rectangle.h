#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
public:
    Rectangle(double x, double y) {
        sideA = x;
        sideB = y;
        name = "rectangle";
    }
    double calculateArea();
    double calculatePerimeter();
    void showShape();
    void toString();

private:
    double sideA, sideB;
};

