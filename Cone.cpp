#include "Cone.h"
#include <iostream>

void Cone::Show()
{
	std::cout << "圆柱的半径为" << radius << " 高为" << height << '\n';
}

double Cone::volume()
{
	return area() * height / 3.0;
}