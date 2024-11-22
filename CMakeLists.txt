cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Examen_parcial3 C)

# Versión de C
set(CMAKE_C_STANDARD 99)

# Definir el ejecutable y los archivos fuente
add_executable(Examen_parcial3
        main.c
        Ejercicio1_c/Estudiante.c
        Ejercicio1_c/Asistencia.c
        Ejercicio1_c/Materias.c
        Ejercicio1_c/Asistencia.c
)

# Incluir directorios de los encabezados
target_include_directories(Examen_parcial3
        PRIVATE
        Ejercicio1_c
)
=======
cmake_minimum_required(VERSION 3.29)
project(ExParcial3)

set(CMAKE_CXX_STANDARD 20)

add_executable(ExParcial3 main.cpp estudiante.h
        estudiante.cpp)



