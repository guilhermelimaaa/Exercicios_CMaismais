#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int anonasc, idade;
	
	printf("Digite o ano que voc� nasceu: ");
	scanf("%i", &anonasc);
	
	idade = 2021 - anonasc;
	
	if(idade <= 3){
		printf("Sua idade � %i" , idade);
		printf("e voc� � um Beb�");
	}
	else if (idade <= 11){
		printf("Sua idade � %i", idade);
		printf("e voc� � uma Crian�a");
	}
	else if (idade <= 18){
		printf("Sua idade � &i", idade);
		printf("e voc� � um Adolescente");
	}
	else if (idade <= 50){
		printf("Sua idade � %i", idade);
		printf("e voc� � um Adulto");
	}
	else if (idade >= 51){
		printf("Sua idade � %i", idade);
		printf("e voc� � um Idoso");
   }
		
		
		
	
	
	return 0;
}
