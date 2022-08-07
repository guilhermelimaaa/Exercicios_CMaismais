#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Produtos{
	int id;
	char descricao[20];
	float valor;
	int qtd;
};


int main(int argc, char** argv) {
	
	struct Produtos p; 
	p.id = 1000;
	p.qtd = 0;
	p.valor = 0.0;
	strcpy(p.descricao = "Café");
	
	
	return 0;
}
