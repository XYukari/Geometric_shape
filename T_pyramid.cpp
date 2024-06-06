#include "T_pyramid.h"
#include <iostream>

void T_pyramid::Show()
{
	std::cout << "三棱锥的底面三角形三边长为" << edge1 << " " << edge2 << " " << edge3
		<< " 高为" << height << '\n';
}

double T_pyramid::volume()
{
	return area() * height / 3.0;
}
