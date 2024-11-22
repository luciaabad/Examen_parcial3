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

