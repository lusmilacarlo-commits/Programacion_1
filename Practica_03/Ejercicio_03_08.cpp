// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 8

#include <iostream>
using namespace std;

// Función que convierte el monto en billetes y monedas
void convertirMonto(int monto) 
{
    int denominaciones[] = {200, 100, 50, 20, 10, 5, 2, 1}; // Billetes y monedas disponibles
    int cantidad;

    for (int i = 0; i < 8; i++) {
        cantidad = monto / denominaciones[i];  // Cuántos billetes/monedas de esa denominación
        monto = monto % denominaciones[i];     // Resto del monto

        if (cantidad > 0) {
            if (denominaciones[i] >= 5)
                cout << cantidad << " billete(s) de " << denominaciones[i] << " Bs" << endl;
            else
                cout << cantidad << " moneda(s) de " << denominaciones[i] << " Bs" << endl;
        }
    }
}

int main() 
{
    int monto;
    cout << "Ingrese el monto en Bs: ";
    cin >> monto;

    convertirMonto(monto);  // Llamada a la función que hace la conversión

    return 0;
}
