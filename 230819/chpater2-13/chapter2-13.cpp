#include <iostream>
#include <string>
using namespace std;

int main()
{
	int menu, servings;

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (true)
	{
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> menu;
		
		if (menu < 1 || menu >4)
		{
			cout << "다시 주문하세요!!\n";
		}

		else if (menu == 4)
		{
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else
		{
			cout << "몇인분? ";
			cin >> servings;
			
			switch (menu)
			{
				case 1:
					cout << "짬뽕 ";
					break;
				case 2:
					cout << "짜장";
					break;
				default:
					cout << "군만두";
					break;
			}
			cout << servings << "인분 나왔습니다\n";
		}
	}
	return 0;
}