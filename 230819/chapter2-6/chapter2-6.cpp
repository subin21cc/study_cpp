#include <iostream>
using namespace std;


int main()
{
	string str1, str2;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> str1;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> str2;

	if (str1 == str2)
		cout << "�����ϴ�\n";
	else
		cout << "���� �ʽ��ϴ�\n";

	// cout << is_equal(str1, str2) ? "�����ϴ�\n" : "���� �ʽ��ϴ�\n";

	return 0;
}