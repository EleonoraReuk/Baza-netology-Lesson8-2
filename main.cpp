#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <iostream>

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    triangle.print_info();
    std::cout << std::endl;

    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    rightTriangle.print_info();
    std::cout << std::endl;

    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    isoscelesTriangle.print_info();
    std::cout << std::endl;

    EquilateralTriangle equilateralTriangle(30);
    equilateralTriangle.print_info();
    std::cout << std::endl;

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    quadrilateral.print_info();
    std::cout << std::endl;

    Rectangle rectangle(10, 20);
    rectangle.print_info();
    std::cout << std::endl;

    Square square(20);
    square.print_info();
    std::cout << std::endl;

    Parallelogram parallelogram(20, 30, 30, 40);
    parallelogram.print_info();
    std::cout << std::endl;

    Rhombus rhombus(30, 30, 40);
    rhombus.print_info();

    return 0;
}