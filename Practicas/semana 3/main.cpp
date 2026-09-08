#include <iostream>
#include <string>

using namespace std;

int main() {

    int opcion;

    cout << "======================================" << endl;
    cout << "   SISTEMA DE ENTRENAMIENTO CICLISTA" << endl;
    cout << "======================================" << endl;

    cout << "1. Registrar entrenamiento" << endl;
    cout << "2. Clasificar entrenamiento" << endl;
    cout << "3. Revisar meta de distancia" << endl;
    cout << "4. Validar edad del ciclista" << endl;
    cout << "5. Salir" << endl;

    cout << "Selecciona una opcion: ";
    cin >> opcion;

    switch (opcion) {

        case 1: {
            string nombre;
            int vueltas;
            double longitudVuelta;
            double distanciaTotal;

            cout << endl;
            cout << "--- Registrar entrenamiento ---" << endl;

            cout << "Nombre del ciclista: ";
            cin >> nombre;

            cout << "Numero de vueltas: ";
            cin >> vueltas;

            cout << "Longitud de una vuelta en metros: ";
            cin >> longitudVuelta;

            if (vueltas >= 0 && longitudVuelta > 0) {

                distanciaTotal = vueltas * longitudVuelta;

                cout << endl;
                cout << "Ciclista: " << nombre << endl;
                cout << "Distancia total: "
                     << distanciaTotal << " metros" << endl;

            } else {
                cout << "Datos no validos." << endl;
                cout << "Las vueltas no pueden ser negativas "
                     << "y la longitud debe ser mayor que cero." << endl;
            }

            break;
        }

        case 2: {
            double distancia;

            cout << endl;
            cout << "--- Clasificar entrenamiento ---" << endl;
            cout << "Ingresa la distancia recorrida en km: ";
            cin >> distancia;

            if (distancia >= 50) {
                cout << "Entrenamiento excelente." << endl;
            }
            else if (distancia >= 20) {
                cout << "Entrenamiento bueno." << endl;
            }
            else {
                cout << "Entrenamiento inicial." << endl;
            }

            break;
        }

        case 3: {
            double distancia;
            double meta;

            cout << endl;
            cout << "--- Revisar meta ---" << endl;

            cout << "Distancia recorrida en km: ";
            cin >> distancia;

            cout << "Meta de distancia en km: ";
            cin >> meta;

            if (distancia >= 0 && meta > 0) {

                if (distancia >= meta) {
                    cout << "Meta cumplida." << endl;
                } else {
                    cout << "Meta no cumplida." << endl;
                }

            } else {
                cout << "Los datos introducidos no son validos." << endl;
            }

            break;
        }

        case 4: {
            int edad;

            cout << endl;
            cout << "--- Validar edad ---" << endl;
            cout << "Ingresa la edad del ciclista: ";
            cin >> edad;

            if (edad >= 0 && edad <= 120) {

                if (edad >= 18 || edad == 17) {
                    cout << "Edad valida para el registro." << endl;
                } else {
                    cout << "Edad valida, pero es menor de edad." << endl;
                }

            } else {
                cout << "Edad no valida." << endl;
            }

            break;
        }

        case 5:
            cout << endl;
            cout << "Programa finalizado." << endl;
            break;

        default:
            cout << endl;
            cout << "Opcion no valida." << endl;
            cout << "Selecciona una opcion del 1 al 5." << endl;
            break;
    }

    return 0;
}
