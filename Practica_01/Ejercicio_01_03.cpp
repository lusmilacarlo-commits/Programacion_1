// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 3

#include <iostream>
using namespace std;

int main() 
{
    float base, altura, area;

    cout << "Ingresa la base del triángulo: ";
    cin >> base;

    cout << "Ingresa la altura del triángulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}