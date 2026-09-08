# Práctica 01 — De problema a programa

## Problema

Una persona cuenta con un presupuesto semanal y durante la semana realiza gastos en diferentes categorías. Se necesita un programa que permita calcular cuánto dinero le queda después de realizar esos gastos.

## Entrada

El programa necesita los siguientes datos:

* Presupuesto inicial.
* Gasto en comida.
* Gasto en transporte.
* Gasto en materiales u otros gastos.

## Proceso

El programa sumará todos los gastos realizados y posteriormente los restará al presupuesto inicial.

La operación será:

**Dinero restante = Presupuesto inicial - (Comida + Transporte + Materiales)**

## Salida

El programa mostrará la cantidad de dinero que queda disponible después de realizar los gastos.

## Algoritmo

```text
INICIO

1. Pedir el presupuesto inicial.
2. Pedir el gasto realizado en comida.
3. Pedir el gasto realizado en transporte.
4. Pedir el gasto realizado en materiales u otros gastos.
5. Sumar los tres gastos.
6. Restar el total de gastos al presupuesto inicial.
7. Mostrar el dinero restante.

FIN
```

## Prueba de escritorio

Para comprobar el algoritmo se utilizarán los siguientes datos:

* Presupuesto inicial: $1000
* Comida: $250
* Transporte: $150
* Materiales: $100

| Paso | Operación           | Resultado |
| ---- | ------------------- | --------: |
| 1    | Presupuesto inicial |     $1000 |
| 2    | Comida              |      $250 |
| 3    | Transporte          |      $150 |
| 4    | Materiales          |      $100 |
| 5    | Sumar gastos        |      $500 |
| 6    | $1000 - $500        |      $500 |
| 7    | Dinero restante     |      $500 |

Por lo tanto, el resultado esperado es que queden **$500**.
