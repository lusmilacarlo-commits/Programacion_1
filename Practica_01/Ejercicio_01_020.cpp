// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 20

#include <iostream>
using namespace std;

int main()
 {
    int numero;
    int contador = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero == 0) 
    {
        contador = 1; // el cero tiene 1 dígito
    } else {
        if (numero < 0) numero = -numero; // convertir a positivo
        while (numero > 0) 
        {
            numero /= 10; // eliminar el último dígito
            contador++;   // contar cada dígito
        }
    }

    cout << "El numero tiene " << contador << " digitos." << endl;

    return 0;
}
