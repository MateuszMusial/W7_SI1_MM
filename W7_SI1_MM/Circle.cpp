#include "Circle.h"
#include <iostream>

Circle::Circle(std::string name)
{
	this->name = name;
	std::cout << "Enter the lenght of the radius: ";
	std::cin >> r;
}

void Circle::toString()
{
	std::cout << "Name is: " << name << std::endl;
	std::cout << "Raius is: " << r << std::endl;
	std::cout << "Area is: " << area << std::endl;
	std::cout << "Perimeter is: " << perimeter << std::endl;
}

void Circle::calculateArea()
{
	area = 3.14 * r;
		 
}

void Circle::calculatePerimeter()
{
	perimeter = 2 * 3.14 * r;
}
