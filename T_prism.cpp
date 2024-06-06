#include "T_prism.h"
#include <iostream>

void T_prism::Show()
{
	std::cout << "三棱柱的底面三角形三边长为" << edge1 << " " << edge2 << " " << edge3
		<< " 高为" << height << '\n';
}

double T_prism::volume()
{
	return area() * height;
}
