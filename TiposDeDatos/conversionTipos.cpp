#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    system("chcp 65001");

    int num = 10;          // Variable de tipo int
    float decimal = num;   // Conversión implícita de int a float

    cout << "Número entero: " << num << endl;
    cout << "Número convertido a float: " << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(2) << decimal << endl;
    cout << "Número convertido a float: " << fixed << setprecision(4) << decimal << endl;

    return 0;
}
// Created by anto20417 on 31/01/2025.
//
