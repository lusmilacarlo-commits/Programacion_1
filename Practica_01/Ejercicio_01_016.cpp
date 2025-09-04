// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 03/09/2025
//Número de ejercicio: 16

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese el numero: " << endl;
    cin >> n;
    bool esPrimo = true;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0){
            esPrimo = false;
        }
    }
    
    if(esPrimo){
        cout << "Es un numero primo" << endl;
    }else {
        cout << "No es un numero primo" << endl;
    }
    return 0;
}