// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 1

#include <iostream>
using namespace std;

// función que devuelve un entero: 1 si es par, 0 si es impar
int esPar(int numero) 
{
    if (numero % 2 == 0)
        return 1; // verdadero, es par
    else
        return 0; // falso, es impar
}

int main() 
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (esPar(n))
        cout << "El numero es par" << endl;
    else
        cout << "El numero es impar" << endl;

    return 0;
}
