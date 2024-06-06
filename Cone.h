#pragma once
#include "Circle.h"

class Cone :
    public Circle
{
public:
	Cone(double r, double h) : Circle(r), height(h) {}
    virtual void Show() override;
    virtual double volume() override;

protected:
    double height;
};

