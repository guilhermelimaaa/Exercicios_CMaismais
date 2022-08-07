#include <iostream>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, resultado; 
	char op[1];
	
	printf("Digite o primeiro número da operação: ");
	scanf("%f", &num1);
	fflush(stdin);
	
	printf("Digite o Segundo número da operação: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	printf("Digite o tipo operação: \n"
	"\n Adição(+) = +"
	"\n Subtração(-) = -"
	"\n Multiplicação(x) = *"
	"\n Divisão(:) = / \n");
	gets(op);
	
	if(strcmp(op,"+")==0){
		resultado = num1 + num2;
		printf("O Resultado de sua adição é: %.2f", resultado);
	}
	if(strcmp(op,"-")==0){
		resultado = num1 - num2;
		printf("O Resultado de sua subtração é: %.2f", resultado);
	}
	if(strcmp(op,"*")==0){
		resultado = num1 * num2;
		printf("O Resultado de sua multiplicação é: %.2f", resultado);
	}
	if(strcmp(op,"/")==0){
		resultado = num1 / num2;
		printf("O Resultado de sua divisão é: %.2f", resultado);
	}
	
	
    
	return 0;
}
