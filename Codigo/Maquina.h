//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#ifndef PROYECTO_POO_2_GO_MAQUINA_H
#define PROYECTO_POO_2_GO_MAQUINA_H
#include "Types.h"

class Maquina{
private:
    string nombre;
    colorFichas turno = colorFichas::espera;
    Tipo_table* tablero=nullptr;
public:
    Maquina()=default;
    Maquina(colorFichas &_turnoMaquina, Tipo_table& _tablero);
    colorFichas getTurno();
    void pedirMovimiento();
};

#endif //PROYECTO_POO_2_GO_MAQUINA_H
