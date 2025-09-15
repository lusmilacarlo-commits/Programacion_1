// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 6

#include <iostream>
using namespace std;

// Verifica si un número es primo
bool EsPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

// Devuelve la suma de dígitos distintos de cero
int SumaDigitos(int num) {
    int suma = 0;
    while (num > 0) { if (num % 10 != 0) suma += num % 10; num /= 10; }
    return suma;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: "; cin >> numero;

    int suma = SumaDigitos(numero);
    cout << "Suma de digitos sin ceros: " << suma << endl;
    cout << (EsPrimo(suma) ? "La suma es primo." : "La suma no es primo.") << endl;
    return 0;
}
