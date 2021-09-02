#include <iostream>
using namespace std;

int main()
{

	//Ejercicio 2.20
	int pi = 3.14159;
	int radio;
	int diametro;
	int circunferencia;
	int area;

	cout << "Escriba el radio de la circunferencia : ";
	cin >> radio;
	cout << endl;
	diametro = radio * 2;
	circunferencia = (radio * 2) * pi;
	area = pi * (radio * radio);
	cout << "El Diametro de la circunferencia es : " << diametro << endl;
	cout << "La Longitud de la circunferencia es : " << circunferencia << endl;
	cout << "El Area de la circunferencia es : " << area << endl;
}