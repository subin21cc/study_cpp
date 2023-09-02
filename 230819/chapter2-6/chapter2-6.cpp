#include <iostream>
using namespace std;


int main()
{
	string str1, str2;

	cout << "새 암호를 입력하세요>>";
	cin >> str1;

	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> str2;

	if (str1 == str2)
		cout << "같습니다\n";
	else
		cout << "같지 않습니다\n";

	// cout << is_equal(str1, str2) ? "같습니다\n" : "같지 않습니다\n";

	return 0;
}