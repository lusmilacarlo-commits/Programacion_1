// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 13

#include <iostream>
using namespace std;

int main() 
{
    int N, suma = 0;
    cout << "Ingrese un numero entero N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) suma += i;

    cout << "La suma de los numeros del 1 al " << N << " es: " << suma << endl;
    return 0;
}