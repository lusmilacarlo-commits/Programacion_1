// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 27/08/2025
//Número de ejercicio: 10

#include <iostream>
using namespace std;

int main()
 {
    int nota;
    cout << "Ingrese la nota del estudiante (0-100): ";
    cin >> nota;

    if(nota < 51) cout << "Reprobado" << endl;
    else if(nota < 60) cout << "Aprobado - Calificacion = C" << endl;
    else if(nota < 70) cout << "Aprobado - Calificacion = C+" << endl;
    else if(nota < 80) cout << "Aprobado - Calificacion = B" << endl;
    else if(nota < 90) cout << "Aprobado - Calificacion = B+" << endl;
    else if(nota < 95) cout << "Aprobado - Calificacion = A" << endl;
    else if(nota == 100) cout << "Aprobado - Calificacion = A+" << endl;
    else cout << "Aprobado" << endl; // Para notas entre 95 y 99

    return 0;
}
