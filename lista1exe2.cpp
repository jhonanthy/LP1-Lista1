#include<iostream>
#include"lista1exe2.h"
using namespace std;





int main(){
     
    Pessoa *p1 = new Pessoa("Claudio");
    Pessoa *p2 = new Pessoa("roberto",12,"99693133");
    cout<<p1->getBuscaNome()<<endl;
    cout<<p2->getBuscaIdade()<<endl;
    cout<<p2->getBuscaNome()<<endl;
    cout<<p2->getBuscatelefone()<<endl;
    // Pessoa P3;// criando o objeto p3 para usar .
   delete (p1);
   delete(p2);   
}
