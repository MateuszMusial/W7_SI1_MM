#include "Square.h"
#include "Shape.h"
#include <iostream>

void Square::showShape()
{
	std::cout << "* * * * * * * *\n"
		<< "*             *\n"
		<< "*             *\n"
		<< "*             *\n"
		<< "*             *\n"
		<< "*             *\n"
		<< "*             *\n"
		<< "* * * * * * * *" << std::endl;		
}

void Square::calculateArea()
{
	area = sideA * sideA;
}

void Square::calculatePerimeter()
{
	perimeter = sideA * 4;
}

void Square::toString()
{
	std::cout << "The name of this shape is: " << name << std::endl;
	std::cout << "The area of this square is: area = " << area << " cm" << std::endl;
	std::cout << "The perimeter of this square is: perimeter =" << perimeter << " cm" << std::endl;
}

