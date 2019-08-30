#include "data.h"
#include <iostream>
using namespace std;
Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Data::Compara(Data objeto){
    if ((objeto.dia == dia) && (objeto.mes == mes) && (objeto.ano == ano)){
        return 0;
    }else if(ano > objeto.ano){
        return 1;
    }else if(ano == objeto.ano){
        if(mes > objeto.mes){
            return 1;
        }else if(mes == objeto.mes){
            if(dia > objeto.dia){
                return 1;
            }else{
                return -1;
            }
        }
    }
}

std::string Data::getMesExtenso(){
    switch(mes){
        case 1:
            return "janeiro";
            break;
        case 2:
            return "fevereiro";
            break;
        case 3:
            return "marco";
            break;
        case 4:
            return "abril";
            break;
        case 5:
            return "maio";
            break;
        case 6:
            return "junho";
            break;
        case 7:
            return "julho";
            break;
        case 8:
            return "agosto";
            break;
        case 9:
            return "setembro";
            break;
        case 10:
            return "outubro";
            break;
        case 11:
            return "novembro";
            break;
        case 12:
            return "dezembro";
    }
}


bool Data::isBissexto(){
    if(ano % 100 == 0){
        if(ano % 400 == 0){
            return true;
        }
    }else if(ano % 4 == 0 ){
        return true;
    }else{
        return false;
    }
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    if(dia < 1 || dia > 31)
        dia = 1;
    else
        this -> dia = dia;
}

void Data::setMes(int mes){
    if(mes < 1 || mes > 12)
        mes = 1;
    else
        this -> mes = mes;
}

void Data::setAno(int ano){
    if(ano < 1)
        ano = 1;
    else
        this -> ano = ano;
}

int main(){
 Data *d1 = new Data();
    Data *d2 = new Data(15,2,2018);
    int aux;
    bool aux1;
    cout << "A data 1(construtor padrao) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
    d1->setDia(1);
    d1->setMes(1);
    d1->setAno(2019);
    cout << "A data 1(sets) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
    cout << "A data 2 eh: " << d2->getDia() << " de " << d2->getMesExtenso() << " de " << d2->getAno() << endl;
    aux = d1->Compara(*d2);
    //data atual: 1/1/2019
    //data parametro: 15/2/2018
    if(aux == 1){
        cout << "\nA data atual eh maior que a data do parametro" << endl;
    }else if(aux == -1){
        cout << "\nA data do parametro eh maior que a data atual" << endl;
    }else{
        cout << "\nA data atual e a data do parametro sao iguais" << endl;
    }
    aux1 = d1->isBissexto();
    if(aux1)
        cout << d1->getAno() << " eh bissexto." << endl;
    else
        cout << d1->getAno() << " nao eh bissexto." << endl;
    d1->setAno(2016);
    aux1 = d1->isBissexto();
    if(aux1)
        cout << d1->getAno() << " eh bissexto." << endl;
    else
        cout << d1->getAno() << " nao eh bissexto." << endl;
    delete(d1);
    delete(d2);
return 0;
};
