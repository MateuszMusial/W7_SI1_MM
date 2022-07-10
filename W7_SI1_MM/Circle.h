#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
public:
    Circle(std::string name);
    void toString();

private:
    int r;
    void calculateArea();
    void calculatePerimeter();
};

