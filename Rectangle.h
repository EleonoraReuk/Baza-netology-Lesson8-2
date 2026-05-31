#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b);

    void print_info() const override;
};

#endif