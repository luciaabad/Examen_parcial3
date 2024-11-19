//
// Created by Maria Encina on 19/11/2024.
//

#ifndef MAIN_H
#define MAIN_H
#include "estudiante.h"
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <vector>



class main {
public:
    estudiante estudiante("Juan", 20, 15.5);
    estudiante.agregarMateria("Matemáticas");
    estudiante.agregarMateria("Historia");
    estudiante.registrarAsistencia("2024-11-18", "Matemáticas", "Asistió");
    estudiante.registrarAsistencia("2024-11-19", "Historia", "Falta");
    estudiante.mostrarEstudiante();

};



#endif //MAIN_H
