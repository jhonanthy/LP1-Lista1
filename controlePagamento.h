#ifndef CONTROLEPAGAMENTO_H
#define CONTROLEPAGAMENTO_H
#include "pagamentos.h"

#define MAX_PAGAMENTOS 100

class controlePagamento
{
    private:
        pagamentos pay[MAX_PAGAMENTOS];
    public:
        controlePagamento();
        void setPagamentos(std::string nomeFuncionario, double valorPagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (std::string nomeFuncionario);
        int VerificaIndiceDisponivel();
};

#endif // CONTROLEPAGAMENTO_H
