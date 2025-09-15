// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 9

#include <iostream>
using namespace std;

// Función que calcula el sueldo total de una vendedora
double CalcularSueldo(double sueldoBase, int productosVendidos, double precioUnitario) {
    double totalVentas = productosVendidos * precioUnitario;      // Total vendido por la vendedora
    double comision = totalVentas * 0.10;                        // Comisión 10%
    return sueldoBase + comision;                                 // Sueldo total = básico + comisión
}

// Función que calcula solo la comisión de ventas
double CalcularComision(int productosVendidos, double precioUnitario) {
    return productosVendidos * precioUnitario * 0.10;
}

int main() {
    int n; 
    double precioUnitario;
    
    cout << "Ingrese cantidad de vendedoras: ";
    cin >> n;
    cout << "Ingrese precio promedio de cada producto: ";
    cin >> precioUnitario;

    for (int i = 1; i <= n; i++) {
        double sueldoBase;
        int productosVendidos;
        cout << "\nVendedora #" << i << endl;
        cout << "Ingrese sueldo base: "; cin >> sueldoBase;
        cout << "Ingrese cantidad de productos vendidos: "; cin >> productosVendidos;

        double comision = CalcularComision(productosVendidos, precioUnitario);
        double sueldoTotal = CalcularSueldo(sueldoBase, productosVendidos, precioUnitario);

        cout << "Sueldo base: " << sueldoBase << " Bs" << endl;
        cout << "Comisión por ventas: " << comision << " Bs" << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << " Bs" << endl;
    }

    return 0;
}

