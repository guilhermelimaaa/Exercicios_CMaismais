#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mes;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número correspondente a um mês do calendário (1-12): ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
		printf("Esse número é correspondente ao mês de Janeiro");
		break;
		
		case 2:
		printf("Esse número é correspondente ao mês de Fevereiro");
		break;	
		
		case 3:
		printf("Esse número é correspondente ao mês de Março");
		break;	
		
		case 4:
		printf("Esse número é correspondente ao mês de Abril");
		break;	
		
		case 5:
		printf("Esse número é correspondente ao mês de Maio");
		break;	
		
		case 6:
		printf("Esse número é correspondente ao mês de Junho");
		break;	
		
		case 7:
		printf("Esse número é correspondente ao mês de Julho");
		break;	
		
		case 8:
		printf("Esse número é correspondente ao mês de Agosto");
		break;	
		
		case 9:
		printf("Esse número é correspondente ao mês de Setembro");
		break;	
		
		case 10:
		printf("Esse número é correspondente ao mês de Outubro");
		break;	
		
		case 11:
		printf("Esse número é correspondente ao mês de Novembro");
		break;	
		
		case 12:
		printf("Esse número é correspondente ao mês de Dezembro");
		break;		
	}
	
	return 0;
}
