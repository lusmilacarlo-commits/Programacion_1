// Materia: Programacion I, Paralelo 4
// Autor: Lusmila Abigail Carlo Quispe
// Carnet:10907331 L.P.
//Carrera del estudiante: Ingenieria Mecatrónica
// Fecha de creación: 14/09/2025
//Número de ejercicio: 5

#include <iostream>
using namespace std;

// Calcula salario considerando bonificación en horas extra
double CalcularSalario(int horas, double tarifa) 
{
    return (horas <= 8) ? horas * tarifa 
                        : (8 * tarifa) + (horas - 8) * tarifa * 1.5;
}

int main() 
{
    int horas; double tarifa;
    cout << "Ingrese horas trabajadas: "; cin >> horas;
    cout << "Ingrese tarifa por hora: "; cin >> tarifa;

    cout << "Salario total: " << CalcularSalario(horas, tarifa) << endl;
    return 0;
}
