// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 4

#include <iostream>
using namespace std;

int main()
{
    float radio, volumen;
    const float pi = 3.14159;

    cout << "Ingresa el radio de la esfera: ";
    cin >> radio;

    volumen = (4.0 / 3.0) * pi * radio * radio * radio;

    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}

