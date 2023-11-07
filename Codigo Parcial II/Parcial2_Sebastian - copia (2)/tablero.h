#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;class Tablero
{
private:
    string **Matriz;
public:
    Tablero();
    string **Tablero_inicial(char Blanco, char Negro);
    void Imprimir_tablero(string **Matriz);
    string **getMatriz() const;
    void setMatriz(string **newMatriz);
};

#endif // TABLERO_H
