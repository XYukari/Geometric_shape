#include "Cone.h"
#include <iostream>

void Cone::Show()
{
	std::cout << "Բ���İ뾶Ϊ" << radius << " ��Ϊ" << height << '\n';
}

double Cone::volume()
{
	return area() * height / 3.0;
}