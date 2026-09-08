# Práctica 01 — Evidencia

## Objetivo de la práctica

El objetivo de esta práctica fue aprender a transformar un problema cotidiano en una solución programada, siguiendo un proceso de análisis, diseño del algoritmo, programación, compilación, ejecución y pruebas.

## Investigación

### 1. ¿Qué es un algoritmo?

Un algoritmo es una serie de pasos ordenados que permiten resolver un problema o realizar una actividad. Los pasos deben seguir una secuencia lógica para llegar a un resultado.

### 2. ¿Qué características debe tener?

Debe ser claro, ordenado, preciso y tener pasos que puedan seguirse para obtener una solución.

### 3. ¿Qué es un problema de programación?

Es una situación que necesita ser resuelta mediante un conjunto de instrucciones que una computadora pueda ejecutar.

### 4. ¿Qué significa entrada?

Es la información que el usuario proporciona al programa para que pueda realizar los cálculos o acciones necesarias.

### 5. ¿Qué significa proceso?

Es el conjunto de operaciones que realiza el programa con los datos de entrada para obtener un resultado.

### 6. ¿Qué significa salida?

Es la información o resultado que el programa muestra después de realizar el proceso.

### 7. ¿Qué es C++?

C++ es un lenguaje de programación que permite crear programas mediante instrucciones que posteriormente son procesadas por una computadora.

### 8. ¿Qué es un compilador?

Es una herramienta que transforma el código escrito por el programador en instrucciones que la computadora puede ejecutar.

### 9. ¿Qué diferencia existe entre código fuente y programa ejecutable?

El código fuente es el conjunto de instrucciones que escribe el programador. El programa ejecutable es el resultado de procesar ese código para que pueda ser ejecutado por la computadora.

### 10. ¿Qué es una variable?

Una variable es un espacio donde el programa puede almacenar un dato que puede utilizar durante su ejecución.

### 11. ¿Qué es un tipo de dato?

Es la forma en que se define qué clase de información puede almacenar una variable, por ejemplo números enteros o números decimales.

### 12. ¿Qué son los operadores?

Son símbolos que permiten realizar operaciones con los datos, como sumar, restar, multiplicar o dividir.

### 13. ¿Qué es un error de compilación?

Es un problema en el código que impide que el programa pueda ser compilado correctamente.

### 14. ¿Qué es un error lógico?

Es un error en el que el programa puede ejecutarse, pero produce un resultado incorrecto porque la lógica utilizada no es la adecuada.

### 15. ¿Qué significa depurar?

Depurar significa buscar, identificar y corregir errores en un programa.

## Descripción de la solución

La solución consiste en solicitar al usuario un presupuesto inicial y tres tipos de gastos. Después el programa suma los gastos y resta el resultado al presupuesto inicial para conocer cuánto dinero queda disponible.

## Pruebas realizadas

| Prueba               | Datos utilizados        | Resultado esperado | Resultado obtenido | ¿Coinciden? |
| -------------------- | ----------------------- | -----------------: | -----------------: | ----------- |
| 1. Caso normal       | $1000, $250, $150, $100 |               $500 |               $500 | Sí          |
| 2. Caso diferente    | $2000, $300, $200, $150 |              $1350 |              $1350 | Sí          |
| 3. Caso límite       | $500, $500, $0, $0      |                 $0 |                 $0 | Sí          |
| 4. Caso problemático | $500, $300, $250, $100  |              -$150 |              -$150 | Sí          |

## Error provocado y solución

### Error

Se eliminó intencionalmente el punto y coma de una instrucción del programa.

### Mensaje

El compilador indicó que existía un error de sintaxis relacionado con la instrucción.

### Investigación

El punto y coma se utiliza para indicar el final de una instrucción en C++. Al eliminarlo, el compilador no puede interpretar correctamente la estructura del programa.

### Solución

Se agregó nuevamente el punto y coma al final de la instrucción.

### Resultado

Después de corregir el error, el programa pudo compilarse y ejecutarse correctamente.

### Aprendizaje

Aprendí que los pequeños detalles de la sintaxis son importantes para que un programa pueda compilarse.

## Problemas encontrados

Uno de los problemas encontrados fue comprender la diferencia entre diseñar primero el algoritmo y comenzar directamente con el código. También fue necesario revisar la sintaxis de C++ para evitar errores durante la compilación.

## Bitácora de aprendizaje

### Problema

Al realizar el programa fue necesario comprobar que las operaciones y las variables estuvieran correctamente relacionadas.

### Causa posible

El problema podía estar en la operación utilizada o en la forma de escribir alguna instrucción.

### Investigación

Consulté información sobre variables, tipos de datos, operadores y sintaxis básica de C++.

### Prueba

Realicé diferentes ejecuciones utilizando cantidades distintas para comprobar el resultado.

### Resultado

El programa produjo los resultados esperados en las pruebas realizadas.

### Aprendizaje

Aprendí que probar un programa con diferentes datos permite encontrar errores que pueden no aparecer en una primera ejecución.

## Reflexión final

Esta práctica me permitió comprender que programar no consiste solamente en escribir código. Primero es necesario entender el problema, identificar los datos que se necesitan, establecer un proceso y determinar el resultado que se espera. Después se puede convertir el algoritmo en código y comprobar su funcionamiento mediante pruebas. También comprendí que los errores forman parte del proceso de programación y que es necesario aprender a identificarlos y corregirlos.

El proceso que seguí fue:

**Analizar → diseñar → programar → probar → corregir → explicar.**
