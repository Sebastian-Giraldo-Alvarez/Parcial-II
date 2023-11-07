#include "jugadores.h"

string Jugadores::getNombre_Jugador_1() const
{
    return Nombre_Jugador_1;
}

string Jugadores::Nombre_jugador(int Numero_jugador)
{
    string Nombre_jugador;
    cout << "Nombre del jugador " <<Numero_jugador<< endl;
    cin >> Nombre_jugador;
    return Nombre_jugador;
}

void Jugadores::setNombre_Jugador_1(const string &newNombre_Jugador_1)
{
    Nombre_Jugador_1 = newNombre_Jugador_1;
}

string Jugadores::getNombre_Jugador_2() const
{
    return Nombre_Jugador_2;
}

void Jugadores::setNombre_Jugador_2(const string &newNombre_Jugador_2)
{
    Nombre_Jugador_2 = newNombre_Jugador_2;
}

char Jugadores::getFigura_Jugador1() const
{
    return Figura_Jugador1;
}

void Jugadores::setFigura_Jugador1(char newFigura_Jugador1)
{
    Figura_Jugador1 = newFigura_Jugador1;
}

char Jugadores::getFigura_Jugadro2() const
{
    return Figura_Jugadro2;
}

void Jugadores::setFigura_Jugadro2(char newFigura_Jugadro2)
{
    Figura_Jugadro2 = newFigura_Jugadro2;
}

Jugadores::Jugadores()
{

}
