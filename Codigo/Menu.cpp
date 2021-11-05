//
// Created by Cesar Paolo Garcia Perez on 7/10/21.
//

#include "Menu.h"



void Menu::mostrarMenu() {
    int modo;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "*************************************************************************" << endl;
    cout << "                            MENU - Juego Go" << '\n';
    cout << "*************************************************************************" << endl;
    cout << " Modos:"<<'\n',
            cout << "1. Jugador vs IA" << endl << "2. Jugador vs Jugador" << endl << "3. Salir" <<endl;
    cout << "*************************************************************************" << endl;
    cout << "Ingresar numero de modo: ";
    cin >> modo;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    switch (modo){
        case 1: {
            auto nombre = ingresarNombre();
            auto color_fichas = seleccionarFichas();
            Tipo_table tablero = dimensionesTablero();
            juego_go = Tablero(nombre,
                     color_fichas,
                     color_fichas==colorFichas::negras?colorFichas::blancas:colorFichas::negras,
                     tablero);
            break;
        }
        case 2: {
            string nombre1, nombre2;
            cout << "Ingrese su nombre Jugador1: ";
            cin >> nombre1;
            cout << "Ingrese su nombre Jugador2: ";
            cin >> nombre2;
            break;
        }
        case 3: {
            cout << "Gracias por jugar :D ";
            break;
        }
        default: {
            mostrarMenu();
            break;
        }
    }
}

string Menu::ingresarNombre() {
    string nombre;
    do {
        cout << endl << "Ingrese su nombre: ";
        cin >> nombre;
    }while((nombre.empty()));
    return nombre;
}

colorFichas Menu::seleccionarFichas() {
    char color;
    do {
        cout << endl << "Ingrese color de fichas(N:Negras o B:Blancas): ";
        cin >> color;
        cout << " ingreso-> "<<color << endl;
    }while(color != 'N' && color != 'B');
    return color=='N'  ? colorFichas::negras : colorFichas::blancas;
}

Tipo_table Menu::dimensionesTablero(){
    Tipo_table tablero;
    int dimension;
    cout << endl << "Ingrese las dimensiones del tablero(solo ingrese un numero impar del 9 al 19): ";
    do{
        cin >> dimension;
    } while((dimension<9 || dimension>19) && (dimension%2==0));
    for(int i=0; i < dimension; i++) {
        vector<char> filas;
        for (int j = 0; j < dimension; j++) {
            filas.push_back(espacioVacio);
        }
        tablero.push_back(filas);
    }
    return tablero;
}
