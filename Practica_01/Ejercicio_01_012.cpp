// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 12

#include <iostream>
using namespace std;

int main()
 {
    int numero;

    cout << "Ingrese un numero entre 1 y 5: ";
    cin >> numero;

    while(numero < 1 || numero > 5) {
        cout << "Numero invalido. Ingrese un numero entre 1 y 5: ";
        cin >> numero;
    }

    cout << "Numero valido: " << numero << endl;

    return 0;
}
