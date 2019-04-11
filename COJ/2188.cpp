/*
	2188 - Contiguous Sequences

	Statistics	Sub: 109 | AC: 28 | AC%: 25,69 | Score: 3,17
	Created by	Yonny Mondelo Hernández
	Added by	Vlade087 (2012-12-04)

	**Description**

		Mr. Binary loves to play with zeros and ones. He has a binary number 
	composed by zeros and ones, it has 0 <= a <= 10^6 zeros and 0 <= b <= 10^6 
	ones, and the binary number has at least one digit. Mr. Binary arranges the 
	digits in their number in some arbitrary order, and then he computes the 
	score of the number in the following way:
		Initially, the score is 0 points.
		For each contiguous sequence of zeros with arbitrary length p, the score is 
	increased by p^2 points.
		For each contiguous sequence of ones with arbitrary length q, the score is 
	decreased by q^2 points.
		Given the amount of zeros and ones in the binary number, can you find the 
	maximum possible score that can be reached arranging the digits in some 
	arbitrary order?
	
	>>Input specification>>

	The first line of input contain a integer number 1 <= T <= 250, the amount of test cases. Each of the following T lines contains two space-separated integer numbers a and b (0 <= a, b <= 10^6 and a + b >= 1).
	
	<<Output specification<<

	Output T lines, one per test case. Each line contain a integer number corresponding to the maximum possible score that can be reached arranging the digits of the given number (composed by a zeros and b ones) in some arbitrary order and then computing their score.
	
	**Sample input**

	5
	0 1
	1 1
	1 0
	2 3
	3 2
	
	**Sample output**

	-1
	0
	1
	-1
	7
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 20, b = 16;
	for (int i = 1; i <= b; i++)
	{
		cout << "(" << a << " - " << i << ")^2 + " << i << " (" << b << "/" << i << ")^2 - " << b << " - (" << i << " - 1) * " << b << "/" << i << endl;
		cout << (a-i)*(a-i) + i - (b/i) * (b/i) - b - (i - 1) * (b/i) << endl;
	}

	return 0;
}

