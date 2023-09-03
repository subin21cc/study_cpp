#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	/*
	char answer[100];
	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>";
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
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(answer);

		if (answer == "yes")
			break;
	}

	cout << "종료합니다...";
	return 0;
}