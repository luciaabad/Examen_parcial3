//
// Created by Lucia Abad on 19/11/24.
//

#ifndef ASISTENCIA_H
#define ASISTENCIA_H

typedef struct {
    char fecha[11];  // "YYYY-MM-DD"
    char materia[50];
    char estado[20]; // Asistió, Falta, Tardanza
} Asistencia;

void registrarAsistencia(Estudiante *estudiante, Asistencia asistencia);
void mostrarAsistencia(Estudiante *estudiante);


#endif //ASISTENCIA_H
