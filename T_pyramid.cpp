#include "T_pyramid.h"
#include <iostream>

void T_pyramid::Show()
{
	std::cout << "����׶�ĵ������������߳�Ϊ" << edge1 << " " << edge2 << " " << edge3
		<< " ��Ϊ" << height << '\n';
}

double T_pyramid::volume()
{
	return area() * height / 3.0;
}
