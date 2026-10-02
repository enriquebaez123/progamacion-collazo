#include <iostream>

using namespace std;

int main() {
    float venta = 0.0;
    float totalVendido = 0.0;
    float ventaMayor = 0.0;
    
    int totalVentasValidas = 0;
    int ventasMenores100 = 0;
    int ventasMayoresIgual100 = 0;

    cout << "========================================" << endl;
    cout << "   SISTEMA DE CONTROL DE VENTAS         " << endl;
    cout << "========================================" << endl;
    cout << "Instrucciones: Ingrese el importe de cada venta." << endl;
    cout << "Para terminar el registro, ingrese 0." << endl << endl;

    while (true) {
        cout << "Ingrese importe de venta ($): ";
        cin >> venta;

        // Condicion de salida
        if (venta == 0) {
            break; // Termina la captura de datos
        }

        // Validacion de datos de entrada
        if (venta < 0) {
            cout << " [!] Error: El importe no puede ser negativo. Intente de nuevo." << endl;
            continue; // Salta a la siguiente iteracion sin acumular ni contar
        }

        // Procesamiento de venta valida
        totalVentasValidas++;
        totalVendido += venta;

        // Busqueda de venta de mayor importe
        if (totalVentasValidas == 1 || venta > ventaMayor) {
            ventaMayor = venta;
        }

        // Clasificacion de la venta
        if (venta < 100.0) {
            ventasMenores100++;
        } else {
            ventasMayoresIgual100++;
        }
    }

    // Reporte Final y Evitacion de division entre cero
    cout << "\n========================================" << endl;
    cout << "         RESUMEN DE LA JORNADA          " << endl;
    cout << "========================================" << endl;

    if (totalVentasValidas > 0) {
        float promedio = totalVendido / totalVentasValidas;

        cout << "Total de ventas registradas : " << totalVentasValidas << endl;
        cout << "Monto total vendido         : $" << totalVendido << endl;
        cout << "Promedio por venta          : $" << promedio << endl;
        cout << "Venta de mayor importe      : $" << ventaMayor << endl;
        cout << "Ventas menores a $100       : " << ventasMenores100 << endl;
        cout << "Ventas de $100 o mas        : " << ventasMayoresIgual100 << endl;
    } else {
        cout << "No se registraron ventas validas durante la jornada." << endl;
    }

    cout << "========================================" << endl;

    return 0;
