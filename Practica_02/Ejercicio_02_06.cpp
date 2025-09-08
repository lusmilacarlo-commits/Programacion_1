// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 6

#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() 
{
    srand(time(0)); // Semilla para números aleatorios diferentes

    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    int num, contadorPrimos = 0;

    // Generar N números aleatorios y verificar si son primos
    for (int i = 0; i < N; i++) {
        num = rand() % 10000 + 1; // número entre 1 y 10000
        cout << num << " ";
        if (esPrimo(num)) contadorPrimos++;
    }

    cout << "\nCantidad de numeros primos: " << contadorPrimos << endl;

    return 0;
}

