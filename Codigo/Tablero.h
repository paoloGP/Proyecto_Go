//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#ifndef PROYECTO_POO_2_GO_TABLERO_H
#define PROYECTO_POO_2_GO_TABLERO_H

#include <iostream>
#include <string>
#include <vector>
#include "Jugador.h"
#include "Maquina.h"
#include "Types.h"

using namespace std;

class Tablero{
private:
    Tipo_table tablero;
    Jugador jugador;
    Maquina maquina;
public:
    Tablero()=default;
    Tablero(const string& nombre_jugador, colorFichas turnoJugador, colorFichas turnoMaquina, Tipo_table& _tablero);
    void mostrarTabla();
    void juego();

};

#endif //PROYECTO_POO_2_GO_TABLERO_H
