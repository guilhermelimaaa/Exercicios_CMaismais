#include <iostream>
#include <string.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    struct Produtos{
    	int id, qtd;
    	char descricao[50], status[30];
    	float valor;
	};
	
	struct Produtos p[5];
	
	void menu(){
		printf("=======Menu======= \n");
		printf("[1] - Cadastro de produtos \n");
		printf("[2] - Listar produtos \n");
		printf("[3] - Consultar produtos \n");
		printf("[4] - Entrada de dados \n");
		printf("[0] - Sair \n");
	}
	
	void cadastroProdutos(){
		
		int qtdprodutos;
		
		system("cls");
		printf("======Inserir produtos=======\n");
		printf("ID: \n");
		printf("Descrição: \n");
		printf("Valor: \n");
		printf("\n Quantos produtos deseja cadastrar ?: ");
		scanf("\n %i", &qtdprodutos);
		
		 
		for(int cont=0;cont<=qtdprodutos;cont++){
    	printf("\n Inserir o ID: \n \n");
		scanf("%i", &p[cont].id);
    	
		printf("Inserir Descrição: \n \n");
		scanf("%s", &p[cont].descricao);
    	
		printf("Inserir Quantidade: \n \n");
		scanf("%i", &p[cont].qtd);
		
		printf("Inserir Valor: \n \n");
		scanf("%f", &p[cont].valor);
	    }
	
	}
	
	void listaProdutos(){
		system("cls");
		for(int c=0;c<5;c++){
			printf("=======Listagem de produtos======= \n");
			printf("ID: %i\n", p[c].id);
	        printf("Descrição %s\n", p[c].descricao);
	        printf("Quantidade: %i\n", p[c].qtd);
	        printf("Valor: %f.2\n", p[c].valor);
		}
	}
	

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int nav;
	
	do{
		menu();
		scanf("%i", &nav);
	  switch(nav){
		case 1:
		    cadastroProdutos();
        break;
		
		case 2:
			listaProdutos();
		break;
		
		case 3:
		break;
		
		case 4:
		break;
		
		case 0:
		   printf("Saindo...");
		break;
       }
	}while(nav != 0);
   
    
	
	
	return 0;
}
