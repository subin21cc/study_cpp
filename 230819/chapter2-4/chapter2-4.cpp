#include <iostream>
using namespace std;

int main() {
	double num[5], max;

	cout << "5���� �Ǽ��� �Է��϶�>>";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];

		max = num[0];

		if (max < num[i])
		{
			max = num[i];
		}
	}

	cout << "���� ū �� = " << max;

	return 0;
}