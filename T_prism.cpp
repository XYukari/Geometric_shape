#include "T_prism.h"
#include <iostream>

void T_prism::Show()
{
	std::cout << "�������ĵ������������߳�Ϊ" << edge1 << " " << edge2 << " " << edge3
		<< " ��Ϊ" << height << '\n';
}

double T_prism::volume()
{
	return area() * height;
}
