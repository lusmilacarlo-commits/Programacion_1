// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 25

#include <iostream>
using namespace std;

int main()
 {
    char respuesta;
    do {
        int numero;
        cout << "Ingrese un numero para su tabla de multiplicar: ";
        cin >> numero;

        for (int i = 1; i <= 10; i++)
            cout << numero << " x " << i << " = " << numero * i << endl;

        cout << "Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S'); // permite minúscula o mayúscula

    cout << "Programa terminado." << endl;
    return 0;
}
