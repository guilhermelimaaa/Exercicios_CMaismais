#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float valor;
int soma=0;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Digite um numero para somar e negativo para sair \n");
		scanf("%f", &valor);
		
		soma = (soma + valor);
		
		printf("O Resultado da soma é %i \n", soma);
	
	}while(soma>-1);
  
	return 0;
}
