#include <iostream>
using namespace std;

int main()
{

	//Ejercicio 2.24
	int numero1;
	int numero2;
	cout << "Ingrese un valor para el numero1: ";
	cin >> numero1;
	cout << endl;
	cout << "Ingrese un valor para el numero2: ";
	cin >> numero2;
	cout << endl;
	if (numero1 % 2 != 0) {
		cout << numero1 << " es un numero impar " << endl;
	}
	if (numero2 % 2 != 0) {
		cout << numero2 << " es un numero impar " << endl;
	}
	if (numero1 % 2 == 0) {
		cout << numero1 << " no es un numero impar " << endl;
	}
	if (numero2 % 2 == 0) {
		cout << numero2 << " no es un numero impar " << endl;
	}

	cout << endl;
}