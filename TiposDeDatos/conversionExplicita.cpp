#include <iostream>
using namespace std;

int main() {
    float a = 9.23; // Variable de tipo float
    int b = 3;      // Variable de tipo int

    // Estilo de C
    int c = (int)a;      // Convertir float a int
    float d = (float)b;  // Convertir int a float

    // Estilo C++ usando static_cast
    int e = static_cast<int>(a);   // Convertir float a int
    float f = static_cast<float>(b); // Convertir int a float

    // Mostrar resultados
    cout << "Estilo C: " << endl;
    cout << "c = " << c << " (float a int usando (int))" << endl;
    cout << "d = " << d << " (int a float usando (float))" << endl;

    cout << "\nEstilo C++: " << endl;
    cout << "e = " << e << " (float a int usando static_cast<int>)" << endl;
    cout << "f = " << f << " (int a float usando static_cast<float>)" << endl;

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
