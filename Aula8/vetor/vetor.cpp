#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i, num[200], qtdNum, pos;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	puts("Digite a quantidade: ");
	scanf("%i", &qtdNum);
	
	do{
		printf("Digite o n�mero %i \n", i+1);
		scanf("%i", &num[i]);
		i++;
	}while(i<qtdNum);
	
	printf("Digite a Posi��o: \n");
	scanf("%i", &pos);
	
	puts("======= Resumo =======");
	printf("N�mero da posi��o: \n");
	printf("%i\n", num[pos]);
	
	
	
	
	
	return 0;
}
