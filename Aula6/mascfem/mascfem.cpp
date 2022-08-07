#include <iostream>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char sexo[1];
int pessoas, soma, i=1, masc=0, fem=0;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
    while(i<=5){
    	 
	    printf("Digite o sexo da pessoa (M para Masculino e F para Feminino) e 0 para sair \n");
		scanf("%s", &sexo);
		i++;
		
		if(strcmp(sexo,"M")==0 || strcmp(sexo,"m")==0){
        masc++;
	    }
	    	     
		if(strcmp(sexo,"F")==0 || strcmp(sexo,"f")==0){
        fem++;
	    }
	   
	    if(strcmp(sexo,"0")==0){
	    i=6;	
		}
    }

	printf("Numero de Mulheres %i \n", fem);
	printf("Numero de Homens %i \n", masc);  
	
    if(i==5){
    	printf("Máximo de 5 pessoas");
	}
	
	return 0;
	
}


