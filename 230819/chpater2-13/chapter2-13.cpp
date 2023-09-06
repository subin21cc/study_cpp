#include <iostream>
#include <string>
using namespace std;

void say_hello()
{
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
}

int ask_menu()
{
	int menu;

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
			return menu;
		}
		else
		{
			return menu;
		}
	}
}

int ask_amount()
{
	int amount;
	cout << "몇인분? ";
	cin >> amount;

	return amount;
}

void process_menu(int menu, int amount)
{
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
	cout << amount << "인분 나왔습니다\n";
}

void process_chiness_restautand()
{
	say_hello();
	do
	{
		int menu = ask_menu();
		if (menu == 4)
			break;
		int amount = ask_amount();
		process_menu(menu, amount);
	} while (true);
}

int main()
{
	process_chiness_restautand();

	return 0;
}

