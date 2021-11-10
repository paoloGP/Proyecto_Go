cmake_minimum_required(VERSION 3.20)
project(Proyecto_Go)

set(CMAKE_CXX_STANDARD 14)

include_directories(Codigo)

add_executable(Proyecto_Go
        Codigo/Jugador.cpp
        Codigo/Jugador.h
        Codigo/main.cpp
        Codigo/Maquina.cpp
        Codigo/Maquina.h
        Codigo/Menu.cpp
        Codigo/Menu.h
        Codigo/Tablero.cpp
        Codigo/Tablero.h Codigo/Types.h Codigo/Reglas.cpp Codigo/Reglas.h)
