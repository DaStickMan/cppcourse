#include <iostream>
#include "Tree.h"
using namespace std;

int main(int argc, char *argv[])
{
	Arvore arv;

	// insere as chaves
	arv.inserir("Bastion");
	arv.inserir("Zarya");
	arv.inserir("Mercy");
	arv.inserir("Lucio");
	arv.inserir("Wreckingball");
	arv.inserir("Winston");
	arv.inserir("Reinheart");
	arv.inserir("Moira");

	// percorre em ordem iniciando da raiz
	cout << "Percorrendo em ordem...\n";
	arv.emOrdem(arv.getRaiz());

	return 0;
}