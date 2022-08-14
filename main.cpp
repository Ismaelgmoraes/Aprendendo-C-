#include <iostream>
#include "Fila.h"

using namespace std;

int main()
{
	Fila fila1;
	int opcao;
	TipoItem item;
	cout << "Programa gerador de filas\n\n";
	do{
		cout << "Digite 0 para parar o programa\n";
		cout << "Digite 1 para inserir um elemento\n";
		cout << "Digite 2 para remover um elemento\n";
		cout << "Digite 3 para imprimir a fila\n";
		cin >> opcao;
		if(opcao == 1)
		{
			cout << "Digite o numero a ser inserido\n\n";
			cin >> item;
			fila1.inserir(item);
		} else if(opcao ==2)
		{
		item = fila1.remover();
			cout << "O elemento removido foi " << item << endl;
		} else if(opcao ==3)
		{
			fila1.imprimir();
		}
     	} while (opcao != 0);

	return 0;
}
