// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0)); // Inicializa la semilla para que los números aleatorios cambien cada vez

    // Generar 4 calificaciones aleatorias entre 1 y 100
    int n1 = rand() % 100 + 1;
    int n2 = rand() % 100 + 1;
    int n3 = rand() % 100 + 1;
    int n4 = rand() % 100 + 1;

    cout << "Calificaciones: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl;

    // Cálculo del promedio ponderado con pesos 10, 20, 30 y 40
    float promedio = (n1*10 + n2*20 + n3*30 + n4*40) / 100.0;

    cout << "Promedio ponderado = " << promedio << endl;

    return 0;
}
