// class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Circle.h"
#include "SingleList.h"
using namespace std;

void circle_test()
{
	{
		Circle donut;
		donut.radius = 10;
		double area = donut.getArea();
		cout << "donut의 반지름은 " << donut.radius << ", donut의 면적은 " << area << endl;
	}

	Circle pizza;
	pizza.radius = 38;
	double area = pizza.getArea();
	cout << "pizza의 반지름은 " << pizza.radius << ", pizza의 면적은 " << area << endl;

	Circle ball(20);
	cout << "ball의 반지름은 " << ball.radius << ", ball의 면적은 " << ball.getArea() << endl;

}

void list_test1()
{
	/*
		4 3 0 9
		3 0 9
		3 0 1 2 3 9
		3 1 3
		1 2 3
	*/

	SingleList list;

	list.append(4);
	list.append(3);
	list.append(0);
	list.append(9);

	list.print();

	list.removeAt(0);

	for (int i = 0; i < 3; i++)
	{
		list.insertAt(i + 1, i + 1);
	}
	list.print();

	for (int i = 0; i < 6; i++)
	{
		list.removeAt(i + 1);
	}
	list.print();

	list.removeAt(0);
	list.insertAt(0, 2);

	list.print();
}

int main()
{
	list_test1();
}
