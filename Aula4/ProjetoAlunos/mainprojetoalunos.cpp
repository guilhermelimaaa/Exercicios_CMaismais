#include <iostream>
#include <string.h>

int opGeral=0, opAlunos=0, opCursos=0;

void mostraMenuGeral(){
	system("cls");
	system("color B1");
	puts("MENU");
	puts("[1] - Aluno");
	puts("[2] - Cursos");
	puts("[0] - Sair");
	scanf("%i", &opGeral);
	
}

void mostraMenuAlunos(){
	system("cls");
	system("color F0");
	puts("MENU ALUNOS");
	puts("[1] - Cadastrar");
	puts("[2] - Listar");
	puts("[0] - Sair");
	scanf("%i", &opAlunos);
	
}

void mostraMenuCursos(){
	system("cls");
	system("color F0");
	puts("MENU CURSOS");
	puts("[1] - Cadastrar");
	puts("[2] - Listar");
	puts("[0] - Sair");
	scanf("%i", &opCursos);
	
}

int main() {
	
	do{
		mostraMenuGeral();
		switch(opGeral){
			case 1:
			    puts("Entrou menu alunos");
				system("pause");
				mostraMenuAlunos();
			break;
			case 2:
				puts("Entrou menu cursos");
				system("pause");
				mostraMenuCursos();
			break;
			default:
			break;
		}
		
	}while(opGeral!=0);

return 0;
}
