#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Pessoa{
    private:
    string nome;
    int idade;
    string telefone;
    
    public:
    Pessoa(string nome);
    Pessoa(sstring nm,int i,string tl);    
    void getBuscaNome();
    void getBuscaIdade();
    void getBuscatelefone();
        
};
   Pessoa::Pessoa(string nome){
    void setMudaNome(string nm);
    }
 
 Pessoa::Pessoa(string nm, int i, string tl){
       
        void setMudaNome(string nm);
        void setMudaIdade(int i);
        void setMudaTelefone(string tl);
    
    }

void Pessoa::getBuscaNome(){

    return nome;
}
void Pessoa::getBuscaIdade(){

    return idade;
}
void Pessoa::getBuscaTelefone(){

    return idade;
}
void Pessoa::setMudaNome(int nm){

    nome=nm;
}
void Pessoa::setMudaidade(int i){

    idade=i;
}
void Pessoa::setMudaTelefone(int tl){

    telefone=tl;
}
#endif
