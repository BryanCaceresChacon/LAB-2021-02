#include <iostream>
using namespace std;

int main()
{
    //EJERCICIO 2.31
    int Tmillas;
    int Cgasolina;
    int Pmillas;
    int Estacionamiento;
    int Peajes;

    cout << "Ejercicio 2.31" << endl;
    cout << "Usuario1" << endl;
    cout << "Ingrese el total de millas recorridas por dia: ";
    cin >> Tmillas;
    cout << "Ingrese el costo por gal�n de gasolina: ";
    cin >> Cgasolina;
    cout << "Ingrese el promedio de millas por gal�n ";
    cin >> Pmillas;
    cout << "Ingrese las tarifas de estacionamiento por dia ";
    cin >> Estacionamiento;
    cout << "Ingrese los peajes por d�a ";
    cin >> Peajes;

    cout << "El costo del usuario1 por d�a de conducci�n al trabajo es: " << Tmillas + Cgasolina + Pmillas + Estacionamiento + Peajes << endl;
}