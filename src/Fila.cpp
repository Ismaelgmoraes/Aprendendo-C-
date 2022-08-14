#include <iostream>
#include "Fila.h"

using namespace std;
//const int max_item = 100;
//typedef int TipoItem

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
            return (primeiro == ultimo);
        }
        bool Fila::estacheio()
        {
            return ((ultimo - primeiro) == max_itens);
        }
        void Fila::inserir(TipoItem item) //push
        {
            if (estacheio())
	 	{
	 		cout << "A fila está cheia\n";
	 		cout <<"Não foi possivel inserir o item\n";
	 	}else{
	 		estrutura [ultimo % max_itens] = item;
	 		ultimo++;
	 	}
        }
        TipoItem Fila::remover() //pop
        {
            if(estavazio())
 	 {
	 	cout << "A pilha está vazia\n";
	 	cout <<"nenhum elemento foi removido\n";
	 	return 0;
	 } else{
	 	primeiro++;
	 	return estrutura[(primeiro-1)% max_itens];
	 }
        }
        void Fila::imprimir()
        {
             cout <<"Fila: [ ";
	 	 for(int i = primeiro; i < ultimo; i++)
	 	 {
	 	 	cout << estrutura[ i% max_itens] << " ";
	 	 }
	 	  cout << "]\n\n";
        }
