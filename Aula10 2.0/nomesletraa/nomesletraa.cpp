#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char nome[30];
int letraa, c;


int main(int argc, char** argv) {
	
	printf("Digite o seu nome: ");
    gets(nome);
    
    for(c=0;c<=30;c++){
    	 
      if(nome[c]== 'a' || nome[c] == 'A' ){
        letraa++;
      }
	}
    
  
    
    printf("Numero de 'A': %i", letraa);
    	
	
    
    
	
	return 0;
}
