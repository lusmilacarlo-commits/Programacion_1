// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 3

#include <iostream>
using namespace std;

// Función que verifica si un número es capicúa
bool esCapicua(int numero) 
{
    int original = numero;    // Guardamos el número original
    int invertido = 0;        // Aquí construiremos el número al revés

    while (numero > 0) {
        int digito = numero % 10;       // Extraemos el último dígito
        invertido = invertido * 10 + digito; // Lo añadimos al número invertido
        numero = numero / 10;           // Quitamos el último dígito
    }

    return original == invertido; // Si son iguales, es capicúa
}

int main() 
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    // Llamamos a la función y mostramos el resultado
    if (esCapicua(n)) {
        cout << "El numero es capicua" << endl;
    } else {
        cout << "El numero NO es capicua" << endl;
    }

    return 0;
}
