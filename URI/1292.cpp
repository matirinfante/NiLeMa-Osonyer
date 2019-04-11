#include "stdio.h"

int main()
{
	double factor = 1.06739568171;
	double side;
	int asd;

	while(scanf("%d", side) != EOF)
	{
		side *= factor;
		double d = 0.1;
		printf("%f", d);
	}
	return 0;
}