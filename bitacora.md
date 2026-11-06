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