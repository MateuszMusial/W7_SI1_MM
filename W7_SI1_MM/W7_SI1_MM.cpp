#include <iostream>
#include "square.h"
#include "rectangle.h"

int main()
{
    std::cout << "Hello World!\n\n";
    Square s(4);
    s.calculateArea();
    s.calculatePerimeter();
    s.showShape();
    s.toString();

    Rectangle r(3.2, 4.9);

    std::cout << std::endl;

    Shape* ptr;
    ptr = &r;
    ptr->showShape();
    ptr->calculateArea();
    ptr->calculatePerimeter();
    ptr->toString();
}
