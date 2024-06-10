#include <iostream>
using namespace std;

int main() {
    int minutos, segundos;
    double tiempoTotal, velocidad;

    cout << "Ingresa el tiempo en minutos y segundos del corredor (0 0 para finalizar):" << endl;

    while (true) {
        cin >> minutos >> segundos;

        if (minutos == 0 && segundos == 0) {
            break;
        }

        tiempoTotal = minutos * 60 + segundos;
        velocidad = 1500.0 / tiempoTotal;

        cout << "Tiempo: " << minutos << " minutos y " << segundos << " segundos" << endl;
        cout << "Velocidad media: " << velocidad << " m/s" << endl;
    }

    return 0;
}