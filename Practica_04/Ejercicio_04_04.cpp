// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 4
#include <iostream>
using namespace std;

// Convierte Celsius a Fahrenheit
double ConvertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32; 
}

// Devuelve la mayor de dos temperaturas
double MayorTemperatura(double t1, double t2) {
    return (t1 > t2) ? t1 : t2; 
}

int main() {
    double c1, c2;
    cout << "Ingrese dos temperaturas en Celsius: ";
    cin >> c1 >> c2;

    // Conversión y comparación en menos líneas
    cout << "La mayor temperatura en Fahrenheit es: " 
         << MayorTemperatura(ConvertirCelsiusAFahrenheit(c1), ConvertirCelsiusAFahrenheit(c2)) 
         << endl;
    return 0;
}
