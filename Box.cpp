#include "Box.h"
#include <iostream>

void Box::Show()
{
	std::cout << "�����峤" << length << " ��" << width << " ��" << height << '\n';
}

double Box::volume()
{
	return area() * height;
}
