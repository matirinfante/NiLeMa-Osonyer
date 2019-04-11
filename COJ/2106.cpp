#include <iostream>

long sortNum(long n) {
  while (true) {
    long a = n % 10, p = 9;
    bool s = false;
    for (long r = n / 10; r; r/= 10) {
      long b = r % 10;
      if (a < b) {
        n -= p * (b - a);
        s = true;
      } else a = b;
      p *= 10;
    }
    if (!s) return n;
  }
}

int main()
{
	long number = 1, limit;

	std::cin >> limit;

	for (long i = 1; i < limit; i++)
	{
		number *= 2;
		number = sortNum(number);
	}

	std::cout << number;
	return 0;
}