// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 18

#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    if (n < 2) return false; // los números menores que 2 no son primos
    for (int i = 2; i * i <= n; i++) { // probamos divisores hasta la raíz cuadrada
        if (n % i == 0)
            return false; // si se divide exacto, no es primo
    }
    return true;
}

int main()
{
    int contador = 0;
    int numero = 2;

    while (contador < 100) { // queremos los primeros 100 primos
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}