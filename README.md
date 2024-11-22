# Examen_parcial3
https://github.com/luciaabad/Examen_parcial3.git
# Gestión de Estudiantes

Este proyecto implementa un sistema en C++ para gestionar la información de estudiantes, sus materias inscritas, y su registro de asistencias. Además, incluye manejo de excepciones para situaciones inesperadas.

## Características

### 1. Estructura `Asistencia`
La estructura `Asistencia` gestiona el registro de asistencias de los estudiantes. Contiene los siguientes campos:
- **Fecha**: Fecha de la asistencia (formato `YYYY-MM-DD`).
- **Materia**: Nombre de la materia asociada.
- **Estado**: El estado de la asistencia, que puede ser:
  - `Asistió`
  - `Falta`
  - `Tardanza`

#### Métodos:
- `mostrarAsistencia()`: Muestra la información de la asistencia en consola.

### 2. Clase `Estudiante`
La clase `Estudiante` gestiona la información básica de un estudiante, así como su lista de materias inscritas y su historial de asistencias.

#### Atributos:
- `nombre`: Nombre del estudiante.
- `edad`: Edad del estudiante.
- `promedio`: Promedio del estudiante.
- `materias`: Vector que almacena las materias en las que el estudiante está inscrito.
- `asistencias`: Vector que almacena los registros de asistencia.

#### Métodos:
- **Constructor**:
  - Inicializa los atributos del estudiante (`nombre`, `edad`, `promedio`).
- **Gestión de información básica**:
  - `mostrarEstudiante()`: Muestra toda la información del estudiante, incluyendo materias inscritas y asistencias.
- **Gestión de materias**:
  - `agregarMateria(const std::string&)`: Agrega una materia al vector de materias. Lanza una excepción si la materia ya está inscrita.
  - `eliminarMateria(const std::string&)`: Elimina una materia. Lanza una excepción si la materia no está inscrita.
  - `mostrarMaterias()`: Muestra todas las materias inscritas.
- **Gestión de asistencias**:
  - `registrarAsistencia(const std::string&, const std::string&, const std::string&)`: Registra una asistencia para una materia. Verifica que la materia esté inscrita y que el estado de asistencia sea válido.
  - `mostrarAsistencias()`: Muestra todas las asistencias registradas.

### 3. Manejo de Excepciones
El programa incluye manejo de excepciones para los siguientes casos:
- Intentar agregar una materia que ya está inscrita.
- Intentar eliminar una materia no registrada.
- Intentar registrar una asistencia para una materia no inscrita.
- Proporcionar un estado de asistencia inválido.

Las excepciones son capturadas y mostradas al usuario.

### 4. Ejemplo de Uso
El programa incluye un ejemplo de uso en la función `main()`:
1. Crea un estudiante con nombre, edad y promedio.
2. Agrega materias.
3. Registra asistencias.
4. Muestra la información completa del estudiante.
5. Maneja excepciones, como intentar agregar materias duplicadas.

=======

# Preguntas y Respuestas sobre Conceptos Básicos de C y C++




# Pregunta 1
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

---

# Pregunta 2:
**¿Qué es un espacio de nombres en C++?**

### Opciones:
a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.  
b) Una manera de definir variables.  
c) Una función de la biblioteca estándar.  
d) Un tipo de ciclo en C++.

### Respuesta Correcta:
**a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.**


### Explicación:
Un espacio de nombres (`namespace`) en C++ es una característica que permite organizar el código en un contexto para evitar conflictos de nombres entre diferentes bibliotecas o partes del programa.  
Esto es especialmente útil en proyectos grandes, donde nombres similares podrían aparecer en diferentes módulos.

---

# Pregunta 3:
**En programación orientada a objetos en C++, ¿qué es una clase?**

### Opciones:
a) Una agrupación de funciones.  
b) Un tipo de variable.  
c) Un tipo de dato primitivo.  
d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

### Respuesta Correcta:
**d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).**


### Explicación:
En C++, una **clase** es una estructura que define las características y el comportamiento de un objeto.  
Es la base de la programación orientada a objetos y permite crear objetos que tienen atributos (variables) y métodos (funciones) que operan sobre esos atributos.

Una clase actúa como una plantilla o molde para crear instancias de objetos con el mismo comportamiento y estado, pero con valores diferentes.

---

# Pregunta 4:
**¿Qué son los templates en C++?**

### Opciones:
a) Un tipo especial de clase.  
b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.  
c) Una forma de definir variables.  
d) Una característica específica de C.


### Respuesta Correcta:
**b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.**


### Explicación:
Los **templates** en C++ son una característica poderosa que permite definir funciones y clases de manera **genérica**. Esto significa que las funciones y clases pueden trabajar con cualquier tipo de datos sin tener que duplicar el código para cada tipo específico. 

Los templates permiten crear soluciones reutilizables y flexibles que se adaptan a diferentes tipos de datos de forma automática
>>>>>>> main
