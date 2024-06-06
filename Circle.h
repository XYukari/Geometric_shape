#pragma once
#include "Geometric_shape.h"

class Circle :
    public Geometric_shape
{
public:
    Circle(double r) : radius(r) {}

    virtual void Show() override;
    virtual double perimeter() override;
    virtual double area() override;
    virtual double volume() override;

	virtual Circle operator+(const Circle& rhs);

protected:
    double radius;
};

