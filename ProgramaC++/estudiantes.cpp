//
// Created by Maria Encina on 19/11/2024.
//

#include "estudiantes.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado; // "Asistió", "Falta", "Tardanza"

    void mostrarAsistencia() const {
        std::cout << "Fecha: " << fecha
                  << ", Materia: " << materia
                  << ", Estado: " << estado << std::endl;
    }
};

class Estudiante {
private:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<Asistencia> asistencias;

public:
    // Constructor
    Estudiante(std::string nombre, int edad, float promedio)
        : nombre(std::move(nombre)), edad(edad), promedio(promedio) {}

    // Métodos de la estructura Estudiante
    void mostrarEstudiante() const {
        std::cout << "Nombre: " << nombre
                  << ", Edad: " << edad
                  << ", Promedio: " << promedio << std::endl;
        mostrarMaterias();
        mostrarAsistencias();
    }

    void agregarMateria(const std::string& materia) {
        if (std::find(materias.begin(), materias.end(), materia) != materias.end()) {
            throw std::runtime_error("La materia ya está registrada.");
        }
        materias.push_back(materia);
    }

    void eliminarMateria(const std::string& materia) {
        auto it = std::find(materias.begin(), materias.end(), materia);
        if (it == materias.end()) {
            throw std::runtime_error("La materia no está registrada.");
        }
        materias.erase(it);
    }

    void mostrarMaterias() const {
        std::cout << "Materias inscritas:\n";
        for (const auto& materia : materias) {
            std::cout << " - " << materia << std::endl;
        }
    }

    // Métodos de gestión de asistencia
    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
        if (std::find(materias.begin(), materias.end(), materia) == materias.end()) {
            throw std::runtime_error("La materia no está registrada.");
        }
        if (estado != "Asistió" && estado != "Falta" && estado != "Tardanza") {
            throw std::runtime_error("Estado de asistencia inválido.");
        }
        asistencias.push_back({fecha, materia, estado});
    }

    void mostrarAsistencias() const {
        std::cout << "Registro de asistencias:\n";
        for (const auto& asistencia : asistencias) {
            asistencia.mostrarAsistencia();
        }
    }
};

