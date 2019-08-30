#ifndef CLASSES_H_INDLUDED
#define CLASSES_H_INDLUDED
using namespace std;

class Voo{
    private:
    string data;
    string horario;
    int numVoo;
    bool numVagas;
    
    public:
    void proximoLivre();
    bool verifica(int nCadeira);
    bool Ocupa(int nCadeira);
    int vagas();
    getnumVoo(int numVoo);
    getData();
    getHorario();
    Voo();
    Voo(int numVoo,bool nVagas,int data,int hora);
};





#endif
