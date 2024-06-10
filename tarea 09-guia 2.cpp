#include <iostream>
using namespace std;

int sumaDigitos(int numero) {
    int suma = 0;
    
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10; 
    }
    
    return suma;
}

int main() {
    int numero;
    
    cout << "Ingresa un número: ";
    cin >> numero;
    
    int resultado = sumaDigitos(numero);
    
    cout << "La suma de los dígitos es: " << resultado << endl;
    
    return 0;
}