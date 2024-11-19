# Examen_parcial3
https://github.com/luciaabad/Examen_parcial3.git

# Sistema de Gestión de Estudiantes

Este proyecto es una implementación en C++ de un sistema que gestiona estudiantes, materias y asistencias, con manejo de excepciones para situaciones inesperadas.

---

## Tabla de Contenidos
1. [Descripción General](#descripción-general)
2. [Características](#características)
3. [Estructuras y Clases](#estructuras-y-clases)
   - [Estructura `Estudiante`](#estructura-estudiante)
   - [Estructura `Asistencia`](#estructura-asistencia)
4. [Instrucciones de Uso](#instrucciones-de-uso)
5. [Ejemplo de Salida](#ejemplo-de-salida)
6. [Instalación y Ejecución](#instalación-y-ejecución)
7. [Manejo de Excepciones](#manejo-de-excepciones)
8. [Notas](#notas)

---

## Descripción General

El sistema permite:
- Registrar información básica de estudiantes.
- Gestionar materias inscritas por los estudiantes.
- Registrar y visualizar asistencias por materia.
- Manejar errores como materias no registradas o estados inválidos de asistencia.

El código está diseñado con un enfoque modular y usa las características modernas de C++.

---

## Características

1. **Gestión de Materias**:
   - Agregar, eliminar y listar materias inscritas.

2. **Registro de Asistencias**:
   - Registrar la asistencia del estudiante por fecha y materia.
   - Estados permitidos: `Asistió`, `Falta`, `Tardanza`.

3. **Manejo de Excepciones**:
   - Validación de estados de asistencia.
   - Validación de materias inscritas.

---

## Estructuras y Clases

### Estructura `Estudiante`
Contiene:
- **Atributos**:
  - `std::string nombre`: Nombre del estudiante.
  - `int edad`: Edad del estudiante.
  - `float promedio`: Promedio general del estudiante.
  - `std::vector<std::string> materias`: Lista de materias inscritas.
  - `std::vector<Asistencia> asistencias`: Registro de asistencias.

- **Métodos**:
  - `void mostrarEstudiante() const`: Muestra los datos básicos del estudiante y sus materias.
  - `void agregarMateria(const std::string&)`: Agrega una nueva materia.
  - `void eliminarMateria(const std::string&)`: Elimina una materia específica.
  - `void mostrarMaterias() const`: Lista todas las materias inscritas.
  - `void registrarAsistencia(const std::string&, const std::string&, const std::string&)`: Registra una asistencia para una materia específica.
  - `void mostrarAsistencias() const`: Muestra todas las asistencias registradas.

### Estructura `Asistencia`
Contiene:
- **Atributos**:
  - `std::string fecha`: Fecha de la asistencia (formato `YYYY-MM-DD`).
  - `std::string materia`: Materia asociada a la asistencia.
  - `std::string estado`: Estado de la asistencia (`Asistió`, `Falta`, `Tardanza`).

---

## Instrucciones de Uso

### Registro de Materias
1. Usar `agregarMateria` para inscribir materias.
2. Usar `eliminarMateria` para desinscribir materias existentes.
3. Usar `mostrarMaterias` para listar todas las materias.

### Registro de Asistencia
1. Usar `registrarAsistencia` pasando:
   - Una fecha válida.
   - Una materia previamente inscrita.
   - Un estado válido (`Asistió`, `Falta`, `Tardanza`).
2. Usar `mostrarAsistencias` para listar todas las asistencias.

### Mostrar Datos del Estudiante
- Llamar a `mostrarEstudiante` para imprimir toda la información básica.

---

## Ejemplo de Salida

### Código de Ejemplo
```cpp
Estudiante estudiante("Juan Pérez", 20, 9.2);
estudiante.agregarMateria("Matemáticas");
estudiante.registrarAsistencia("2024-11-19", "Matemáticas", "Asistió");
estudiante.mostrarEstudiante();
estudiante.mostrarAsistencias();
