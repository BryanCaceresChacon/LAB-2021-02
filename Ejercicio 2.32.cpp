#include <iostream>
using namespace std;

int main()
{
	//Ejercicio 2.32

	int age;
	cout << "Ingrese su edad: ";
	cin >> age;
	cout << endl;
	int valor1, valor2, valor3, valor4;
	valor1 = 220 - age;
	valor2 = 208 - (0.7 * age);
	valor3 = 207 - (0.7 * age);
	valor4 = 211 - (0.64 * age);
	cout << "Valores sugeridos de MHR son:" << endl;
	cout << valor1 << "\n" << valor2 << "\n" << valor3 << "\n" << valor4;

}