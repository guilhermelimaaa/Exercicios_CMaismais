#include <iostream>
#include <string.h>
#include <conio.h>
#include <locale.h>

 float media;
 int qtdF, homens, mulheres, idade, qtdFilhos, idadeF, maior, menor, investimento, opMP;
 char nome[60], cpf[20], telefone[20], sexo[2], filho[2];

void menuPrincipal() {
	
	system("cls");
	fflush(stdin);
	
	puts("======= Cadastro de Famílias =======");
	
	puts("[1] - Cadastrar Famílias");
	puts("[2] - Resumos");
	puts("[0] - Sair");
	
	printf("\nOpção: ");
	scanf("%d", &opMP);
	
	fflush(stdin);	
}


void cadastroFamilia() {
	
	system("cls");
	fflush(stdin);
	
	puts("======= Processo de Cadastro =======");
	
	puts("Deseja cadastrar quantos membros da família? \n");
	
	printf("Quantidade: ");
	scanf("%d", &qtdF);
	
	fflush(stdin);
	
	for (int i=1; i<=qtdF; i++) {
		
		printf("Integrante da familia n° %d: \n", i);
		
		puts("Digite o nome: \n");
		scanf("%s", &nome);
		
		fflush(stdin);
		
		puts("Digite o CPF: \n");
		scanf("%s", &cpf);
		
		fflush(stdin);
		
		puts("\nDigite o Telefone: ");
		scanf("%s", &telefone);
		
		fflush(stdin);
		
		puts("\nDigite o Sexo: (F) Para Feminino e (M) Para Masculino: ");
		scanf("%s", &sexo);
		
			if (strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0) {
				
				homens++;	
			
			} else if (strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0){
				
				mulheres++;
				
			}
		
		fflush(stdin);
		
		puts("Digite a Idade: \n");
		scanf("%s", &idade);
		
		fflush(stdin);
		
		puts("\nPossui filhos? [S] - Sim [N] - Não: ");
		scanf("%s", &filho);
		
		fflush(stdin);
		
		if (strcmp(filho, "S") == 0 || strcmp(filho, "s") == 0) {
			
			system ("cls");
			
			printf("Quantos filhos possui: ");
			scanf("%d", &qtdFilhos);
			
				for(int i=1; i<=qtdFilhos; i++) {
				
					printf("Qual a idade do filho n° %d: \n",i);
					scanf("%d", &idadeF);
				
					if (idadeF >= 18) {
				
						maior++;
						investimento+=150;
				
						} else {
					
							menor++;
							investimento+=300;
					
							}			
				
				}
				
				media = investimento/qtdFilhos;
				
			system("cls");
				
		} 
	
		system("cls");
			
	}

}

void informacoes() {
	
	system("cls");
	
	puts("Resumo do Cadastro");
	
	printf("\n\nQuantidade de Homens: %d \n", homens);
	printf("Quantidade de Mulheres: %d \n", mulheres);
	printf("Filhos maiores de idade: %d \n", maior);
	printf("Filhos menores de idade: %d \n", maior);
	printf("Investimento: %d \n", investimento);
	printf("Media investimento: %2.lf \n", media);

	
	system("pause");
}

void exit() {
	system("cls");
	puts("Programa Finalizado");
	system("exit");
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	
	system("cls");
	
	do {
		
		menuPrincipal();
			
		switch (opMP) {
			
			case 1 :
				
				cadastroFamilia();
						
			break;
			
			case 2 : 
			
				informacoes();
			
			break;
			
			case 0 :
				
				 exit();
				 
			break;
			
			default:
				break;

		}
				
	} while(opMP!=0);
		
	return 0;
}
