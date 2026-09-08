```cpp
#include <iostream>
using namespace std;

int main() {
    double presupuesto, comida, transporte, materiales;
    double totalGastos, dineroRestante;

    cout << "CALCULO DE PRESUPUESTO SEMANAL" << endl;

    cout << "Ingresa tu presupuesto inicial: $";
    cin >> presupuesto;

    cout << "Ingresa tu gasto en comida: $";
    cin >> comida;

    cout << "Ingresa tu gasto en transporte: $";
    cin >> transporte;

    cout << "Ingresa tu gasto en materiales u otros gastos: $";
    cin >> materiales;

    totalGastos = comida + transporte + materiales;
    dineroRestante = presupuesto - totalGastos;

    cout << "\nTotal de gastos: $" << totalGastos << endl;
    cout << "Dinero restante: $" << dineroRestante << endl;

    return 0;
}
```
