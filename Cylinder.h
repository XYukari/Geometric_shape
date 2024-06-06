#pragma once
#include "Circle.h"

class Cylinder :
    public Circle
{
public:
    Cylinder(double r, double h): Circle(r), height(h) {}
    virtual void Show() override;
    virtual double volume() override;

protected:
    double height;
};

