#include <iostream>
#include <string>
using namespace std;

int main()
{
	int menu, servings;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

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
			break;
		}
		else
		{
			cout << "���κ�? ";
			cin >> servings;
			
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
			cout << servings << "�κ� ���Խ��ϴ�\n";
		}
	}
	return 0;
}