#include <iostream>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char palavras[3][10];
int l;

int main(int argc, char** argv) {
	
	for(l=0;l<3;l++){
		printf("Digite uma palavra: \n");
		gets(palavras[l]);
	}
	printf("======= Palavras inversas ======= \n");
	for(l=2;l>=0;l--){
	  	printf("%s \n", palavras[l]);
	}
    
    return 0;
	
}
