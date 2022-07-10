#pragma once
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeCollection
{
public:
	void addShape(std::string type);
	void getShapeTable(std::string type);
	void getLargestShapeByPerimeter(std::string type);
	void getLargestShapeByArea(std::string type);

private:

	std::vector <Square> squares;
	std::vector <Circle> Circles;
	std::vector <Rectangle> rectangles;

};

