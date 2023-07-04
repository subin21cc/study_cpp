// class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
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
