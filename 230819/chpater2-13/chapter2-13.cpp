#include <iostream>
#include <string>
using namespace std;

void say_hello()
{
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
}

int ask_menu()
{
	int menu;

	while (true)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;

		if (menu < 1 || menu >4)
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}

		else if (menu == 4)
		{
			cout << "���� ������ �������ϴ�.";
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
	cout << "���κ�? ";
	cin >> amount;

	return amount;
}

void process_menu(int menu, int amount)
{
	switch (menu)
	{
		case 1:
			cout << "«�� ";
			break;
		case 2:
			cout << "¥��";
			break;
		default:
			cout << "������";
			break;
	}
	cout << amount << "�κ� ���Խ��ϴ�\n";
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

