#include <iostream>

using namespace std;

int main()
{
	int diferencia = 0;
	char buffer = getchar();
	
	while (buffer != '\n')
	{
		if (buffer == '(')
			diferencia++;
		else
			diferencia--;
		buffer = getchar();
	}

	cout << diferencia - 1 << endl;

	return 0;
}