// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 1

#include <iostream>
using namespace std;

// Función void: intercambia valores por referencia
void IntercambiarValores(int &a, int &b) 
{
    int temp = a;   // guardo el valor de 'a' en una variable auxiliar
    a = b;
    b = temp;
}

int main() 
{
    int x = 5, y = 10;

    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;
    IntercambiarValores(x, y);  // llamada a la función
    cout << "Despues de intercambiar: x = " << x << ", y = " << y << endl;

    return 0;
}
