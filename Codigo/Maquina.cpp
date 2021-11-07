//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//


#include "Maquina.h"

Maquina::Maquina(colorFichas &_turnoMaquina, Tipo_table& _tablero) {
    nombre = "IA";
    turno = _turnoMaquina;
    tablero = &_tablero;
    cout << "Se creo la maquina: "<< nombre << endl;
}

colorFichas Maquina::getTurno() {
    return turno;
}

void Maquina::pedirMovimiento() {
    cout << "Pide movimento de la maquina" << endl;
}
