#include <iostream>
using namespace std;

int main() {
	char str1[100], str2[100];

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> str1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> str2;

	for (int i = 0; str1[i] != NULL; i++)
	{
		if (str1[i] != str2[i])
		{
			cout << "���� �ʽ��ϴ�";
			break;
		}
	}

	return 0;
}