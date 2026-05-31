#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : Figure("Треугольник"), a(a), b(b), c(c), A(A), B(B), C(C) {
}

bool Triangle::check() const {
    return (a + b > c && a + c > b && b + c > a) && (A + B + C == 180);
}

void Triangle::print_info() const {
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}