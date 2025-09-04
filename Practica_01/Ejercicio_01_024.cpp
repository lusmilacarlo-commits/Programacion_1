// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 24

#include <iostream>
using namespace std;

int main()
 {
    int opcion = -1; // valor inicial cualquiera que no sea 0

    while (opcion != 0) 
    {
        cout << "\nMENU:\n1. Opcion 1\n2. Opcion 2\n3. Opcion 3\n0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3)
            cout << "Selecciono Opcion " << opcion << endl;
        else if (opcion == 0)
            cout << "Saliendo...\n";
        else
            cout << "Opcion invalida\n";
    }

    return 0;
}
