#include <iostream>
using namespace std;

int main() {
    double lado, area;

    cout << "Ingresa el lado del cuadrado: ";
    cin >> lado;

    area = lado * lado;

    cout << "El área del cuadrado con lado " << lado << " es: " << area << endl;

    return 0;
}