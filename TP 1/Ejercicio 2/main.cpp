#include <iostream>

using namespace std;

int main()
{
    float  x1, x2, b1, b2, Px, Py;
    cout << "Este programa esta diseñado para averiguar la interseccion de dos rectas de tipo lineales" << endl;
    cout << "Introduzca el valor de M1 "; cin >> x1;
    cout << "Introduzca el valor de B1 "; cin >> b1;
    cout << "Introduzca el valor de M2 "; cin >> x2;
    cout << "Introduzca el valor de B2 "; cin >> b2;
    Px = (((b1-b2)/(x1-x2))*-1);
    Py = (Px*x1+b1);
    cout << "La interseccion de las rectas se da en: (" << Px << ";" << Py << ")" << endl;
    return 0;
}
