#pragma once
#include "Shape.h"
#include <string>

class Square :
    public Shape
{
public:
    Square(int x) {
       
        sideA = x;
        name = "square";
    }
    void showShape();
    void calculateArea();
    void calculatePerimeter();
    void toString();

private:
    double sideA;
    
};


