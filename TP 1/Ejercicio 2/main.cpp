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
    if ((x1==x2)&&(b1!=b2))
    {
            cout << "No se puede realizar la interseccion porque el divisor es 0" << endl;
            cout << "Por lo tanto las rectas son paralelas"<< endl;
    }
    else if (x1==x2&&b1==b2)
    {
        cout << "Las rectas tienen infinitos puntos de interseccion" << endl;
    }
    else
    {
        Px = (((b1-b2)/(x1-x2))*-1);
        Py = (Px*x1+b1);
        cout << "La interseccion de se da en: (" << Px << ";" << Py << ")" << endl;
    }


    return 0;
}
