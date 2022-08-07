#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
	char nome[10];
	int idade;
	
	setlocale(LC_ALL, "Portuguese"); //Configurar idioma
	system("Color 1F"); //Fundo Azul(1) e Texto Branco(F)
	printf("\n Olá Mundo \n");
	system("pause");
	system("cls");
	printf("Digite o seu nome: ");
	gets(nome); //Variavel "nome" recebe o que foi digitado
	system("cls");
	printf("Bem Vindo %s\n", nome);
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	printf("Idade: %d\n", idade);
	if(idade<18){
		printf("Menor de idade\n");
	}else{
		printf("Maior de idade\n");
	}
	system("pause");
	return 0;
}
