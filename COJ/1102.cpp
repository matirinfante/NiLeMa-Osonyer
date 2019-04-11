#include <iostream>



int main()
{
	int number = -1;
	std::cin >> number;
	while(number != 0)
	{
		if (number % 11 == 0)
			std::cout << number << " is a multiple of 11." << std::endl;
		else
			std::cout << number << " is not a multiple of 11." << std::endl;
		std::cin >> number;
	}	
	return 0;
}