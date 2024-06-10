#include <iostream>
#include <string>

using namespace std;

class Vehiculo {
public:
    string chasis;
    string motor;
    string transmision;
    string sistemaDireccion;
    string sistemaFrenos;
    string suspension;
    string ruedasNeumaticos;
    string sistemaElectrico;
    string carroceria;
};

int main() {
    Vehiculo vehiculo;
    vehiculo.chasis = "Estructura principal del vehículo";
    vehiculo.motor = "Componente que proporciona potencia al vehículo";
    vehiculo.transmision = "Transfiere la potencia del motor a las ruedas";
    vehiculo.sistemaDireccion = "Controla la dirección del vehículo";
    vehiculo.sistemaFrenos = "Detiene o reduce la velocidad del vehículo";
    vehiculo.suspension = "Mantiene estabilidad y absorbe impactos";
    vehiculo.ruedasNeumaticos = "Proporcionan tracción y movimiento";
    vehiculo.sistemaElectrico = "Incluye batería, luces, sistema de audio, etc.";
    vehiculo.carroceria = "Parte exterior que protege y cubre el vehículo";

    // Mostrar las partes del vehículo
    cout << "Partes principales de un vehículo:" << endl;
    cout << "Chasis: " << vehiculo.chasis << endl;
    cout << "Motor: " << vehiculo.motor << endl;
    cout << "Transmisión: " << vehiculo.transmision << endl;
    cout << "Sistema de dirección: " << vehiculo.sistemaDireccion << endl;
    cout << "Sistema de frenos: " << vehiculo.sistemaFrenos << endl;
    cout << "Suspensión: " << vehiculo.suspension << endl;
    cout << "Ruedas y neumáticos: " << vehiculo.ruedasNeumaticos << endl;
    cout << "Sistema eléctrico: " << vehiculo.sistemaElectrico << endl;
    cout << "Carrocería: " << vehiculo.carroceria << endl;

    return 0;
}
