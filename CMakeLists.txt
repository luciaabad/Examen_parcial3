cmake_minimum_required(VERSION 3.29)
project(Examen_parcial3 C)

set(CMAKE_C_STANDARD 11)

add_executable(Examen_parcial3
    main.c
        Ejercicio1_c/Estudiante.c
        Ejercicio1_c/Materia.h
        Ejercicio1_c/Materia.c
        Ejercicio1_c/Asistencia.c
        Ejercicio1_c/Asistencia.h)
