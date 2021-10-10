//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//



#include "Tablero.h"

Tablero::Tablero(const string &nombre_jugador, colorFichas turnoJugador, colorFichas turnoMaquina,
                 Tipo_table& _tablero) {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Se creo el tablero :D" << endl;
    cout << "nombre del jugador\n" << nombre_jugador << endl << "su color de ficha\n" << (turnoJugador==colorFichas::negras?"Negras":"Blancas");
    cout << "\nEl tablero :\n";
    for(auto iter= begin(_tablero); iter != end(_tablero); iter = next(iter)){
        for(auto iter1= begin(*iter); iter1 != end(*iter); iter1 = next(iter1)){
            cout << *iter1 << " ";
        }
        cout << '\n';
    }
}
