//
// Created by Lucia Abad on 19/11/24.
//

#include "Estudiante.h"
#include <stdio.h>

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;


};
// Desarrollamos las funcion que muestra los campos de estudiantes
void mostrarEstudiante(struct Estudiante* est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
}


