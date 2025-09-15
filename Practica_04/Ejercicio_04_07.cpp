// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 7

#include <iostream>
using namespace std;

// Función para calcular el Máximo Común Divisor (MCD) usando Euclides
int MCD(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m; // Retorna el MCD
}

// Función para calcular el Mínimo Común Múltiplo (MCM) usando MCD
int MCM(int m, int n) {
    return (m * n) / MCD(m, n); // Fórmula: MCM = (m*n)/MCD
}

int main() {
    int m, n;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> m >> n;

    cout << "MCD: " << MCD(m, n) << endl;
    cout << "MCM: " << MCM(m, n) << endl;

    return 0;
}
