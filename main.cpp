#include "Array.h"
#include "Box.h"
#include "Circle.h"
#include "Cone.h"
#include "Cylinder.h"
#include "Geometric_shape.h"
#include "Rectangle.h"
#include "T_prism.h"
#include "T_pyramid.h"
#include "Triangle.h"
#include <iostream>

int main()
{
	int size = 8;

	Array<Geometric_shape*> list;
	list.ReSize(size);

	Geometric_shape* rect = new Rectangle(6, 8);
	Geometric_shape* box = new Box(6, 8, 3);
	Geometric_shape* circle = new Circle(10);
	Geometric_shape* cylinder = new Cylinder(10, 3);
	Geometric_shape* cone = new Cone(10, 3);
	Geometric_shape* triangle = new Triangle(3, 4, 5);
	Geometric_shape* t_pyramid = new T_pyramid(3, 4, 5, 3);
	Geometric_shape* t_prism = new T_prism(3, 4, 5, 3);
	list[0] = rect;
	list[1] = box;
	list[2] = circle;
	list[3] = cylinder;
	list[4] = cone;
	list[5] = triangle;
	list[6] = t_pyramid;
	list[7] = t_prism;

	for (int i = 0; i < size; ++i)
	{
		auto p = list[i];
		p->Show();
		std::cout << "图形周长：" << p->perimeter() << '\t';
		std::cout << "图形面积：" << p->area() << '\t';
		std::cout << "图形体积：" << p->volume() << "\n\n";
	}

	Circle circleA = Circle(4.4);
	Circle circleB = Circle(3.3);
	Circle circleC = circleA + circleB;
	std::cout << "\n圆的加法：\n";
	circleC.Show();
}