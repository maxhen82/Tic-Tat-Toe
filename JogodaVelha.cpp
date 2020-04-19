#include <iostream>
#include <cstdlib>

using namespace std;
    void mostrarTabuleiro(string z[5][5]){
    string mostrarT[5][5];
    mostrarT[5][5]=z[5][5];
    for(int i=0; i<5; i++){
        for (int j=0; j<5;j++){
        cout<<mostrarT[i][j];
        }//j
       cout<<endl;
    }//i}
    cout<<endl;
    }//função

    int main(){

    char casa='1';
    int jogada=0, casas;
    string jogador1, jogador2, tabuleiro[5][5];
    bool mostrar= true, partida=true, ganhador;

    for(int i=0; i<5; i++){
        for (int j=0; j<5;j++){
        if(i==1 || i==3){
            tabuleiro[i][j]= "-";
        }else if(j==1 || j==3){
                tabuleiro[i][j]= "|";
                } else{
                tabuleiro[i][j]= casa;
                casa=casa+1;
                }
        }//j
     }//i

    //mostrarTabuleiro(tabuleiro[5][5]);
for(int i=0; i<5; i++){
        for (int j=0; j<5;j++){
        cout<<tabuleiro[i][j];
        }//j
       cout<<endl;
    }//i}
//jogo
while(partida && jogada<10){
        string marca;

        if(jogada%2==1){
            marca="X";
        }else{
            marca="O";
            }

        cout<<"Escolha sua casa JOGADOR "+ marca+ ":"<< endl;
        cin>>casas;

        if(casas==1){
                if(tabuleiro[0][0]!= "X" && tabuleiro[0][0]!="O"){
                    tabuleiro[0][0]= marca;
                    jogada++;
                    mostrar=true;
                }else{
                cout<<"Casa ja foi escolhida. ";
                }

            }else if(casas==2){
                if(tabuleiro[0][2]!= "X" && tabuleiro[0][2]!="O"){
                    tabuleiro[0][2]= marca;
                    jogada++;
                    mostrar=true;
                    }else{
                    cout<<"Casa ja foi escolhida. ";
                    }
                }else if(casas==3){
                    if(tabuleiro[0][4]!= "X" && tabuleiro[0][4]!="O"){
                    tabuleiro[0][4]= marca;
                    jogada++;
                    mostrar=true;
                        }else{
                        cout<<"Casa ja foi escolhida. ";
                        }
                    }else if(casas==4){
                        if(tabuleiro[2][0]!= "X" && tabuleiro[2][0]!="O"){
                        tabuleiro[2][0]= marca;
                        jogada++;
                        mostrar=true;
                            }else{
                            cout<<"Casa ja foi escolhida. ";
                            }

                        }else if(casas==5){
                            if(tabuleiro[2][2]!= "X" && tabuleiro[2][2]!="O"){
                            tabuleiro[2][2]= marca;
                            jogada++;
                            mostrar=true;
                                }else{
                                cout<<"Casa ja foi escolhida. ";
                                }
                            }else if(casas==6){
                                if(tabuleiro[2][4]!= "X" && tabuleiro[2][4]!="O"){
                                tabuleiro[2][4]= marca;
                                jogada++;
                                mostrar=true;
                                    }else{
                                    cout<<"Casa ja foi escolhida. ";
                                    }
                                }else if(casas==7){
                                    if(tabuleiro[4][0]!= "X" && tabuleiro[4][0]!="O"){
                                    tabuleiro[4][0]= marca;
                                    jogada++;
                                    mostrar=true;
                                        }else{
                                        cout<<"Casa ja foi escolhida. ";
                                        }
                                    }else if(casas==8){
                                        if(tabuleiro[4][2]!= "X" && tabuleiro[4][2]!="O"){
                                        tabuleiro[4][2]= marca;
                                        jogada++;
                                        mostrar=true;
                                        }else{
                                            cout<<"Casa ja foi escolhida. ";
                                            }

                                        }else if(casas==9){
                                            if(tabuleiro[4][4]!= "X" && tabuleiro[4][4]!="O"){
                                            tabuleiro[4][4]= marca;
                                            jogada++;
                                            mostrar=true;
                                            }else{
                                                cout<<"Casa ja foi escolhida. ";
                                                }

                                        }

//mostrarTabuleiro(tabuleiro[5][5]);
if(mostrar){
    cout<<endl;
    for(int i=0; i<5; i++){
        for (int j=0; j<5;j++){
        cout<<tabuleiro[i][j];
        }//j
       cout<<endl;
    }//i
    cout<<endl;
    mostrar=false;
}
// coferir ganhador
if(tabuleiro[0][0]==tabuleiro[0][2]&&tabuleiro[0][0]==tabuleiro[0][4]){
        partida=false;
    if(tabuleiro[0][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
    if(
   tabuleiro[2][0]==tabuleiro[2][2]&&tabuleiro[2][0]==tabuleiro[2][4]){
        partida=false;
    if(tabuleiro[2][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[4][0]==tabuleiro[4][2]&&tabuleiro[4][0]==tabuleiro[4][4]){
        partida=false;
    if(tabuleiro[4][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[0][0]==tabuleiro[2][0]&&tabuleiro[0][0]==tabuleiro[4][0]){
        partida=false;
    if(tabuleiro[0][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[0][2]==tabuleiro[2][2]&&tabuleiro[0][2]==tabuleiro[4][2]){
        partida=false;
    if(tabuleiro[0][2]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[0][4]==tabuleiro[2][4]&&tabuleiro[0][4]==tabuleiro[4][4]){
        partida=false;
    if(tabuleiro[0][4]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[0][0]==tabuleiro[2][2]&&tabuleiro[0][0]==tabuleiro[4][4]){
        partida=false;
    if(tabuleiro[0][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}
if(tabuleiro[4][0]==tabuleiro[2][2]&&tabuleiro[4][0]==tabuleiro[0][4]){
        partida=false;
    if(tabuleiro[4][0]=="X"){
        cout<<"Jogador X venceu!!!"<<endl;
    }else{
        cout<<"Jogador O venceu!!!"<<endl;
    }
}


}//partida jogo

    return 0;
    }//main

