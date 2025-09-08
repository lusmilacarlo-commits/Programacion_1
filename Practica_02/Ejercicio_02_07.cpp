// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 7

#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int main()
 {
    srand(time(0)); // Semilla para que los números aleatorios cambien cada vez

    int N;
    cout << "Ingrese la cantidad total de niños: ";
    cin >> N;

    // Generar aleatoriamente la cantidad de niños de 1 a 3 años
    int n1 = rand() % (N + 1);             // niños de 1 año
    int n2 = rand() % (N - n1 + 1);        // niños de 2 años
    int n3 = N - n1 - n2;                  // niños de 3 años (restantes)

    // Mostrar la cantidad de niños de cada edad
    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;

    // Calcular pañales diarios
    int pañales = n1 * 6 + n2 * 3 + n3 * 2;
    cout << "Consumo de pañales por día: " << pañales << endl;

    return 0;
}

