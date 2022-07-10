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
    void showShape();
    void calculateArea();
    void calculatePerimeter();
    void toString();

private:
    double sideA, sideB;




};

