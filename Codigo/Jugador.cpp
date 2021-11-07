//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#include "Jugador.h"


Jugador::Jugador(const string &_nombreJugador, colorFichas _turnoJugador, Tipo_table& _tablero) {
    nombreJugador = _nombreJugador;
    turnoJugador = _turnoJugador;
    tablero = &_tablero;
    cout << "Se creo el jugador " <<  nombreJugador <<endl;
}

colorFichas Jugador::getTruno() {
    return turnoJugador;
}

void Jugador::pedirMovimiento() {
    cout << "pide el movimiento del jugador" << endl;
}
