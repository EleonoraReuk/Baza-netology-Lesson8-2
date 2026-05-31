#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
    : Figure("Четырёхугольник"), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
}

bool Quadrilateral::check() const {
    return A + B + C + D == 360;
}

void Quadrilateral::print_info() const {
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
