#include "invoice.h"
#include <iostream>
using namespace std;
invoice::invoice(int numItem, int qItem, double precoItem, string descricao){
    setNumItem(numItem);
    setQItem(qItem);
    setPrecoItem(precoItem);
    setDescricao(descricao);
}

int invoice::getNumItem(){
    return numItem;
}

int invoice::getQItem(){
    return qItem;
}

double invoice::getPrecoItem(){
    return precoItem;
}

string invoice::getDescricao(){
    return descricao;
}

double invoice::getInvoiceAmount(){
    return qItem * precoItem;
}

void invoice::setNumItem(int numItem){
    this -> numItem = numItem;
}
 

void invoice::setQItem(int qItem){
    if(qItem < 1)
        this -> qItem = 0;
    else
        this -> qItem = qItem;
}

void invoice::setPrecoItem(double precoItem){
    if(precoItem < 1)
        this -> precoItem = 0;
    else
        this -> precoItem = precoItem;
}

void invoice::setDescricao(string descricao){
    this -> descricao = descricao;
}
    int main(){
invoice *f1 = new invoice(79,2,3.50,"Batatas douradas");
    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    cout << "Preco final: " << f1->getInvoiceAmount() << endl << endl;
    f1->setNumItem(54);
    f1->setQItem(-1);
    f1->setPrecoItem(-100);
    f1->setDescricao("d/dx qualquer coisa");
    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    delete(f1);
return 0;
};
