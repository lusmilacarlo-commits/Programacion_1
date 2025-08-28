// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 9

#include <iostream>
using namespace std;

int main()
 {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 12) {
        cout << "Niño" << endl;
    } else if (edad <= 18) {
        cout << "Adolescente" << endl;
    } else if (edad < 60) {
        cout << "Mayor de edad" << endl;
    } else {
        cout << "Adulto mayor" << endl;
    }

    return 0;
}