// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 3

#include <iostream>
#include <cstdlib> // Librería para rand() y srand()
#include <ctime>   // Librería para time()

using namespace std;

int main() 
{
    // Semilla: inicializa el generador de números aleatorios
    srand(time(0));

    // Generamos un número aleatorio entre 1 y 10
    int num = rand() % 10 + 1;  
    cout << "Numero generado: " << num << endl;

    // Calculamos el factorial del número
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}
