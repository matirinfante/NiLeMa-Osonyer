#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	int res = (number *(number + 1))/2;
	std::cout << res << std::endl;
	return 0;
}