// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 4

#include <iostream>
using namespace std;

// Función que calcula el IMC (peso / altura^2)
float calcularIMC(float peso, float altura) 
{
    return peso / (altura * altura);
}

int main() 
{
    float peso, altura;

    // Pedimos los datos al usuario
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    // Llamamos a la función y mostramos el resultado
    float imc = calcularIMC(peso, altura);
    cout << "Su IMC es: " << imc << endl;

    return 0;
}

