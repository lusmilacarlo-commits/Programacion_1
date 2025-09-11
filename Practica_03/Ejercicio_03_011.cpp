// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 11

#include <iostream>
using namespace std;

// Función que simula el retiro y muestra el saldo final
void retirarDinero(double &saldo, double cantidad) 
{
    if (cantidad > saldo) {
        cout << "Saldo insuficiente." << endl;
    }
    else if (int(cantidad) % 10 != 0) {
        cout << "El monto debe ser múltiplo de 10." << endl;
    }
    else {
        saldo -= cantidad;
        cout << "Retiro exitoso de " << cantidad << " Bs." << endl;
    }
    cout << "Saldo actual: " << saldo << " Bs." << endl;
}

int main() 
{
    double saldo = 1000;  // Saldo inicial
    double cantidad;

    cout << "Ingrese el monto a retirar: ";
    cin >> cantidad;

    retirarDinero(saldo, cantidad);  // Llamada a la función

    return 0;
}
