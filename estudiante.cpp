//
// Created by Maria Encina on 19/11/2024.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Include algorithm for std::find
//hola
//Excepciones
class FechaInvalidaException : public std::runtime_error {
public:
    explicit FechaInvalidaException(const std::string& mensaje)
        : std::runtime_error("Error en la fecha: " + mensaje) {}
};

class MateriaNoEncontradaException : public std::runtime_error {
public:
    explicit MateriaNoEncontradaException(const std::string& mensaje)
        : std::runtime_error("Error en la materia: " + mensaje) {}
};

//FIN EXCEPCIONES

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> registrosAsistencia;
};


void mostrarEstudiante(const Estudiante& estudiante) {
    std::cout << "Nombre: " << estudiante.nombre << std::endl;
    std::cout << "Edad: " << estudiante.edad << std::endl;
    std::cout << "Promedio: " << estudiante.promedio << std::endl;
}

void agregarMateria(Estudiante& estudiante, const std::string& materia) {
    estudiante.materias.push_back(materia);
}

bool buscarMateria(const std::vector<std::string>& materias, const std::string& materia) {
    if (std::find(materias.begin(), materias.end(), materia) == materias.cend()) {
        throw MateriaNoEncontradaException("La materia no está registrada: " + materia);
    }
    return true;
}

void eliminarMateria(Estudiante& estudiante, const std::string& materia) {
    buscarMateria(estudiante.materias, materia);
    auto it = std::find(estudiante.materias.begin(), estudiante.materias.end(), materia);
    if (it != estudiante.materias.cend()) {
        estudiante.materias.erase(it);
    } else {
        std::cout << "Materia no encontrada.\n";
    }
}


void mostrarMaterias(const Estudiante& estudiante) {
    std::cout << "Materias de " << estudiante.nombre << ":\n";
    for (const auto& materia : estudiante.materias) {
        std::cout << "- " << materia << std::endl;
    }
}


void validarFecha(const std::string& fecha) {
    if (fecha.length() != 10 || fecha[4] != '-' || fecha[7] != '-') {
        throw FechaInvalidaException("El formato debe ser AAAA-MM-DD");
    }
}

void registrarAsistencia(Estudiante& estudiante, const std::string& fecha, const std::string& materia, const std::string& estado) {
    validarFecha(fecha);
    estudiante.registrosAsistencia.push_back({fecha, materia, estado});
}

void mostrarAsistencia(const Estudiante& estudiante) {
    std::cout << "Registro de asistencia de " << estudiante.nombre << ":\n";
    for (const auto& asistencia : estudiante.registrosAsistencia) {
        std::cout << "Fecha: " << asistencia.fecha
                  << ", Materia: " << asistencia.materia
                  << ", Estado: " << asistencia.estado << "\n";
    }
}