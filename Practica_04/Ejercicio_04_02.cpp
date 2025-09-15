// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 2

#include <iostream>
#include <cmath>   // para usar M_PI
using namespace std;

// Función double: calcula el volumen del cilindro
double CalcularVolumen(double radio, double altura = 10) 
{
    // Fórmula: V = π * r^2 * h
    return M_PI * radio * radio * altura;
}

int main() 
{
    double r, h;

    cout << "Ingrese el radio del cilindro: ";
    cin >> r;
    cout << "Ingrese la altura del cilindro (o 0 si desea usar la altura por defecto): ";
    cin >> h;

    // Si el usuario pone 0, se usa el valor por defecto
    double volumen;
    if (h == 0)
        volumen = CalcularVolumen(r);
    else
        volumen = CalcularVolumen(r, h);

    cout << "El volumen del cilindro es: " << volumen << endl;

    return 0;
}

