//2799.cpp
//Classifying Triangles

//	Acepted
//	Time: 17

#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c != 180)
		cout << "Error";
	else if (a == b && a == c)
		cout << "Equilateral";
	else if (a == b || b == c || a == c)
		cout << "Isosceles";
	else 
		cout << "Scalene";
	return 0;
}

/*	
	//	usando stdio
	//	Accepted 
	//	Time: 29

	#include <stdio.h>

	int main()
	{
		int a, b, c;
		scanf("%d", &a); scanf("%d", &b); scanf("%d", &c); 
		if (a + b + c != 180)
			printf("Error");
		else if (a == b && a == c)
			printf ("Equilateral");
		else if (a == b || b == c || a == c)
			printf ("Isosceles");
		else 
			printf("Scalene");
		return 0;
	}
*/
