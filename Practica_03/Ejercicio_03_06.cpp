// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 10/09/2025
//Número de ejercicio: 6

#include <iostream>
using namespace std;

// Función que devuelve la cantidad de días de un mes dado un año
int diasDelMes(int año, int mes) 
{
    if (mes == 2) {
        // Verificamos si el año es bisiesto dentro de la misma función
        if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
            return 29;
        else
            return 28;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } 
    else if (mes >= 1 && mes <= 12) {
        return 31;
    } 
    else {
        return -1; // mes inválido
    }
}

int main() 
{
    int año, mes;
    cout << "Ingrese un año: ";
    cin >> año;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;

    int dias = diasDelMes(año, mes);

    if (dias == -1)
        cout << "Mes inválido." << endl;
    else
        cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;

    return 0;
}

