#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str, res;
    int fhr = 0, shr = 0;

    cin >> str;

    //acumulo el "first half rotation"
    for (int i = 0; i < str.length()/2; i++)
        fhr += str.at(i) - 65;

    //acumulo el "second half rotation"
    for (int i = str.length()/2; i < str.length(); i++)
        shr += str.at(i) - 65;

    //empujo cada caracter a res calculando: el caracter ascii en la posicion i + el caracter ascii de la segunda mitad 
    //      en posicion i - 2 veces 65 para quitarle el componente ascii a ambos caracteres + ambas rotaciones 
    //me quedo con el resto de mod 26 y le sumo 65 para que quede un caracter ascii
    for (int i = 0; i < str.length()/2; i++)
        res.push_back(char(65) + char((str.at(i) + str.at(str.length()/2 + i) - 65*2 + fhr + shr)%26));

    cout << res << endl;

    return 0;
}
