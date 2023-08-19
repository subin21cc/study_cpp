#include <iostream>
using namespace std;

int main() {
	char str1[100], str2[100];

	cout << "새 암호를 입력하세요>>";
	cin >> str1;

	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str2;

	for (int i = 0; str1[i] != NULL; i++)
	{
		if (str1[i] != str2[i])
		{
			cout << "같지 않습니다";
			break;
		}
	}

	return 0;
}