#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    int vueltas;
    double longitudVuelta;
    double distanciaTotal;

    cout << "=== Calculadora de distancia en pista ===" << endl;

    cout << "Ingresa el nombre del ciclista: ";
    cin >> nombre;

    cout << "Ingresa el numero de vueltas: ";
    cin >> vueltas;

    cout << "Ingresa la longitud de una vuelta en metros: ";
    cin >> longitudVuelta;

    distanciaTotal = vueltas * longitudVuelta;

    cout << endl;
    cout << "Ciclista: " << nombre << endl;
    cout << "Distancia total recorrida: "
         << distanciaTotal << " metros" << endl;

    return 0;
}
