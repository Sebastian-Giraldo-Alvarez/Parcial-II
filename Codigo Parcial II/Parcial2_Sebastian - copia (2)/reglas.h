#ifndef REGLAS_H
#define REGLAS_H
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;class Reglas
{
public:
    Reglas();
    string **Regla_sandwich(string **Matriz,char Blanco, char Negro, int *posicion, bool turno, char Ficha_turno, string Nombre);
    bool Terminar_el_juego(string **Matriz,char Ficha_turno, char Blanco, char Negro);
    int Contar_numfiguras(string **Matriz, char Figura, string Nombre);
};

#endif // REGLAS_H
