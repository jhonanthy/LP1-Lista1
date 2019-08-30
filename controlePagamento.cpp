#include "controlePagamento.h"

controlePagamento::controlePagamento()
{
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        pay[i].setValorPagamento(0);
        pay[i].setNomeFuncionario(" ");
    }
}

void controlePagamento::setPagamentos(std::string nomeFuncionario, double valorPagamento){
    int
        aux = VerificaIndiceDisponivel();

    pay[aux].setNomeFuncionario(nomeFuncionario);
    pay[aux].setValorPagamento(valorPagamento);
}

double controlePagamento::calculaTotalDePagamentos(){
    double soma = 0;

    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        soma += pay[i].getValorPagamento();
    }

    return soma;
}

bool controlePagamento::existePagamentoParaFuncionario (std::string nomeFuncionario){
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        if(pay[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int controlePagamento::VerificaIndiceDisponivel(){
    for(int i = 0; i<MAX_PAGAMENTOS; i++){
        if(pay[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}
int main(){

    controlePagamento *controlPag = new controlePagamento();
    controlPag->setPagamentos("Mario", 110);
    controlPag->setPagamentos("Jose Lima", 2500);
    controlPag->setPagamentos("Luiz Lucena", 3500);
    cout << "Total pago: " << controlPag->calculaTotalDePagamentos() << endl;
    if(controlPag->existePagamentoParaFuncionario("Mario"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;
    if(controlPag->existePagamentoParaFuncionario("Jose Miguel"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;
    delete(controlPag);




return 0;
};
