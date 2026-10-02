#include <iostream>

using namespace std;

int main() {
    int opcion = 0;

    // Variables de control y acumuladores
    int cantidadVentas = 0;
    double totalVendido = 0.0;
    double mayorVenta = 0.0;

    int ventasMenores100 = 0;
    int ventasMayoresIgual100 = 0;

    do {
        cout << "\n========================================" << endl;
        cout << "        TIENDA - CONTROL DE VENTAS    " << endl;
        cout << "========================================" << endl;
        cout << " 1. Registrar venta" << endl;
        cout << " 2. Consultar resumen" << endl;
        cout << " 3. Mostrar estadísticas" << endl;
        cout << " 4. Reiniciar jornada" << endl;
        cout << " 5. Salir" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opción (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double venta = 0.0;
                cout << "\n--- REGISTRAR VENTA ---" << endl;
                cout << "Ingrese el importe de la venta ($): ";
                cin >> venta;

                // Validación de entrada
                if (venta < 0) {
                    cout << "Error: La venta no puede ser negativa." << endl;
                } else {
                    cantidadVentas++;
                    totalVendido += venta;

                    // Determinación de venta mayor
                    if (cantidadVentas == 1 || venta > mayorVenta) {
                        mayorVenta = venta;
                    }

                    // Clasificación de la venta
                    if (venta < 100.0) {
                        ventasMenores100++;
                    } else {
                        ventasMayoresIgual100++;
                    }

                    cout << "Venta registrada exitosamente." << endl;
                }
                break;
            }
            case 2:
                cout << "\n--- RESUMEN RÁPIDO ---" << endl;
                if (cantidadVentas > 0) {
                    cout << "Ventas registradas : " << cantidadVentas << endl;
                    cout << "Total vendido       : $" << totalVendido << endl;
                } else {
                    cout << "Todavía no existen ventas registradas." << endl;
                }
                break;

            case 3:
                cout << "\n--- ESTADÍSTICAS COMPLETAS ---" << endl;
                if (cantidadVentas > 0) {
                    double promedio = totalVendido / cantidadVentas;
                    cout << "Cantidad de ventas : " << cantidadVentas << endl;
                    cout << "Total vendido       : $" << totalVendido << endl;
                    cout << "Promedio por venta  : $" << promedio << endl;
                    cout << "Venta mayor         : $" << mayorVenta << endl;
                    cout << "Menores a $100      : " << ventasMenores100 << endl;
                    cout << "De $100 o más       : " << ventasMayoresIgual100 << endl;
                } else {
                    cout << "Todavía no existen ventas registradas." << endl;
                }
                break;

            case 4: {
                int confirmacion = 0;
                cout << "\n¿Seguro que deseas reiniciar los datos de la jornada?" << endl;
                cout << "1. Sí, reiniciar\n2. Cancelar\nOpción: ";
                cin >> confirmacion;

                if (confirmacion == 1) {
                    cantidadVentas = 0;
                    totalVendido = 0.0;
                    mayorVenta = 0.0;
                    ventasMenores100 = 0;
                    ventasMayoresIgual100 = 0;
                    cout << "Datos reiniciados correctamente." << endl;
                } else {
                    cout << "Operación cancelada." << endl;
                }
                break;
            }
            case 5:
                cout << "\n Gracias por utilizar el sistema. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "\n Opción inválida. Por favor selecciona una opción del 1 al 5." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}
