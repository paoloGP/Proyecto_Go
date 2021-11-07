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

    juego();

}

void Tablero::juego() {
    if(jugador.getTruno() == colorFichas::negras){
        mostrarTabla();
        jugador.pedirMovimiento();
        mostrarTabla();
        maquina.pedirMovimiento();
    }else{
        mostrarTabla();
        maquina.pedirMovimiento();
        mostrarTabla();
        jugador.pedirMovimiento();
    }
}

void Tablero::mostrarTabla() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(auto fila = begin(tablero); fila != end(tablero); fila++){
        cout << "           ";
        for(auto columna = begin(*fila); columna != end(*fila); columna++){
            if(columna != prev(end(*fila))) cout << *columna << " - ";
            else cout << *columna;
        }
        if(fila != prev(end(tablero))) {
            cout << endl;
            cout << "           ";
            for(auto columna = begin(*fila); columna != end(*fila); columna++){
                cout << "|   ";
            }
        }
        cout << endl;
    }
}
