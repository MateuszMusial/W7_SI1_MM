
#include "square.h"

double Square::calculateArea()
{
    return a * a;
}

double Square::calculatePerimeter()
{
    return 4 * a;
}

Square::Square(std::string name)
{
    this->name = name;
    std::cout << "Podaj dlugosc boku a:";
    std::cin >> a;
    area = calculateArea();
    perimeter = calculatePerimeter();
    perimeterFormula = "aa";
    AreaFormula = "4a";
}

void Square::toString()
{
    std::cout << name << std::endl;
    std::cout << "Dlugosc boku a:" << a << std::endl;
    std::cout << "Obowod:" << perimeter << std::endl;
    std::cout << "Pole:" << area << std::endl;
}