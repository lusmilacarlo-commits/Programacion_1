// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 2

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main()
 {
    int n, moneda, caras = 0, cruz = 0;

    // semilla: para que los resultados sean diferentes en cada ejecución
    srand(time(0));

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // rand() % 2 genera valores entre 0 y 1
        moneda = rand() % 2;

        if (moneda == 0)
            caras++; // 0 representa "cara"
        else
            cruz++;  // 1 representa "cruz"
    }

    // calcular porcentajes (convertimos a float para no perder decimales)
    float pCaras = (caras * 100.0) / n;
    float pCruz = (cruz * 100.0) / n;

    cout << "Porcentaje de caras: " << pCaras << "%" << endl;
    cout << "Porcentaje de cruz: " << pCruz << "%" << endl;

    return 0;
}
