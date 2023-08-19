#include <iostream>
using namespace std;

int main() {
	char str[100];
	int count_x = 0;

	cout << "문자들을 입력하라(100개 미만)";

	cin.getline(str, 100, "\n");

	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] == 'x')
		{
			count++;
		}
	}

	cout << "x의 개수는 " << count;

	return 0;
}