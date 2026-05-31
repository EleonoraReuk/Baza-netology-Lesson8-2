#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus(int side, int A, int B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {
}

void Rhombus::print_info() const {
    std::cout << "Ромб:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}
