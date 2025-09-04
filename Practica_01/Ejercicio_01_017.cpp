// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 17

#include <iostream>
using namespace std;

int sumaDivisores(int n)
 {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() 
{
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (sumaDivisores(a) == b && sumaDivisores(b) == a)
        cout << a << " y " << b << " son numeros amigos." << endl;
    else
        cout << a << " y " << b << " no son numeros amigos." << endl;

    return 0;
}





