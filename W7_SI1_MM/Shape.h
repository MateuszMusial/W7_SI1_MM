#pragma once
#include <string>

class Shape
{
public:
	virtual void showShape() = 0;
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;
	virtual void toString() = 0;
	double getArea();
	double getPerimeter();

protected:
	std::string name;
	double area, perimeter;
};

