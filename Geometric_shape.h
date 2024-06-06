#pragma once
class Geometric_shape
{
public:
	virtual void Show() = 0;
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual double volume() = 0;
};

