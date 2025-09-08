// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 08/09/2025
//Número de ejercicio: 4

#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

using namespace std;

int main() 
{
    // Semilla para que el número aleatorio cambie en cada ejecución
    srand(time(0));

    // Generamos el número aleatorio entre 0 y 50
    int secreto = rand() % 51;  

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    int intento, num;
    int min = 0, max = 50;  // Límites que se van ajustando

    for (intento = 1; intento <= 5; intento++) {
        cout << "Intento " << intento << "\n? ";
        cin >> num;

        if (num == secreto) {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0; // Salimos del programa si adivina
        } 
        else if (num < secreto) {
            min = num; // Ajustamos el límite inferior
            cout << "El numero esta entre " << min << " y " << max << endl;
        } 
        else {
            max = num; // Ajustamos el límite superior
            cout << "El numero esta entre " << min << " y " << max << endl;
        }
    }

    cout << "Lo siento, no adivinaste en 5 intentos. El numero era " << secreto << endl;

    return 0;
}
