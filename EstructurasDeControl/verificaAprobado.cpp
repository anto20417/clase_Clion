#include <iostream>

using namespace std;

int main() {
    int grade;
    cout << "Ingrese la calificación: ";
    cin >> grade;

    if (grade >= 50) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
        cout << "Debe repetir el curso" << endl;
    }

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
