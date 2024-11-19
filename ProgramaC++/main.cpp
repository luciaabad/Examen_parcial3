//
// Created by Maria Encina on 19/11/2024.
//

#include "estudiante.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

// Function prototypes
void imprimirEstudiante(const Estudiante& estudiante);
void imprimirEstudiante2(const Estudiante* estudiante);
Estudiante copiarEstudiante(const Estudiante& estudiante);
void modificarEstudiante(Estudiante* estudiante);

int main() {
    // Instanciación de una estructura
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Mostrar datos del estudiante
    printf("Estudiante 1:\n");
    imprimirEstudiante(estudiante1);

    // Instanciación usando malloc
    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    if (estudiante2 != NULL) { // Verificar asignación exitosa
        strcpy(estudiante2->nombre, "Ana");
        estudiante2->edad = 22;
        estudiante2->promedio = 9.8;

        printf("\nEstudiante 2 (usando malloc):\n");
        imprimirEstudiante2(estudiante2);

        // Liberar memoria
        free(estudiante2);
    } else {
        printf("Error: no se pudo asignar memoria para estudiante2.\n");
    }

    // Uso de un puntero a estructura
    struct Estudiante *punteroEst = &estudiante1;
    printf("\nEstudiante 1 (usando puntero):\n");
    imprimirEstudiante2(punteroEst);

    // Copia de estructura
    struct Estudiante estudianteCopiado = copiarEstudiante(estudiante1);
    printf("\nEstudiante copiado:\n");
    imprimirEstudiante(estudianteCopiado);

    // Modificación de un estudiante por referencia
    printf("\nModificando la edad de Estudiante 1...\n");
    modificarEstudiante(&estudiante1);
    imprimirEstudiante(estudiante1);

    // Uso de una unión
    union Dato dato;
    dato.i = 10;
    printf("\nUnión:\n");
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

    // Advertencia sobre sobrescritura en uniones
    printf("\nNota: Los valores de la unión se sobrescriben con cada nueva asignación.\n");

    return 0;
}

// Function definitions (dummy implementations for illustration)
void imprimirEstudiante(const Estudiante& estudiante) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante.nombre, estudiante.edad, estudiante.promedio);
}

void imprimirEstudiante2(const Estudiante* estudiante) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
}

Estudiante copiarEstudiante(const Estudiante& estudiante) {
    Estudiante copia;
    strcpy(copia.nombre, estudiante.nombre);
    copia.edad = estudiante.edad;
    copia.promedio = estudiante.promedio;
    return copia;
}

void modificarEstudiante(Estudiante* estudiante) {
    estudiante->edad += 1; // Example modification
}