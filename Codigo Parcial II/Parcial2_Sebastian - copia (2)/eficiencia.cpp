#include "eficiencia.h"
//Blanco = *
//Negro = -
int Bienvenida()
{
    int opcion;
    cout << "Bienvenid@"<<endl;
    cout << "--------------------------"<<endl;
    cout << "Desea jugar?"<<endl;
    cout << "Si (1)"<<endl;
    cout << "No (2)"<<endl;
    cin >> opcion;
    return opcion;
}

int Aleatorio_()
{
    int num;
    srand(time(0));
    num = 1+(rand()%2);
    return num;
}

void Seleccionar_Color_(int aleatorio, string Nombre_jugador1)
{
    if(aleatorio == 1){
        cout << "El jugador "<<Nombre_jugador1<<" le toca la figura "<<"* "<<endl;
        cout << "--------------------------"<<endl;
    }
    else{
        cout << "El jugador "<<Nombre_jugador1<<" le toca la figura "<<"- "<<endl;
        cout << "--------------------------"<<endl;
    }
}

int *Posicion_Eleccion(string **Matriz,string eleccion)
{
    int tam = eleccion.length(), *posicion=new int, contar=0;
    char palabra=65, palabra2=49;
    string uno, dos;
    for (int inicio = 0; inicio < tam; ++inicio) {
        if(inicio==0) uno = eleccion[inicio];
        else if(inicio==1) dos = eleccion[inicio];
    }
    for (int inicio = 0; inicio < 9; ++inicio) {
        for (int inicio2 = 0; inicio2 < 9; ++inicio2) {
            if(Matriz[inicio][inicio2]==uno)posicion[contar] = inicio2,contar++;
            else if(Matriz[inicio][inicio2]==dos)posicion[contar]=inicio,contar++;
        }
    }
    return posicion;
    delete posicion;
}

string valor()
{
    string posicion;
    cout << "Donde deseas ponerla (Ej: A1)"<<endl;
    cin >> posicion;
    return posicion;
}

void Guardar_en_documento(int Total1, int Total2, string Nombre1, string Nombre2)
{
    time_t tiempo;
    tiempo = time(NULL);
    struct tm*fecha;
    fecha = localtime(&tiempo);
    ofstream Archivo("Historial.txt", ios::app);
    Archivo << Nombre1 <<": Ganador con "<<Total1<<" fichas ||"<<Nombre2<<" con "<<Total2<<" fichas ||"<<fecha->tm_mday<<"/"<<fecha->tm_mon+1<<"/"<<fecha->tm_year+1900<<"||"<<fecha->tm_hour<<":"<<fecha->tm_min<<"\n";
    Archivo.close();
}
