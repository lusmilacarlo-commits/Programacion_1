// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 10

#include <iostream>
using namespace std;

// Función que calcula la tarifa de un viaje según la distancia
double calcularTarifa(double kmRecorridos) 
{
    double tarifaBase = 10;       // Tarifa mínima
    double precioKm = 2;          // Precio por kilómetro
    double total = tarifaBase + kmRecorridos * precioKm;

    if (kmRecorridos > 10)        // Aplica descuento del 10% si recorre más de 10 km
        total = total * 0.9;

    return total;                 // Devuelve el precio final
}

int main() 
{
    double km;
    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;

    double precio = calcularTarifa(km); // Llamada a la función
    cout << "El precio del viaje es: " << precio << " Bs." << endl;

    return 0;
}
