#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char desafio[30], dica[15], letra[1], traco[1];
int erros=0, c1, c2, tmPalavra, subst;



int main(int argc, char** argv) {
	
	printf("Digite a palavra do desafio: \n");
	gets(desafio);
	
	printf("Digite a dica do desafio: \n");
	gets(dica);
	
    tmPalavra = strlen (desafio);
    
    for(c1=0;c1<tmPalavra;c1++){
    	printf(" ___ ");
    }
    
        printf("\n\nDigite uma letra: \n");
    scanf("%c", &letra);
	
    
   for(c2=0;c2<tmPalavra;c2++){
    	if(letra[0] == desafio[c2]){
        	printf("%c",letra[0]);
		}
	}
	
	
	
	return 0;
}
