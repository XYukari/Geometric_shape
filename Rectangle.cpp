#include "Rectangle.h"
#include <iostream>

void Rectangle::Show()
{
	std::cout << "¾ØÐÎ³¤" << length << " ¿í" << width << '\n';
}

double Rectangle::perimeter()
{
	return 2 * (length + width);
}

double Rectangle::area()
{
	return length * width;
}

double Rectangle::volume()
{
	return 0.0;
}
