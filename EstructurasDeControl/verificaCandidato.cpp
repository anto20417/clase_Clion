#include <iostream>

using namespace std;

int main() {
    int edad, calificacion;

    cout << "Ingrese la edad del candidato: ";
    cin >> edad;
    cout << "Ingrese la calificación del candidato: ";
    cin >> calificacion;

    if (edad <= 14 && calificacion >= 50)
        cout << "El candidato ha aprobado el examen." << endl;
    else if (edad <= 16 && calificacion >= 55)
        cout << "El candidato ha aprobado el examen." << endl;
    else if (calificacion >= 60)
        cout << "El candidato ha aprobado el examen." << endl;
    else
        cout << "El candidato ha reprobado el examen." << endl;

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
