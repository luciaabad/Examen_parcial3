#include <stdio.h>
#include <string.h>
#include "Estudiante.h"
#include "Asistencia.h"

// Registra una asistencia para el estudiante
void registrarAsistencia(Estudiante *estudiante, Asistencia asistencia) {
    printf("Asistencia registrada para %s el %s en %s: %s\n",
           estudiante->nombre, asistencia.fecha, asistencia.materia, asistencia.estado);
}

// Muestra la asistencia del estudiante (en este caso solo un registro)
void mostrarAsistencia(Estudiante *estudiante) {
    printf("Asistencia de %s:\n", estudiante->nombre);
    // En este ejemplo, solo mostramos un registro. Podrías modificar esto para manejar múltiples registros.
}
