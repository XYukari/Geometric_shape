#include "Cylinder.h"
#include <iostream>

void Cylinder::Show()
{
	std::cout << "Բ���İ뾶Ϊ" << radius << " ��Ϊ" << height << '\n';
}

double Cylinder::volume()
{
	return area() * height;
}
