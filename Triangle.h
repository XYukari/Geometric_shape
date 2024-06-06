#pragma once
#include "Geometric_shape.h"

class Triangle :
	public Geometric_shape
{
public:
	Triangle(double e1, double e2, double e3) : edge1(e1), edge2(e2), edge3(e3) {}
	virtual void Show() override;
	virtual double perimeter() override;
	virtual double area() override;
	virtual double volume() override;

protected:
	double edge1, edge2, edge3;
};

