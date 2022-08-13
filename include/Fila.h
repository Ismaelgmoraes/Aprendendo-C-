#ifndef FILA_H
#define FILA_H
typedef int TipoItem;
const int max_itens = 100;

class Fila
{
    public:
        Fila();
        ~Fila();
        bool estavazio();
        bool estacheio();
        void inserir(TipoItem item); //push
        TipoItem remover(); //pop
        void imprimir();



    private:
        int primeiro, ultimo;
        TipoItem* estrutura;

};

#endif // FILA_H
