// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 3

#include <iostream>
using namespace std;

// Función que recibe un entero por valor y otro por referencia
void ModificarValores(int valor, int &referencia) 
{
    valor = valor * 2;          // El entero por valor solo se modifica dentro de la función
    referencia = referencia + 10; // El entero por referencia sí se refleja fuera
    cout << "Dentro de la funcion (por valor): " << valor << endl;
}

int main() 
{
    int a = 5, b = 7;
    cout << "Antes de la funcion -> a: " << a << ", b: " << b << endl;
    ModificarValores(a, b);
    cout << "Despues de la funcion -> a: " << a << ", b: " << b << endl;
    return 0;
}
