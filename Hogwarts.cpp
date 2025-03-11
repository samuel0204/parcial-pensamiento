#include <iostream>
using namespace std;

class Escoba {
protected:
    int velocidad;
    int limite;

public:
    Escoba(int v, int l) : velocidad(v), limite(l) {}
    virtual void verificarVelocidad() = 0; 
};

class RegulacionEscoba : public Escoba {
public:
    RegulacionEscoba(int v, int l) : Escoba(v, l) {}

    void verificarVelocidad() override {
        if (velocidad <= limite) {
            cout << "Velocidad permitida. El estudiante podrá continuar." << endl;
        } else if (velocidad <= limite + 20000) {
            cout << "Advertencia. Madame Hooch dará una amonestación verbal." << endl;
        } else {
            cout << "Multa. Se descontarán puntos de la casa del estudiante." << endl;
        }
    }
};

int main() {
    int V, L;
    cout << "Ingrese la velocidad de la escoba: ";
    cin >> V;
    cout << "Ingrese el límite de velocidad: ";
    cin >> L;

    if (V < 0 || L < 0) {
        cout << "Error: La velocidad y el límite deben ser números positivos." << endl;
        return 1; 
    }

    RegulacionEscoba escoba(V, L);
    escoba.verificarVelocidad();

    return 0;
}