#include "tablero.h"

string **Tablero::getMatriz() const
{
    return Matriz;
}

void Tablero::setMatriz(string **newMatriz)
{
    Matriz= newMatriz;
}

Tablero::Tablero()
{

}

string **Tablero::Tablero_inicial(char Blanco, char Negro)
{
    string **Matriz, numero;
    int contar;
    char palabra=65, palabra2=49;
    Matriz = new string*[10];
    for (int inicio = 0; inicio < 10; ++inicio){
        Matriz[inicio]=new string[10];
    }
    for (int Filas = 0; Filas < 9; ++Filas) {
        for (int Columnas = 0; Columnas < 9; ++Columnas) {
            if(Filas==0 && Columnas==0)*(*(Matriz+Filas)+Columnas) = " ";
            else if(Filas==0&&Columnas!=0)*(*(Matriz+Filas)+Columnas)= palabra, palabra++;
            else if(Columnas==0&&Filas!=0)*(*(Matriz+Filas)+Columnas) = palabra2, palabra2++;
            else if(Filas== 4&&Columnas==4)*(*(Matriz+Filas)+Columnas)= Blanco;
            else if(Filas==4&&Columnas==5)*(*(Matriz+Filas)+Columnas) = Negro;
            else if(Filas==5&&Columnas==4)*(*(Matriz+Filas)+Columnas) = Negro;
            else if(Filas==5&&Columnas==5)*(*(Matriz+Filas)+Columnas) = Blanco;
            else *(*(Matriz+Filas)+Columnas) = " ";
        }
    }
    return Matriz;
}

void Tablero::Imprimir_tablero(string **Matriz)
{
    for (int inicio = 0; inicio < 9; ++inicio) {
        for (int inicio2 = 0; inicio2 < 9; ++inicio2) {
            cout<<Matriz[inicio][inicio2]<<" ";
        }
        cout <<endl;
    }
}
