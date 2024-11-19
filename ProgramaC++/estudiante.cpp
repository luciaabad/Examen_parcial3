//
// Created by Maria Encina on 19/11/2024.
//

#include <iostream>
#include <string>
#include <vector>


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
    if (std::find(materias.begin(), materias.end(), materia) == materias.end()) {
        throw MateriaNoEncontradaException("La materia no está registrada: " + materia);
    }
    return true;
}

void eliminarMateria(Estudiante& estudiante, const std::string& materia) {
    buscarMateria(estudiante.materias, materia);
    auto it = std::find(estudiante.materias.begin(), estudiante.materias.end(), materia);
    if (it != estudiante.materias.end()) {
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

int main() {
    Estudiante estudiante = {"Juan Perez", 20, 8.5};
    mostrarEstudiante(estudiante);
    /*
    *   Usa std::string, que permite manejar cadenas dinámicas de forma más sencilla y segura.
    *   Pasa la estructura por referencia (const Estudiante&) para evitar copias innecesarias.
    *   C++ permite agregar métodos dentro de la estructura si se convierte en una clase.
    *   C++ soporta programación orientada a objetos (herencia, polimorfismo, etc.).
    *   Librerías estándar	C++ tiene una rica biblioteca estándar para operaciones comunes.
     */

    agregarMateria(estudiante, "Matemáticas");
    agregarMateria(estudiante, "Física");
    agregarMateria(estudiante, "Química");

    mostrarMaterias(estudiante);

    eliminarMateria(estudiante, "Física");
    mostrarMaterias(estudiante);
    /*
    * Usa std::vector, que gestiona dinámicamente la memoria automáticamente.
    * Más sencillo gracias a la STL (std::vector) y sus funciones integradas como push_back y erase.
    * Automáticamente extensible con std::vector.
    * std::vector verifica límites automáticamente, reduciendo errores.
     */

    registrarAsistencia(estudiante, "2024-11-19", "Matemáticas", "Asistió");
    registrarAsistencia(estudiante, "2024-11-20", "Física", "Falta");

    mostrarAsistencia(estudiante);
    /*
    * Usa std::vector para manejar dinámicamente los registros de asistencia.
    * Fácil de ampliar y modificar gracias a las estructuras dinámicas de la STL.
    * std::string simplifica el trabajo con cadenas.
    * La memoria dinámica se maneja automáticamente con std::vector.
     */

    try {
        registrarAsistencia(estudiante, "20224-11-20", "Física", "Falta");
    } catch (FechaInvalidaException exception) {
        std::cerr << exception.what() << std::endl;
    }


    try {
        buscarMateria(estudiante.materias, "Politica");
    } catch (MateriaNoEncontradaException exception) {
        std::cerr << exception.what() << std::endl;
    }


    try {
        eliminarMateria(estudiante, "Lengua 2");
    } catch (MateriaNoEncontradaException exception) {
        std::cerr << exception.what() << std::endl;
    }

    /*
     * C++ ofrece un manejo más limpio, estructurado y moderno para tratar errores gracias a las excepciones.
     * Esto resulta en un código más fácil de mantener y entender, especialmente en sistemas complejos.
     */

    return 0;
}
