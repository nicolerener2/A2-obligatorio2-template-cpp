# Bitácora — Obligatorio 2

**Integrantes:** Nicole Rener (289407), Inés García (356150)

> **Instrucciones** (borrar esta sección antes de entregar): agregar una entrada por
> cada día trabajado, indicando la fecha y quién trabajó (un integrante o "En conjunto").
> Registrar el proceso real: ideas exploradas, decisiones y su justificación, partes de
> implementaciones, bugs encontrados y cómo se corrigieron, resultados de pruebas y dudas
> abiertas. Si se usó IA ese día, indicar herramienta, consulta y qué se hizo con la
> respuesta. Una bitácora escrita íntegramente el día de la entrega implica pérdida de puntos.

## AAAA-MM-DD — Nombre
- Ejemplo: Leí la letra del ejercicio 6. Primera idea: ... pero la restricción de
  complejidad pide ..., así que ...

## AAAA-MM-DD — En conjunto
- Ejemplo: Implementamos ... Bug: ... Lo corregimos ...
- Pasan los casos de prueba 1 a 4 del ejercicio 6.

## 2026-11-06 - Nicole Rener

Hice el ejercicio 6 completo. Mi primera idea fue utilizar un max heap para extraer los números de mayor a menor. Si había dos iguales, los colocaría en posiciones simétricas del cartel, y guardaría el mayor número sobrante para el centro. Sin embargo, descarté esta alternativa porque las extracciones daban una complejidad total de O(N log N), superior al O(N) solicitado.

Luego utilicé un arreglo de frecuencias, aprovechando que los números están entre 0 y 1000. Recorrí los valores de mayor a menor para seleccionar todos los pares y guardar el primer valor con cantidad impar como centro. Esta elección permite usar la mayor cantidad de placas y priorizar los números más grandes en los extremos.

Inicialmente intenté guardar los elementos de la primera mitad en una lista enlazada. Al revisar la implementación, observé que get(i) recorre la lista desde el inicio, por lo que consultar todas las posiciones podía llevar un orden temporal mayor. La reemplacé por un arreglo auxiliar, con acceso O(1) por posición.

Faltan implementar algunas pruebas.

## 2026-11-10 (de mañana) - Nicole Rener 
Comencé el ejercicio 7 pensando en guardar los dorsales en un arreglo y comparar cada corredor con los siguientes, pero eso daría O(N²) y la letra exige dividir y conquistar.

Usé como base el ejemplo de encontrar el mínimo de las diapositivas para implementar la división y las llamadas recursivas. Elegí un merge sort modificado porque permite ordenar las mitades y contar las remontadas entre ellas eficientemente.

Creé un array con num + 1 posiciones para representar la llegada desde el índice 1; hay que ajustar los límites para no procesar la posición 0. También usé long long en la función y los contadores porque el resultado puede superar los 32 bits.

Consulté ChatGPT para revisar la estrategia y detectar errores de índices y tipos. Todavía queda implementar la parte clave: contar las remontadas entre mitades, fusionarlas ordenadas y probar la solución.