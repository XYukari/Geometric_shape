#pragma once
#include "Geometric_shape.h"

class Rectangle :
	public Geometric_shape
{
public:
	Rectangle(double l, double w) : length(l), width(w) {}
	virtual void Show() override;
	virtual double perimeter() override;
	virtual double area() override;
	virtual double volume() override;

protected:
	double length;
	double width;
};

