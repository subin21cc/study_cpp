#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, sum = 0;

	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";

	return 0;
}