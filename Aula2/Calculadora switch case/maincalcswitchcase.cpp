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
	scanf("%s",&op[0]);
	
	switch(op[0]){
		case '+':
		resultado = num1 + num2;
		printf("O Resultado de sua adi��o �: %.2f", resultado);
		break;
		
	case '-' :
		resultado = num1 - num2;
		printf("O Resultado de sua subtra��o �: %.2f", resultado);
		break;
		
	case '*' :
		resultado = num1 * num2;
		printf("O Resultado de sua multiplica��o �: %.2f", resultado);
		break;
		
	case '/' :
		resultado = num1 / num2;
		printf("O Resultado de sua divis�o �: %.2f", resultado);
		break;
		
	}
    
	return 0;
}
