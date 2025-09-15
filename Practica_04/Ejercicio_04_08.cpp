// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Genera un precio aleatorio entre 20 y 50
double GenerarPrecio() { return 20 + rand() % 31; }

// Calcula total con IVA y descuento si corresponde
double CalcularTotal(int n) {
    double total = 0;
    for (int i = 0; i < n; i++) total += GenerarPrecio() * 1.13; // aplicar IVA 13%
    if (total > 2500) total *= 0.95; // descuento 5%
    return total;
}

// Calcula solo el IVA total
double CalcularIVA(int n) {
    double iva = 0;
    for (int i = 0; i < n; i++) iva += GenerarPrecio() * 0.13; // sumar solo IVA
    return iva;
}

int main() {
    srand(time(0));
    int n;
    cout << "Cantidad de productos vendidos: "; 
    cin >> n;

    double totalVentas = CalcularTotal(n);
    double pagoIVA = CalcularIVA(n);

    cout << "Total ventas (con IVA y descuento si aplica): " << totalVentas << " Bs" << endl;
    cout << "Pago del IVA al Servicio de Impuestos Nacionales: " << pagoIVA << " Bs" << endl;

    return 0;
}
