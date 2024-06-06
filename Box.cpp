#include "Box.h"
#include <iostream>

void Box::Show()
{
	std::cout << "长方体长" << length << " 宽" << width << " 高" << height << '\n';
}

double Box::volume()
{
	return area() * height;
}
