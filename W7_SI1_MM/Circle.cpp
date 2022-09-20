#include "Circle.h"

double Circle::calculateArea()
{
    return 3.14 * r * r;
}

double Circle::calculatePerimeter()
{
    return 2 * 3.14 * r;
}

Circle::Circle(std::string name)
{
    this->name = name;
    std::cout << "Podaj dlugosc promienia r:";
    std::cin >> r;
    area = calculateArea();
    perimeter = calculatePerimeter();
    perimeterFormula = "piRkwadrat";
    AreaFormula = "dwapierkwadrat";
}

void Circle::toString()
{
    std::cout << name << std::endl;
    std::cout << "Dlugosc promienia:" << r << std::endl;
    std::cout << "Obowod:" << perimeter << std::endl;
    std::cout << "Pole:" << area << std::endl;
}
