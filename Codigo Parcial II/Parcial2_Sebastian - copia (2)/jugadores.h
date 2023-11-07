#ifndef JUGADORES_H
#define JUGADORES_H
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;class Jugadores
{
private:
    string Nombre_Jugador_1;//atributo que representa el nombre del jugador #1
    string Nombre_Jugador_2;//atributo que representa el nombre del jugador #2
    char Figura_Jugador1;//
    char Figura_Jugadro2;
public:
    Jugadores();
    string Nombre_jugador(int Numero_jugador);
    string getNombre_Jugador_1() const;
    void setNombre_Jugador_1(const string &newNombre_Jugador_1);
    string getNombre_Jugador_2() const;
    void setNombre_Jugador_2(const string &newNombre_Jugador_2);
    char getFigura_Jugador1() const;
    void setFigura_Jugador1(char newFigura_Jugador1);
    char getFigura_Jugadro2() const;
    void setFigura_Jugadro2(char newFigura_Jugadro2);
};

#endif // JUGADORES_H
