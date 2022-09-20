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


double Rectangle::calculateArea()
{
	area = sideA * sideB;
	return area;
}

double Rectangle::calculatePerimeter()
{
	perimeter = sideA * 2 + sideB * 2;
	return perimeter;
}

void Rectangle::toString()
{
	std::cout << "The name of this shape is: " << name << std::endl;
	std::cout << "The area of this rectangle is: area = " << area << " cm" << std::endl;
	std::cout << "The perimeter of this rectangle is: perimeter =" << perimeter << " cm" << std::endl;
}
