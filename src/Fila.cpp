#include <iostream>
#include "Fila.h"

using namespace std;

        Fila::Fila()
        {
           primeiro = 0;
           ultimo = 0;
           estrutura = new TipoItem[max_itens];
        }
        Fila::~Fila()
        {
            delete [] estrutura;
        }
        bool Fila::estavazio()
        {

        }
        bool Fila::estacheio()
        {

        }
        void Fila::inserir(TipoItem item) //push
        {

        }
        TipoItem Fila::remover() //pop
        {

        }
        void Fila::imprimir()
        {

        }
