#include "reglas.h"

Reglas::Reglas()
{

}

string **Reglas::Regla_sandwich(string **Matriz, char Blanco, char Negro, int *posicion, bool turno,char Ficha_turno,string Nombre)
{
    string Ficha_contrario, Ficha_turno_;
    int *posicion2 =new int, *posicion3 =new int;
    bool verificar=false, verificar2=false,verificar3=false ;
    posicion2[0]=posicion[1];
    posicion2[1]=posicion[0];
    posicion3[0]=posicion2[0];
    posicion3[1]=posicion2[1];
    if(Ficha_turno == Blanco)Ficha_contrario=Negro, Ficha_turno_ = Blanco;
    else Ficha_contrario = Blanco,Ficha_turno_ = Negro;
    if(Matriz[posicion2[0]-1][posicion2[1]-1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]-1>=0&&posicion2[1]-1>=0){
                posicion2[0] = posicion2[0]-1;
                posicion2[1] = posicion2[1]-1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]-1>=0&&posicion2[1]-1>=0){
                    posicion2[0] = posicion2[0]-1;
                    posicion2[1] = posicion2[1]-1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }

    }
    if(Matriz[posicion2[0]+1][posicion2[1]]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]+1<=9){
                posicion2[0]=posicion2[0]+1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]+1<=9){
                    posicion2[0]=posicion2[0]+1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }

    }
    if(Matriz[posicion2[0]-1][posicion2[1]]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]-1>=0){
                posicion2[0] = posicion2[0]-1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]-1>=0){
                    posicion2[0] = posicion2[0]-1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }

    }
    if(Matriz[posicion2[0]][posicion2[1]+1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[1]+1<=9){
                posicion2[1] = posicion2[1]+1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[1]+1<=9){
                    posicion2[1] = posicion2[1]+1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }
    }
    if(Matriz[posicion2[0]-1][posicion2[1]+1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]-1>=0&&posicion2[1]+1<=9){
                posicion2[0] = posicion2[0]-1;
                posicion2[1] = posicion2[1]+1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]-1>=0&&posicion2[1]+1<=9){
                    posicion2[0] = posicion2[0]-1;
                    posicion2[1] = posicion2[1]+1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }
    }
    if(Matriz[posicion2[0]+1][posicion2[1]+1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]+1<=9&&posicion2[1]+1<=9){
                posicion2[0] = posicion2[0]+1;
                posicion2[1] = posicion2[1]+1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]+1<=9&&posicion2[1]+1<=9){
                    posicion2[0] = posicion2[0]+1;
                    posicion2[1] = posicion2[1]+1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }
    }
    if(Matriz[posicion2[0]+1][posicion2[1]-1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[0]+1<=9&&posicion2[1]-1>=0){
                posicion2[0] = posicion2[0]+1;
                posicion2[1] = posicion2[1]-1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[0]+1<=9&&posicion2[1]-1>=0){
                    posicion2[0] = posicion2[0]+1;
                    posicion2[1] = posicion2[1]-1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }
    }
    if(Matriz[posicion2[0]][posicion2[1]-1]==Ficha_contrario){
        while(verificar3!=true){
            if(posicion2[1]-1>=0){
                posicion2[1] = posicion2[1]-1;
                if(Matriz[posicion2[0]][posicion2[1]]==Ficha_turno_){
                    verificar3=true;
                }
                else if(Matriz[posicion2[0]][posicion2[1]]==" "){
                    break;
                }
            }
            else{
                break;
            }
        }
        posicion2[0]=posicion3[0];
        posicion2[1]=posicion3[1];
        if(verificar3==true){
            Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
            while(verificar!=true){
                if(posicion2[1]-1>=0){
                    posicion2[1] = posicion2[1]-1;
                    if(Matriz[posicion2[0]][posicion2[1]]==Ficha_contrario){
                        Matriz[posicion2[0]][posicion2[1]]=Ficha_turno_;
                    }
                    else{
                        verificar = true;
                    }
                }
                else{
                    verificar=true;
                }
            }
            verificar=false;
            verificar2=true;
            verificar3=false;
            posicion2[0]=posicion3[0];
            posicion2[1]=posicion3[1];
        }
    }
    if(verificar2 == false){
        cout<<"No es valido "<<endl;
    }
    for (int inicio = 0; inicio < 9; ++inicio) {
        for (int inicio2 = 0; inicio2 < 9; ++inicio2) {
            cout<<Matriz[inicio][inicio2]<<" ";
        }
        cout <<endl;
    }
    delete posicion2;
    delete posicion3;
}

bool Reglas::Terminar_el_juego(string **Matriz, char Ficha_turno, char Blanco, char Negro){
    string Ficha_contrario, Ficha_turno_;
    bool verificar=false, verificar2=false;
    if(Ficha_turno == Blanco)Ficha_contrario=Negro, Ficha_turno_ = Blanco;
    else Ficha_contrario = Blanco,Ficha_turno_ = Negro;
    for (int inicio = 0; inicio < 9; ++inicio) {
        for (int inicio2 = 0; inicio2 < 9; ++inicio2) {
            if(Matriz[inicio][inicio2]!=" "&&Matriz[inicio][inicio2]!=""){
                verificar=true;
            }
            else{
                verificar=false;
                break;
            }
        }
    }
    if(verificar==false){
        return verificar2;
    }
    else{
        verificar2=true;
        return verificar2;
    }
}

int Reglas::Contar_numfiguras(string **Matriz, char Figura, string Nombre)
{
    int Cantidad=0;
    string Figura_="";
    if(Figura_=="") Figura_=Figura;
    for (int inicio = 0; inicio < 9; ++inicio) {
        for (int inicio2 = 0; inicio2 < 9; ++inicio2) {
            if(Matriz[inicio][inicio2]==Figura_){
                Cantidad++;
            }
        }
    }
    cout<<"El jugador "<<Nombre<< " termino con "<<Cantidad<<" fichas en el tablero"<<endl;
    return Cantidad;
}


