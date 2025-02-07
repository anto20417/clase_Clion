#include <iostream>

int main() {
    int valor1, valor2; // Manteniendo el tipo int
    std::cout << "Introduce dos valores enteros: " << std::endl;
    std::cin >> valor1 >> valor2;
    std::cout << "La suma de " << valor1 << " y " << valor2 << " es " << (valor1 + valor2) << std::endl;
    return 0;
}