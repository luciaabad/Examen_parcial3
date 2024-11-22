#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#define MAX_MATERIAS 10

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][50];
    int numMaterias;

} Estudiante;

void mostrarEstudiante(Estudiante *estudiante);


#endif