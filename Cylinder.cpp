#include "Cylinder.h"
#include <iostream>

void Cylinder::Show()
{
	std::cout << "圆柱的半径为" << radius << " 高为" << height << '\n';
}

double Cylinder::volume()
{
	return area() * height;
}
