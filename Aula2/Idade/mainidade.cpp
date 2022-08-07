#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int anonasc, idade;
	
	printf("Digite o ano que você nasceu: ");
	scanf("%i", &anonasc);
	
	idade = 2021 - anonasc;
	
	if(idade <= 3){
		printf("Sua idade é %i" , idade);
		printf("e você é um Bebê");
	}
	else if (idade <= 11){
		printf("Sua idade é %i", idade);
		printf("e você é uma Criança");
	}
	else if (idade <= 18){
		printf("Sua idade é &i", idade);
		printf("e você é um Adolescente");
	}
	else if (idade <= 50){
		printf("Sua idade é %i", idade);
		printf("e você é um Adulto");
	}
	else if (idade >= 51){
		printf("Sua idade é %i", idade);
		printf("e você é um Idoso");
   }
		
		
		
	
	
	return 0;
}
