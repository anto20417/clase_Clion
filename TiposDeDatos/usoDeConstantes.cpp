#include <iostream>
#include <iomanip> // Para controlar la salida de decimales
using namespace std;

int main() {

    const double PI_VALUE = 3.14159;  // Definimos PI como constante siguiendo las buenas prácticas

    double radio, area, circunferencia;

    // Entrada del radio con validación básica
    cout << "Introduce el radio del círculo (valor positivo): ";
    cin >> radio;

    if (radio <= 0) {  // Validamos que el radio sea positivo
        cout << "El radio debe ser un valor positivo. Inténtalo de nuevo." << endl;
        return 1; // Terminamos el programa con un código de error
    }

    // Cálculos usando la constante PI_VALUE
    area = PI_VALUE * radio * radio;
    circunferencia = PI_VALUE * 2 * radio;

    // Formateamos la salida para mostrar dos decimales
    cout << fixed << setprecision(2);
    cout << "El área del círculo con radio " << radio << " es " << area << endl;
    cout << "La circunferencia es " << circunferencia << endl;

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
