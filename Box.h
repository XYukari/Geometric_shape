#pragma once
#include "Rectangle.h"

class Box :
	public Rectangle
{
public:
	Box(double l, double w, double h) : Rectangle(l, w), height(h) {}

	virtual void Show() override;
	virtual double volume() override;

protected:
	double height;
};

