#include "jugadores.h"
#include "eficiencia.h"
#include "tablero.h"
#include "reglas.h"
int main()
{
    int opcion, aleatorio, *posicion_numero=new int, contar=0, Total1=0, Total2=0;
    bool verificar=false, verificar2=false, turno=true, verificarfinal;
    char Blanco, Negro;
    Jugadores Nombres;
    string N1, N2, **Matriz, posicion;
    Tablero Tablero_;
    Reglas Reglas_;
    opcion = Bienvenida();
    if(opcion == 1){
        while(verificar!=true){
            N1=Nombres.Nombre_jugador(1);
            N2=Nombres.Nombre_jugador(2);
            Nombres.setNombre_Jugador_1(N1);
            Nombres.setNombre_Jugador_2(N2);
            verificar=true;
            aleatorio = Aleatorio_();
            Seleccionar_Color_(aleatorio, N1);
            if(aleatorio == 1){
                Nombres.setFigura_Jugador1('*');
                Nombres.setFigura_Jugadro2('-');
                Blanco=Nombres.getFigura_Jugador1();
                Negro=Nombres.getFigura_Jugadro2();
                Matriz=Tablero_.Tablero_inicial(Blanco, Negro);
                Tablero_.Imprimir_tablero(Matriz);
                Tablero_.setMatriz(Matriz);
                while (verificar2!=true){
                    if(turno ==true){
                        cout<<"El turno es de "<<Nombres.getNombre_Jugador_1()<<endl;
                        posicion = valor();
                        posicion_numero=Posicion_Eleccion(Matriz, posicion);
                        Reglas_.Regla_sandwich(Matriz, Blanco, Negro, posicion_numero, turno, Nombres.getFigura_Jugador1(), Nombres.getNombre_Jugador_2());
                        turno=false;
                    }
                    else{
                        cout<<"El turno es de "<<Nombres.getNombre_Jugador_2()<<endl;
                        posicion = valor();
                        posicion_numero=Posicion_Eleccion(Matriz, posicion);
                        Reglas_.Regla_sandwich(Matriz, Blanco, Negro, posicion_numero, turno,Nombres.getFigura_Jugadro2(), Nombres.getNombre_Jugador_1());
                        turno=true;
                    }
                    verificarfinal=Reglas_.Terminar_el_juego(Matriz, Nombres.getFigura_Jugador1(), Blanco, Negro);
                    if(verificarfinal==true){
                        Total1=Reglas_.Contar_numfiguras(Matriz, Nombres.getFigura_Jugador1(), Nombres.getNombre_Jugador_1());
                        Total2=Reglas_.Contar_numfiguras(Matriz, Nombres.getFigura_Jugadro2(), Nombres.getNombre_Jugador_2());
                        if(Total1>Total2) cout << "El ganador es: "<<Nombres.getNombre_Jugador_1()<<endl,Guardar_en_documento(Total1, Total2, Nombres.getNombre_Jugador_1(), Nombres.getNombre_Jugador_2());
                        else cout << "El ganador es: "<<Nombres.getNombre_Jugador_2()<<endl,Guardar_en_documento(Total2, Total1, Nombres.getNombre_Jugador_2(), Nombres.getNombre_Jugador_1());
                        verificar2=true;
                    }
                }
            }
            else{
                Nombres.setFigura_Jugador1('-');
                Nombres.setFigura_Jugadro2('*');
                Negro=Nombres.getFigura_Jugador1();
                Blanco=Nombres.getFigura_Jugadro2();
                Matriz=Tablero_.Tablero_inicial(Blanco, Negro);
                Tablero_.Imprimir_tablero(Matriz);
                Tablero_.setMatriz(Matriz);
                while (verificar2!=true){
                    posicion = valor();
                    posicion_numero=Posicion_Eleccion(Matriz, posicion);
                    if(turno ==true){
                        cout<<"El turno es de "<<Nombres.getNombre_Jugador_1()<<endl;
                        posicion = valor();
                        posicion_numero=Posicion_Eleccion(Matriz, posicion);
                        Reglas_.Regla_sandwich(Matriz, Blanco, Negro, posicion_numero, turno,Nombres.getFigura_Jugador1(), Nombres.getNombre_Jugador_2());
                        turno=false;
                    }
                    else{
                        cout<<"El turno es de "<<Nombres.getNombre_Jugador_2()<<endl;
                        posicion = valor();
                        posicion_numero=Posicion_Eleccion(Matriz, posicion);
                        Reglas_.Regla_sandwich(Matriz, Blanco, Negro, posicion_numero, turno,Nombres.getFigura_Jugadro2(), Nombres.getNombre_Jugador_1());
                        turno=true;
                    }
                    verificarfinal=Reglas_.Terminar_el_juego(Matriz, Nombres.getFigura_Jugador1(), Blanco, Negro);
                    if(verificarfinal==true){
                        Total1=Reglas_.Contar_numfiguras(Matriz, Nombres.getFigura_Jugador1(), Nombres.getNombre_Jugador_1());
                        Total2=Reglas_.Contar_numfiguras(Matriz, Nombres.getFigura_Jugadro2(), Nombres.getNombre_Jugador_2());
                        if(Total1>Total2) cout << "El ganador es: "<<Nombres.getNombre_Jugador_1()<<endl,Guardar_en_documento(Total1, Total2, Nombres.getNombre_Jugador_1(), Nombres.getNombre_Jugador_2());
                        else cout << "El ganador es: "<<Nombres.getNombre_Jugador_2()<<endl, Guardar_en_documento(Total2, Total1, Nombres.getNombre_Jugador_2(), Nombres.getNombre_Jugador_1());
                        verificar2=true;
                    }
                }
            }
        }
    }
    else{
        cout << "--------------------------"<<endl;
        cout << "Hasta luego!"<<endl;
    }
    delete posicion_numero;
    return 0;
}
