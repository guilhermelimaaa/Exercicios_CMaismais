#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mes;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero correspondente a um m�s do calend�rio (1-12): ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
		printf("Esse n�mero � correspondente ao m�s de Janeiro");
		break;
		
		case 2:
		printf("Esse n�mero � correspondente ao m�s de Fevereiro");
		break;	
		
		case 3:
		printf("Esse n�mero � correspondente ao m�s de Mar�o");
		break;	
		
		case 4:
		printf("Esse n�mero � correspondente ao m�s de Abril");
		break;	
		
		case 5:
		printf("Esse n�mero � correspondente ao m�s de Maio");
		break;	
		
		case 6:
		printf("Esse n�mero � correspondente ao m�s de Junho");
		break;	
		
		case 7:
		printf("Esse n�mero � correspondente ao m�s de Julho");
		break;	
		
		case 8:
		printf("Esse n�mero � correspondente ao m�s de Agosto");
		break;	
		
		case 9:
		printf("Esse n�mero � correspondente ao m�s de Setembro");
		break;	
		
		case 10:
		printf("Esse n�mero � correspondente ao m�s de Outubro");
		break;	
		
		case 11:
		printf("Esse n�mero � correspondente ao m�s de Novembro");
		break;	
		
		case 12:
		printf("Esse n�mero � correspondente ao m�s de Dezembro");
		break;		
	}
	
	return 0;
}
