#include <stdio.h>
#include <string.h>
#include "Estudiante.h"
#include "Materias.h"

// Agrega una materia al estudiante
void agregarMateria(Estudiante *estudiante, const char *materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}

// Muestra las materias de un estudiante
void mostrarMaterias(Estudiante *estudiante) {
    printf("Materias de %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->numMaterias; i++) {
        printf("- %s\n", estudiante->materias[i]);
    }
}