#include <iostream>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    
	int op, qtd;
	char nome[30], cpf[11], tel[11], dados[200], nomecurso[35], tempocurso[12], areacurso[20];
	
		FILE *arquivo; 
	
		void criarMenu(){
		
		system("cls"); //vai limpar o menu 
    	system("color 0c"); // cor do cmd
		puts("====== Menu ======");
    	puts("[1] Cadastro de alunos");
    	puts("[2] Listagem de alunos");
    	puts("[3] Cadastro de cursos");
    	puts("[0] Sair");
    	scanf("%i",&op);
	}
	
	void insereDados(){
			system("cls");
			puts("Digite a quantidade de alunos: ");
			scanf("%i", &qtd);
			int i=0;
			fflush(stdin);
		    
		while(i<qtd){
			arquivo = fopen("Alunos.txt", "a");
			system("cls");
          	puts("Cadastro de alunos");
          	system("Color F0");
          	puts("Digite seu nome: ");
          	gets(nome);
          	puts("Digite seu cpf: ");
          	gets(cpf);
          	puts("Digite seu telefone: ");
          	gets(tel);
          	fprintf(arquivo, "%s" "\n",strcat(strcat(strcat(nome,", "),strcat(cpf,", ")),tel));
          	fclose(arquivo);
          	fflush(stdin);
          	i++;
          }
	}
    


int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	
	 do{
        
        criarMenu();
        
        switch(op){
          case 1:
          	insereDados();
          break;
          
          case 2:
          	system("cls");
          	puts("Listagem de alunos");
          	system("Color F0");
          	system("pause");
          break;
          
          case 3:
          	arquivo = fopen("Cursos.txt", "a");
			system("cls");
          	puts("Cadastro de cursos");
          	system("Color F0");
          	puts("Digite o nome do curso: ");
          	gets(nome);
          	puts("Digite o tempo do curso: ");
          	gets(cpf);
          	puts("Digite a area do curso: ");
          	gets(tel);
          	fprintf(arquivo, "%s" "\n",strcat(strcat(strcat(nomecurso,", "),strcat(tempocurso,", ")),areacurso));
          	fclose(arquivo);
          	system("pause");
			break;
          
          case 0:
          	puts("Finalizado");
          	system("pause");
          break;
          
          
    }
	
	
	}while (op!=0);
	
	return 0;
}
