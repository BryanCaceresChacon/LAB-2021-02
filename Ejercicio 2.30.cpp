#include <iostream>
using namespace std;

int main()
{
	//Ejercicio 2.30
	float peso;
	float altura;
	float IMC;
	cout << "Ingrese su peso en kg: ";
	cin >> peso;
	cout << "Ingrese su altura en metros(1.75): ";
	cin >> altura;

	IMC = peso / (altura * altura);
	cout << "Evaluacion de IMC" << endl;
	cout << "Su IMC es : " << IMC << endl;
	if (IMC < 18.5) {
		cout << "Su peso es insuficiente";
	}
	if (18.5 < IMC and IMC < 24.9) {
		cout << "Su peso es normal";
	}

	if (25 < IMC and IMC < 29.9) {
		cout << "Tiene exceso de peso";
	}
	if (IMC > 30) {
		cout << "Esta obeso";
	}

	cout << endl;

}