#ifndef EFICIENCIA_H
#define EFICIENCIA_H
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <string.h>
#include <fstream>
#include <ctime>
#include <vector>
using namespace std;
int Bienvenida();//Funcion que muestra mensaje de bienvendida
int Aleatorio_();//Funcion que segun un numero aleatorio le asigna un simbolo a uno u otro jugador
void Seleccionar_Color_(int aleatorio, string Nombre_jugador1);//le asigna un simbolo a uno u otro jugador SEGUN el numero anterior
string valor();//esta es la funcion que permite preguntar cual es la posicion donde se desea poner la ficha
int *Posicion_Eleccion(string **Matriz, string eleccion);//Ordena de manera eficiente
void Guardar_en_documento(int Total1, int Total2, string Nombre1, string Nombre2);//Funcion que permite tener el historial de juegos en un archivo txt
#endif // EFICIENCIA_H
