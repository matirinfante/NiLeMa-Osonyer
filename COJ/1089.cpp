#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct Proyecto
{
	string nombre; 
	vector<string> inscriptos;

	Proyecto(string nom) { nombre = nom; }

	void eraseUserID(string userID)
	{
		for (int* i = 0; i < inscriptos.size(); ++i)
			if (inscriptos[i] == userID)
				inscriptos.erase(i);
	}

};

int main()
{
	Proyecto test;


	cin >> input;
	while (input != "0")
	{
		while (input != "1")
		{
			bool comp = input.at(0) < 'a';
			if (comp)
				test(input);
			else
				test.inscriptos.push_back(input);

			cin >> input;

		}
		cin >> input;
	}



	for(auto elem : projectos)
		cout << elem << endl;
	for(auto elem : userid)
		cout << elem << endl;

	cin >> input;
	return 0;
}