#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cout << "�� ���� �Է��϶�>>";
	cin >> n1 >> n2;
	if (n1 > n2)
	{
		cout << "ū �� = " << n1;
	}
	else if (n1 < n2)
	{
		cout << "ū �� = " << n2;
	}
	else
	{
		cout << "����";
	}

	return 0;
}