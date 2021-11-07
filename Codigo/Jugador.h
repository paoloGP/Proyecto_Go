//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#ifndef PROYECTO_POO_2_GO_JUGADOR_H
#define PROYECTO_POO_2_GO_JUGADOR_H

#include "Types.h"

class Jugador{
private:
    string nombreJugador;
    colorFichas turnoJugador = colorFichas::espera;
    Tipo_table* tablero = nullptr;
public:
    Jugador()=default;
    Jugador(const string &_nombreJugador, colorFichas _turnoJugador, Tipo_table& _tablero);
    colorFichas getTruno();
    void pedirMovimiento();
    /*
    void verificarMovimiento();
    void hacerMovimiento();*/
};
#endif //PROYECTO_POO_2_GO_JUGADOR_H
