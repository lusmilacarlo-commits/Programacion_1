// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 5

#include <iostream>
using namespace std;

int main()
 {
    float celsius, kelvin;

    cout << "Ingresa la temperatura en grados centígrados: ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "La temperatura en Kelvin es: " << kelvin << endl;

    return 0;
}
