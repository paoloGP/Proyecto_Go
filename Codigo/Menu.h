//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#ifndef PROYECTO_POO_2_GO_MENU_H
#define PROYECTO_POO_2_GO_MENU_H

#include "Tablero.h"




class Menu{
private:
    Tablero juego_go;
public:
    void mostrarMenu();
    void seleccionarDificultad();
    void ingresarNombre();
    void modoDeJuego();
};



#endif //PROYECTO_POO_2_GO_MENU_H
