#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle()
{
}

Circle::Circle(int r)
{
	radius = r;
}

Circle::~Circle()
{
	cout << radius << "�Ҹ��ڰ� ȣ���\n";
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
