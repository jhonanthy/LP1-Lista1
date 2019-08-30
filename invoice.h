#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;
class invoice
{
    private:
        int numItem;
        int qItem;
        double precoItem;
        string descricao;

    public:
        invoice(int numItem, int qItem, double precoItem, string descricao);
        int getNumItem();
        int getQItem();
        double getPrecoItem();
        string getDescricao();
        double getInvoiceAmount();
        void setNumItem(int numItem);
        void setQItem(int qItem);
        void setPrecoItem(double precoItem);
        void setDescricao(string descricao);

};

#endif // INVOICE_H
