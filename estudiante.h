#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Definición de la unión Dato
union Dato {
    int i;
    float f;
    char str[20];
};

// Declaraciones de funciones

// Copia un estudiante
struct Estudiante copiarEstudiante(struct Estudiante est);

// Imprime los datos de un estudiante (por valor)
void imprimirEstudiante(struct Estudiante est);

// Modifica un estudiante (por referencia)
void modificarEstudiante(struct Estudiante *est);

// Imprime los datos de un estudiante (por dirección)
void imprimirEstudiante2(struct Estudiante *est);

#endif // ESTRUCTURA_H
