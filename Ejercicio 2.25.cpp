#include <iostream>
using namespace std;

int main()
{
    //EJERCICIO 2.25
    int i, j, k;

    cout << "EJERCICIO 2.25" << endl;
    cout << "Ingres 3 numeros: ";
    cin >> i;
    cin >> j;
    cin >> k;
    if (j % i == 0) {
        cout << "Los dos primeross numeros son factores del segundo" << endl;
    }
    else {
        cout << "el primer numero no es factor del segundo" << endl;
    }
    cout << endl;
}