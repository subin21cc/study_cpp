#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b)
{
	int res = 0;
	
	for (int i = a; i <= b; i++)
	{
		res += i;
	}
	return res;
}

int main()
{
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�.\n";

	return 0;
}