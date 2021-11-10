//
// Created by Cesar Paolo Garcia Perez on 9/11/21.
//

#ifndef PROYECTO_GO_REGLAS_H
#define PROYECTO_GO_REGLAS_H

#include "Types.h"

class Reglas{
private:
    int fila;
    int columna;
public:
    Reglas()=default;
    void set_filaColumna(int& _fila,  int &_columna);
    //Reglas...
};

#endif //PROYECTO_GO_REGLAS_H
