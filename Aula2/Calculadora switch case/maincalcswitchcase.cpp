#include <iostream>
#include <string.h>
#include <locale.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int i = 1;
	float num1, num2, resultado; 
	char op[i];
	
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
	scanf("%s",&op[0]);
	
	switch(op[0]){
		case '+':
		resultado = num1 + num2;
		printf("O Resultado de sua adição é: %.2f", resultado);
		break;
		
	case '-' :
		resultado = num1 - num2;
		printf("O Resultado de sua subtração é: %.2f", resultado);
		break;
		
	case '*' :
		resultado = num1 * num2;
		printf("O Resultado de sua multiplicação é: %.2f", resultado);
		break;
		
	case '/' :
		resultado = num1 / num2;
		printf("O Resultado de sua divisão é: %.2f", resultado);
		break;
		
	}
    
	return 0;
}
