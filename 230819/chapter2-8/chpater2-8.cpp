#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	char name[100];
	char long_name[100] = "";

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";

	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";

		if (strlen(name) > strlen(long_name))
			strcpy(long_name, name);
	}

	cout << "가장 긴 이름은 " << long_name << "\n";

	return 0;
}