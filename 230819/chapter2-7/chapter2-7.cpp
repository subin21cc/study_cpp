#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	char answer[100];
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(answer, 100);

		if (strcmp(answer, "yes") == 0)
		{
			break;
		}
	}
	*/

	string answer;
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(answer);

		if (answer == "yes")
			break;
	}

	cout << "�����մϴ�...";
	return 0;
}