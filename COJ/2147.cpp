#include <iostream>

using namespace std;

int main()
{
	int testCases, spaces;
	string input, substring;
	cin >> testCases;
	for (int i = 0; i < testCases; i++)
	{

		cin >> input >> spaces;

		substring = input.substr(input.size() - (spaces % input.size()), input.size());
		input.insert(0, substring);
		input.erase(input.size() - substring.size());


		cout << input << endl;
	}
	return 0;

}