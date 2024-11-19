//
// Created by Lucia Abad on 19/11/24.
//
#include <stdio.h>
#include "Ejercicio1_c/Estudiante.h"
#include "Ejercicio1_c/Estudiante.c"

int main() {
    // Creaamos una variable de tipo Estudiante e inicializarla
    struct Estudiante estudiante1 = {"Juan Pérez", 20, 8.75};

    // Llamar a la función mostrarEstudiante para mostrar los datos del estudiante
    mostrarEstudiante(estudiante1);

    return 0;

}