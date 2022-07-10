#include "Rectangle.h"
#include <iostream>

void Rectangle::showShape()
{
	std::cout << "* * * * * * * * * * * * *\n"
		<< "*                       *\n"
		<< "*                       *\n"
		<< "*                       *\n"
		<< "*                       *\n"
		<< "*                       *\n"
		<< "*  		        *\n"
		<< "* * * * * * * * * * * * *" << std::endl;
}


void Rectangle::calculateArea()
{
	area = sideA * sideB;
}

void Rectangle::calculatePerimeter()
{
	perimeter = sideA * 2 + sideB * 2;
}

void Rectangle::toString()
{
	std::cout << "The name of this shape is: " << name << std::endl;
	std::cout << "The area of this rectangle is: area = " << area << " cm" << std::endl;
	std::cout << "The perimeter of this rectangle is: perimeter =" << perimeter << " cm" << std::endl;
}
