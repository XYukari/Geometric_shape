#include "Triangle.h"
#include <iostream>
#include <cmath>

void Triangle::Show()
{
	std::cout << "三角形三边长分别为" << edge1 << " " << edge2 << " " << edge3 << '\n';
}

double Triangle::perimeter()
{
	return edge1 + edge2 + edge3;
}

double Triangle::area()
{
	double p = perimeter() / 2.0;
	return sqrt(p * (p - edge1) * (p - edge2) * (p - edge3));
}

double Triangle::volume()
{
	return 0.0;
}
