// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 7

#include <iostream>
using namespace std;

int main()
 {
    char letra;
    cout << "Ingrese un caracter: ";
    cin >> letra;

    if((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||
           letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
            cout << "Es una vocal" << endl;
        else
            cout << "Es consonante" << endl;
    } else {
        cout << "Es un caracter especial" << endl;
    }

    return 0;
}