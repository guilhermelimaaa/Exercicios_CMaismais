#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char nomes[10];
int i;

int main(int argc, char** argv) {
	printf("Digite o seu nome: ");
	scanf("%s", &nomes);
	
	for(i=0;i<10;i++){
		printf("%c ", nomes[i]);
	}
	
	
	return 0;
}
