#include <iostream>
using namespace std;

int main() {
	char str[100];
	int count_x = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�)";

	cin.getline(str, 100, "\n");

	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] == 'x')
		{
			count++;
		}
	}

	cout << "x�� ������ " << count;

	return 0;
}