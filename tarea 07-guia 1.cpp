#include <iostream>
#include <string>

using namespace std;

// Clase base FiguraGeometrica
class FiguraGeometrica {
public:
    virtual double area() const = 0;
    virtual double perimetro() const = 0;
    virtual void mostrarInformacion() const = 0;
};

// Clase derivada Circulo
class Circulo : public FiguraGeometrica {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}

    double area() const override {
        return 3.1416 * radio * radio;
    }
    
    double perimetro() const override {
        return 2 * 3.1416 * radio;
    }

    void mostrarInformacion() const override {
        cout << "Círculo - Radio: " << radio << " - Área: " << area() << " - Perímetro: " << perimetro() << endl;
    }
};

// Clase derivada Rectangulo
class Rectangulo : public FiguraGeometrica {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    double area() const override {
        return base * altura;
    }

    double perimetro() const override {
        return 2 * (base + altura);
    }

    void mostrarInformacion() const override {
        cout << "Rectángulo - Base: " << base << " - Altura: " << altura << " - Área: " << area() << " - Perímetro: " << perimetro() << endl;
    }
};

int main() {
    FiguraGeometrica* figura1 = new Circulo(5.0);
    FiguraGeometrica* figura2 = new Rectangulo(3.0, 4.0);

    figura1->mostrarInformacion();
    figura2->mostrarInformacion();

    delete figura1;
    delete figura2;

    return 0;
}
