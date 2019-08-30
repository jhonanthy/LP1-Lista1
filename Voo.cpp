#include<iostream>
#include"lista1exe3.h"
using namespace std;


Voo::Voo(){
    numVagas=100;
    numVoo=1;
    for(int i=0;i<numVagas[i];i++){
        numVagas[i]=false;
    }
    horario();
    data();

}
Voo::Voo(int numVoo,bool nVagas,string data, string hora){
    this->numVagas=numVagas;
    this->numVoo=numVoo;
    for(int i=0;i<numVagas[i];<i++){
        this->numVagas[i]=numVagas[i];
    }
    
}
bool Voo::verifica(int cadeira){
    if(numVagas[cadeira]==false){
        return true;
    }
     else{
    return true;
} 
}
bool Voo::Ocupa(int cadeira){
    if verifica(cadeira){
        numVagas[cadeira]=true;
        return true;
    }else{
        return false;
    }
}
int Voo::vagas(){

    int cont =0;
    for(int i=0;i<numVagas;i++){
        if(numVagas[i]==false){
            cont++;
        }
    }
    return cont;
}
int Voo::getData(){
    return data;
}
int Voo::getHorario(){
    return horario;
    }
int Voo::getnumVoo(){
    return numVoo;
}

int main(){

    //Voo *v1 = new Voo();
    Voo v1;
    cout<<"o numero do Voo é :"<<v1.getnumVoo<<endl;
    cout<<"A data do Voo é :"<<v1.getData()<<endl;
    cout<<"A hora do Voo é:"<<v1.getHorario()<<endl;
    cout<<"A proxima cadeira vazia é a :"<<v1.proximoLivre()+1<<endl;
    cout<<"A cadeira 7 está :"<<endl;
    if(v1.verifica(9)){
        cout<<"Disponivel"<<endl;
    }else{
        cout<<"indisponivel"<<endl;
    }
    cout<<"Vagas disponiveis :"<<v1.vagas()<<endl;
    // delete(v1);
    return 0;
}
