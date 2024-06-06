#include "Circle.h"
#include <iostream>

#define M_PI 3.14159265358979323846

void Circle::Show()
{
	std::cout << "Բ�İ뾶Ϊ" << radius << '\n';
}

double Circle::perimeter()
{
	return 2 * M_PI * radius;
}

double Circle::area()
{
	return M_PI * radius * radius;
}

double Circle::volume()
{
	return 0.0;
}

Circle Circle::operator+(const Circle& rhs)
{
	return Circle(radius + rhs.radius);
}
