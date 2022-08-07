#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int qtdpessoas, pessoas, comp1, comp2, idade, novo, velho;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a quantidade de pessoas (Mínimo 2): ");
	scanf("%i", &qtdpessoas);
	
	while(pessoas<qtdpessoas){
		printf("Digite a idade da pessoa", pessoas);
		scanf("%i", &idade);
		pessoas++;
	}
	
	
	
	return 0;
}
