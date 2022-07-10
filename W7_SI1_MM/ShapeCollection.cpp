#include "shapeCollection.h"

void ShapeCollection::addShape(std::string type)
{
	if (type == "square") {
		squares.push_back(Square());
	}
}

void ShapeCollection::getShapeTable(std::string type)
{
	for (auto c : Circles) {
		c.toString();
	}
	for (auto s : squares) {
		s.toString();
	}
	for (auto r : rectangles) {
		r.toString();
	}
}
