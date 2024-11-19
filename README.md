# Examen_parcial3
https://github.com/luciaabad/Examen_parcial3.git


# Preguntas y Respuestas sobre Conceptos Básicos de C y C++

Este documento resuelve una serie de preguntas comunes relacionadas con las diferencias entre C y C++ y algunos conceptos clave de C++.

---

## Pregunta 1: Diferencia principal en la estructura básica de programas en C y C++

**¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?**

### Opciones:
a) C utiliza `cout` y `cin` mientras que C++ utiliza `printf` y `scanf`.  
b) C utiliza `printf` y `scanf` mientras que C++ utiliza `std::cout` y `std::cin`.  
c) No hay ninguna diferencia.  
d) C++ utiliza `printf` y `scanf` mientras que C utiliza `std::cout` y `std::cin`.

### Respuesta Correcta:
**b) C utiliza `printf` y `scanf` mientras que C++ utiliza `std::cout` y `std::cin`.**

### Explicación:
En C, las funciones estándar para la entrada y salida son `printf` y `scanf`, definidas en la biblioteca `<stdio.h>`.  
En C++, se utiliza el flujo de entrada y salida a través de los objetos `std::cout` y `std::cin` en la biblioteca `<iostream>`.  




# ¿Qué es un espacio de nombres en C++?

### Pregunta 2:
**¿Qué es un espacio de nombres en C++?**

### Opciones:
a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.  
b) Una manera de definir variables.  
c) Una función de la biblioteca estándar.  
d) Un tipo de ciclo en C++.

---

### Respuesta Correcta:
**a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.**

---

### Explicación:
Un espacio de nombres (`namespace`) en C++ es una característica que permite organizar el código en un contexto para evitar conflictos de nombres entre diferentes bibliotecas o partes del programa.  
Esto es especialmente útil en proyectos grandes, donde nombres similares podrían aparecer en diferentes módulos.



# ¿Qué es una clase en programación orientada a objetos en C++?

### Pregunta 3:
**En programación orientada a objetos en C++, ¿qué es una clase?**

### Opciones:
a) Una agrupación de funciones.  
b) Un tipo de variable.  
c) Un tipo de dato primitivo.  
d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

---

### Respuesta Correcta:
**d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).**

---

### Explicación:
En C++, una **clase** es una estructura que define las características y el comportamiento de un objeto.  
Es la base de la programación orientada a objetos y permite crear objetos que tienen atributos (variables) y métodos (funciones) que operan sobre esos atributos.

Una clase actúa como una plantilla o molde para crear instancias de objetos con el mismo comportamiento y estado, pero con valores diferentes.






# ¿Qué son los templates en C++?

### Pregunta 4:
**¿Qué son los templates en C++?**

### Opciones:
a) Un tipo especial de clase.  
b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.  
c) Una forma de definir variables.  
d) Una característica específica de C.

---

### Respuesta Correcta:
**b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.**

---

### Explicación:
Los **templates** en C++ son una característica poderosa que permite definir funciones y clases de manera **genérica**. Esto significa que las funciones y clases pueden trabajar con cualquier tipo de datos sin tener que duplicar el código para cada tipo específico. 

Los templates permiten crear soluciones reutilizables y flexibles que se adaptan a diferentes tipos de datos de forma automática
