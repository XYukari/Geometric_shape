#pragma once
#include "Triangle.h"

class T_pyramid :
    public Triangle
{
public:
	T_pyramid(double e1, double e2, double e3, double h) : Triangle(e1, e2, e3), height(h) {}
    virtual void Show() override;
    virtual double volume() override;

protected:
    double height;
};

