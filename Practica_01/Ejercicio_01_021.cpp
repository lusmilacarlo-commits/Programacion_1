// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 21

#include <iostream>
using namespace std;

int main() 
{
    int a, b, resultado = 0;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    for (int i = 0; i < b; i++)
        resultado += a;

    cout << "El resultado es: " << resultado << endl;
    return 0;
}

