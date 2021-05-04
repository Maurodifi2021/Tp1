#include <iostream>

using namespace std;

int main ()
{
    float Km, Ms;
    float nm = 3.6;
    cout << "Introduzca una velocidad: "; cin >> Km;
    Ms = Km / nm;
    cout << "La velocidad en Mts/Seg es: " << Ms << endl;
    return 0;
}
