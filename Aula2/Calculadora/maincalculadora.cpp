#include <iostream>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, resultado; 
	char op[1];
	
	printf("Digite o primeiro n�mero da opera��o: ");
	scanf("%f", &num1);
	fflush(stdin);
	
	printf("Digite o Segundo n�mero da opera��o: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	printf("Digite o tipo opera��o: \n"
	"\n Adi��o(+) = +"
	"\n Subtra��o(-) = -"
	"\n Multiplica��o(x) = *"
	"\n Divis�o(:) = / \n");
	gets(op);
	
	if(strcmp(op,"+")==0){
		resultado = num1 + num2;
		printf("O Resultado de sua adi��o �: %.2f", resultado);
	}
	if(strcmp(op,"-")==0){
		resultado = num1 - num2;
		printf("O Resultado de sua subtra��o �: %.2f", resultado);
	}
	if(strcmp(op,"*")==0){
		resultado = num1 * num2;
		printf("O Resultado de sua multiplica��o �: %.2f", resultado);
	}
	if(strcmp(op,"/")==0){
		resultado = num1 / num2;
		printf("O Resultado de sua divis�o �: %.2f", resultado);
	}
	
	
    
	return 0;
}
