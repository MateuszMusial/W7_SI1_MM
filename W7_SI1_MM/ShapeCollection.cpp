#include "ShapeCollection.h"

void ShapeCollection::addShape(std::string typFigury)
{
	if (typFigury == "Square")
		squaers.push_back(Square("Kwadrat"));
	else if (typFigury == "Circle")
		circles.push_back(Circle("Kolo"));
	else
		std::cout << "ERROR";
}

void ShapeCollection::getShapesTable()
{
	std::cout << "Twoje Kola:\n";
	for (auto c : circles)
	{
		c.toString();
	}
	std::cout << "\nTwoje kwadraty:\n";
	for (auto s : squaers)
	{
		s.toString();
	}
}

void ShapeCollection::getLargestShapeByPerimeter()
{
	double maxKolko = 0;
	int maxKolkoPozycja = 0;
	double maxKwadrat = 0;
	int maxKwadratPozycja = 0;

	int temp1 = 0;
	for (auto c : circles)
	{
		if (c.getPerimeter() > maxKolko)
		{

			maxKolko = c.getPerimeter();
			maxKolkoPozycja = temp1;
		}
		temp1++;
	}

	temp1 = 0;
	for (auto s : squaers)
	{
		if (s.getPerimeter() > maxKolko)
		{

			maxKwadrat = s.getPerimeter();
			maxKwadratPozycja = temp1;
		}
		temp1++;

	}

	std::cout << "Najwieksze pod wzgledem obwodu:\n";
	if (maxKolko >= maxKwadrat) {

		circles[maxKolkoPozycja].toString();
	}
	else if (maxKolko < maxKwadrat) {

		squaers[maxKwadratPozycja].toString();
	}
	else
		std::cout << "error";
}

void ShapeCollection::getLargestShapeByArea()
{
	double maxKolko = 0;
	int maxKolkoPozycja = 0;
	double maxKwadrat = 0;
	int maxKwadratPozycja = 0;

	int temp1 = 0;
	for (auto c : circles)
	{
		if (c.getArea() > maxKolko)
		{

			maxKolko = c.getArea();
			maxKolkoPozycja = temp1;
		}
		temp1++;
	}

	temp1 = 0;
	for (auto s : squaers)
	{
		if (s.getArea() > maxKolko)
		{

			maxKwadrat = s.getArea();
			maxKwadratPozycja = temp1;
		}
		temp1++;

	}

	std::cout << "Najwieksze pod wzgledem pola:\n";
	if (maxKolko >= maxKwadrat) {

		circles[maxKolkoPozycja].toString();
	}
	else if (maxKolko < maxKwadrat) {

		squaers[maxKwadratPozycja].toString();
	}
	else
		std::cout << "error";
}

void ShapeCollection::getFormulas()
{
	if (squaers.size() > 0)
	{
		std::cout << "Kwadraty:\n";
		squaers[0].getPerimeterFormula();
		std::cout << std::endl;
		squaers[0].getAreaFormula();

	}
	if (circles.size() > 0)
	{
		std::cout << "\nKola:\n";
		circles[0].getPerimeterFormula();
		std::cout << std::endl;
		circles[0].getAreaFormula();
	}
}