//
// Created by Maria Encina on 19/11/2024.
//

#include "main.h"
// Función de demostración
int main() {
    try {
        // Crear estudiante
        Estudiante estudiante("Juan Pérez", 20, 8.7);

        // Agregar materias
        estudiante.agregarMateria("Matemáticas");
        estudiante.agregarMateria("Historia");

        // Registrar asistencia
        estudiante.registrarAsistencia("2024-11-18", "Matemáticas", "Asistió");
        estudiante.registrarAsistencia("2024-11-19", "Historia", "Falta");

        // Mostrar datos
        estudiante.mostrarEstudiante();

        // Eliminar materia
        estudiante.eliminarMateria("Historia");

        // Intentar agregar una materia duplicada
        estudiante.agregarMateria("Matemáticas"); // Esto lanzará una excepción

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
