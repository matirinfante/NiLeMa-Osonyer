#include <iostream>
#include "stdlib.h"
using namespace std;

int GroupedBits(int n) {
    int cont = 0, longi;
    string bin;
    char binc[64];
    bin = binc;
    cout << bin;

    longi = bin.length() - 1;

    char index = bin.at(longi);

    bool firstTime = true;

	for (int i = longi - 1; i >= 0; i--) {
        int xors = index ^ bin.at(i);

        cout << xors;
        if (firstTime && !bin.at(i) && index){
            cont++;
            firstTime = false;
        } else if (xors && bin.at(i) == 1) 
        	cont++;

        index = bin.at(i);
    }

    return cont;
}

int main()
{
	int asd;
	GroupedBits(1259);
	cin >> asd;
	return 0;
}