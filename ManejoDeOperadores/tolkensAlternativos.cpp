#include <iostream>
#include <bitset>
#include <iomanip> // Para setfill y setw

int main() {
    // Definir dos valores enteros
    int a = 85;  // 1000101 en binario
    int b = 112; // 11010101 en binario

    // Establecer el ancho de la salida para que todo se alinee correctamente
    std::cout << std::setw(14) << "a = " << std::bitset<8>(a) << std::endl;
    std::cout << std::setw(14) << "b = " << std::bitset<8>(b) << std::endl;

    // Operación OR bitwise usando el token alternativo 'bitor'
    int c = a bitor b;  // Usando 'bitor' en lugar de 'or' (bitwise)
    std::cout << std::setw(14) << "a bitor b = " << std::bitset<8>(c) << std::endl;

    // Operación AND bitwise usando el token alternativo 'bitand'
    c = a bitand b;  // Usando 'bitand' en lugar de 'and' (bitwise)
    std::cout << std::setw(14) << "a bitand b = " << std::bitset<8>(c) << std::endl;

    // Operación XOR bitwise usando el token alternativo 'xor'
    c = a xor b;  // Usando 'xor' en lugar de 'xor' (bitwise)
    std::cout << std::setw(14) << "a xor b = " << std::bitset<8>(c) << std::endl;

    // Operación NOT bitwise usando el token alternativo 'compl'
    c = compl(a);  // Usando 'compl' en lugar de '~'
    std::cout << std::setw(14) << "NOT a = " << std::bitset<8>(c) << std::endl;

    // Diferenciando operaciones lógicas OR y AND
    bool p = true;
    bool q = false;

    // Operación lógica OR usando el token alternativo 'or'
    bool logical_or = p or q;  // Usando 'or' como operador lógico
    std::cout << std::setw(14) << "p or q = " << logical_or << std::endl;

    // Operación lógica AND usando el token alternativo 'and'
    bool logical_and = p and q;  // Usando 'and' como operador lógico
    std::cout << std::setw(14) << "p and q = " << logical_and << std::endl;

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
