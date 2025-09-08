// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 5

#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int main()
 {
    srand(time(0)); // Semilla para que los números cambien en cada ejecución

    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    // Variables: num (número generado), suma (acumulador), mayor y menor
    int num, mayor = 0, menor = 1001, suma = 0;

    // Generar N números aleatorios
    for (int i = 0; i < N; i++) {
        num = rand() % 1000 + 1; // número entre 1 y 1000
        cout << num << " ";
        suma += num;             // acumula la suma
        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }

    // Resultados
    cout << "\nSumatoria: " << suma;
    cout << "\nPromedio: " << (double)suma / N;
    cout << "\nMayor: " << mayor;
    cout << "\nMenor: " << menor;

    return 0;
}

