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
using namespace std;

class Tablero{
private:
    Jugador jugador;
    Maquina maquina;
    vector<vector<int>> tablero;

public:
    Tablero(const string& nombre_jugador= "Jugador 1", colorFichas turnoJugador, colorFichas turnoMaquina);
    void inicioDeJuego() {
        int contador=1;
        if (jugadaor.turnoJugador == colorFichas::blanco) {
            ...
            ...
            do{
                hacerMovimientoJugador(contador);
                hacerMovimientoMaquina(contador);
            }while(finDeJuego())
        } else {
            ...
            ...
            do{
                hacerMovimientoMaquina();
                hacerMovimientoJugador();
            }while(finDeJuego())
        }
    }
    void hacerMovimientoJugador(){
        jugador.hacerMovimiento();
        contador += 1;
    };
    void hacerMovimientoMaquina(){
        maquina.hacerMovimiento();
        contador += 1;
    }
    bool finDeJuego();

};

#endif //PROYECTO_POO_2_GO_TABLERO_H
