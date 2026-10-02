# Práctica 05 — Control de Flujo e Integración de Sistemas

## 1. Datos del estudiante
* **Materia:** Fundamentos de Programación
* **Semana:** 05

## 2. Análisis del Problema
* **Objetivo:** Construir un sistema interactivo basado en menú en consola que permita registrar ventas, consultar resúmenes, desplegar estadísticas completas, reiniciar datos y salir, manteniendo el control de flujo sin cerrar el programa hasta que el usuario lo decida.
* **Entradas:** Opción del menú (`int`), importe de cada venta (`double`).
* **Salidas:** Resumen de acumulados, promedios, venta máxima, clasificaciones (< $100 y >= $100) y mensajes de error/confirmación.
* **Control de Flujo:** Estructura `do-while` para la repetición continua del menú y `switch` con validaciones `if` para la toma de decisiones.

## 3. Instrucciones de Compilación y Ejecución en macOS
Para compilar y ejecutar de forma local mediante la Terminal de macOS (`clang++` / `g++`):

```bash
g++ main.cpp -o programa
./programa
