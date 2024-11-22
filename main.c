#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ejercicio1_c/Estudiante.h"
#include "Ejercicio1_c/Materias.h"
#include "Ejercicio1_c/Asistencia.h"

int main() {
    // Crear un estudiante
    Estudiante estudiante;
    strcpy(estudiante.nombre, "Juan Perez");
    estudiante.edad = 20;
    estudiante.promedio = 8.5;

    // Mostrar los datos del estudiante
    mostrarEstudiante(&estudiante);

    // Agregar materias
    agregarMateria(&estudiante, "Matematicas");
    agregarMateria(&estudiante, "Fisica");

    // Mostrar materias
    mostrarMaterias(&estudiante);

    // Registrar asistencia
    Asistencia asistencia1 = {"2024-11-20", "Matematicas", "Asistió"};
    registrarAsistencia(&estudiante, asistencia1);

    Asistencia asistencia2 = {"2024-11-21", "Fisica", "Falta"};
    registrarAsistencia(&estudiante, asistencia2);




    return 0;
}