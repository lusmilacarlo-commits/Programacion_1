// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 1

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (b != 0 && a % b == 0)
        cout << a << " es multiplo de " << b << endl;
    else if (a != 0 && b % a == 0)
        cout << b << " es multiplo de " << a << endl;
    else
        cout << "Ninguno es multiplo del otro" << endl;

    return 0;
}
