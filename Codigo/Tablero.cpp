//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//



#include "Tablero.h"

Tablero::Tablero(const string &nombre_jugador, colorFichas turnoJugador, colorFichas turnoMaquina,
                 Tipo_table& _tablero) {

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Se creo el entorno de juego :D" << endl;
    tablero = _tablero;
    jugador = Jugador(nombre_jugador, turnoJugador, tablero);
    maquina = Maquina(turnoMaquina, tablero);

}
