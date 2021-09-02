#include <iostream>
using namespace std;

int main()
{
	//Ejercicio 2.28

	int number;
	cout << "Ingrese un numero de 4 digitos: ";
	cin >> number;
	cout << number % 10 << " " << (number % 100) / 10 << " " << (number % 1000) / 100 << " " << number / 1000 << endl;

	cout << endl;
}