# Justificación de órdenes — Obligatorio 2

> **Instrucciones** (borrar esta sección antes de entregar): para cada ejercicio cuya
> letra plantea restricciones de órdenes (tiempo o espacio), justificar brevemente por
> qué la solución cumple, indicando qué estructuras de datos o algoritmos se utilizaron.
> Ejemplo: "La letra exige inserción en O(log n); usamos un min-heap sobre arreglo,
> donde flotar/hundir recorren a lo sumo la altura del árbol". Si un ejercicio no tiene
> restricciones de órdenes, indicarlo.

## Ejercicio 6
- Tiempo O(N): utilizamos un arreglo de frecuencias para contar las N placas y recorremos sus 1001 posiciones en orden descendente. Aunque hay un while dentro del recorrido, en total procesa como máximo N/2 pares. Construir e imprimir el cartel también requiere O(N), por lo que el tiempo total es O(N).
- Espacio O(N): usamos un arreglo auxiliar para la primera mitad y otro para la respuesta, ambos de tamaño proporcional a N. El arreglo de frecuencias ocupa espacio constante.
- Estrategia greedy: usamos todos los pares para maximizar la cantidad de placas, colocando los valores más granddes en los extremos y el mayor sobrante en el centro para obtener el cartel lexicográficamente mayor.

## Ejercicio 7
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 8
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 9
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 10
- Sin restricciones de órdenes. / Justificación: ...

