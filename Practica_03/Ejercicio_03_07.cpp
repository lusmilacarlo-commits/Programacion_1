// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0)); // Inicializamos la semilla para números aleatorios

    int N;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> N;

    int sumaEdades = 0, sumaAlturas = 0, mayores18 = 0, altos = 0;

    for (int i = 0; i < N; i++) 
    {
        int edad = rand() % 35 + 1;        // Edad aleatoria entre 1 y 35
        int altura = rand() % 81 + 120;    // Altura aleatoria entre 120 y 200 cm

        sumaEdades += edad;
        sumaAlturas += altura;

        if (edad > 18) mayores18++;
        if (altura > 175) altos++;         // Mayor a 1.75 m
    }

    // Mostrar resultados
    cout << "Edad media: " << (float)sumaEdades / N << endl;
    cout << "Altura media: " << (float)sumaAlturas / N << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos que miden mas de 1.75 m: " << altos << endl;

    return 0;
}
