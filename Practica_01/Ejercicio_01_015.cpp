// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 15

#include <iostream>
using namespace std;

int main() 
{
    int N;
    float nota, suma = 0, promedio;

    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / N;

    cout << "El promedio general es: " << promedio << endl;

    return 0;
}