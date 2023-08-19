#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cout << "두 수를 입력하라>>";
	cin >> n1 >> n2;
	if (n1 > n2)
	{
		cout << "큰 수 = " << n1;
	}
	else if (n1 < n2)
	{
		cout << "큰 수 = " << n2;
	}
	else
	{
		cout << "같음";
	}

	return 0;
}