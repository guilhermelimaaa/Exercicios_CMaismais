#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char sexo[1];
	float h;
	
	puts("Digite a altura: ");
	scanf("%f", &h);
	fflush(stdin);
	
	puts("Digite M para Masculino e F para Feminino: ");
	gets(sexo);
	fflush(stdin);
	
	if(strcmp(sexo,"M")==0){
		printf("Seu peso ideal é M %f" , (72.7*h)-58);
	}else{
		printf("Seu peso ideal é F %f" , (62.7*h)-44.7);
	}
	
	
	return 0;
}
