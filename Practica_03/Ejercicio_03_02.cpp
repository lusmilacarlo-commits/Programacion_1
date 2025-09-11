// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 2

#include <iostream>
using namespace std;

float convertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32; // Fórmula de conversión
}

int main() 
{
    float c;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> c;

    // Llamada a la función para hacer la conversión
    float f = convertirCelsiusAFahrenheit(c);

    cout << "Equivalente en Fahrenheit: " << f << endl;
    return 0;
}
