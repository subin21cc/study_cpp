#include <iostream>
#include <string>
using namespace std;

int main()
{
	char input_text[100];
	cout << "문자열 입력>>";
	cin >> input_text;

	for (int i = 0; input_text[i]; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << input_text[j];
		}
		cout << "\n";
	}
	
	return 0;
}