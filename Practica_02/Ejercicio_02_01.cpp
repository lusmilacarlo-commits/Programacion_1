// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 1

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    int n, dado, pares = 0;

    // semilla: se usa para que los numeros aleatorios cambien cada vez
    srand(time(0));

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // rand() % 6 genera valores de 0 a 5, por eso le sumamos 1 (queda de 1 a 6)
        dado = 1 + rand() % 6;

        if (dado % 2 == 0) // si la cara es par (2,4,6)
            pares++;
    }

    cout << "La cantidad de caras pares fue: " << pares << endl;

    return 0;
}
