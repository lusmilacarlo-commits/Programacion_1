// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 9

#include <iostream>
using namespace std;

// Función que recibe los minutos trabajados y muestra el resultado directamente
void mostrarTiempo(int minutosTrabajados) 
{
    int tiempoNormal = 8 * 60; // 8 horas = 480 minutos

    if (minutosTrabajados > tiempoNormal)
        cout << "Tiempo extra trabajado: " << minutosTrabajados - tiempoNormal << " minutos." << endl;
    else if (minutosTrabajados < tiempoNormal)
        cout << "Tiempo que se debe a la empresa: " << tiempoNormal - minutosTrabajados << " minutos." << endl;
    else
        cout << "Se trabajó exactamente la jornada laboral." << endl;
}

int main() 
{
    int minutos;
    cout << "Ingrese el tiempo trabajado en minutos: ";
    cin >> minutos;

    mostrarTiempo(minutos); // Llamada a la función

    return 0;
}

