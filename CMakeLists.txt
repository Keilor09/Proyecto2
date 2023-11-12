cmake_minimum_required(VERSION 3.26)
project(Proyecto2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto2 main.cpp
        Paciente.h
        Paciente.cpp
        Enfermedad.h
        Enfermedad.cpp
        IReporte.h
        IReporte.cpp
        RepAnalisis1.h
        RepAnalisis1.cpp
        RepAnalisis2.h
        RepAnalisis2.cpp
        RepAnalsis3.h
        RepAnalsis3.cpp
        ContEnfermedades.cpp
        ContPacientes.cpp)
