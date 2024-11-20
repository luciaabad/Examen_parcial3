#include <stdio.h>
#include <string.h>
#include "Estudiante.h"

// Muestra la información básica del estudiante
void mostrarEstudiante(Estudiante *estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}
