#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char palavra1[100], palavra2[100], palavra3[100];

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a palavra numero 1: ");
	scanf("%s", &palavra1);
	
	printf("Digite a palavra numero 2: ");
	scanf("%s", &palavra2);
	
	printf("Digite a palavra numero 3: ");
	scanf("%s", &palavra3);
	
	printf("======= Palavras em ordem inversa =======");
	printf("\n %s" , palavra3);
    printf("\n %s" , palavra2);
    printf("\n %s" , palavra1);
	
	return 0;
}
