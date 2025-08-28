// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 6

#include <iostream>
using namespace std;

int main()
 {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }

    return 0;
}