// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 23

#include <iostream>
using namespace std;

int main()
 {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 0) 
    {
        cout << "-";
        numero = -numero; // trabajamos con el valor positivo
    }

    while (numero > 0) 
    {
        cout << numero % 10; // imprime el último dígito
        numero /= 10;        // elimina el último dígito
    }

    cout << endl;
    return 0;
}
