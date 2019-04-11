//COJ-1014 Traditional Bingo
#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	int cases, number, matriz[5][5], col, fil, ciclo, cont = 0;
	cin >> cases;
	for (int c = 0; c < cases; c++) {
		cont = 0;
		int contadores[] = {5, 5, 4, 5, 5, 5, 5, 4, 5, 5, 4, 4};
		for (fil = 0; fil < 5; fil++) {
			for (col = 0; col < 5; col++) {
				if (fil == 2 && col == 2)
					matriz[fil][col] = -1;
				else
					cin >> matriz[fil][col];
			}
		}
		queue<int> numbers;
		
		for(int i = 0; i < 75; i++) {
			cin >> number;
			numbers.push(number);
		}
		bool ganador = false;
		while (!ganador){
			number = numbers.front();

			col = (number - 1) / 15;
			fil = 0;
			while (fil < 5 && matriz[fil][col] != number)
				fil++;


			if (fil != 5) {
				fil--;
				contadores[fil]--;
				contadores[col + 5]--;
				if (fil == col)
					contadores[10]--;
				if (fil + col == 4)
					contadores[11]--;

				ciclo = 12;
				while (!ganador && ciclo != 0) {
					if (contadores[ciclo] == 0)
						ganador = true;
					ciclo--;
				}
			}

			cont++;
			numbers.pop();
		}	
		if (cont != 4)
			cout << "BINGO after " << cont << " numbers announced" << endl;
		else
			cout << "BINGO after 5 numbers announced" << endl;


	}
	return 0;

}