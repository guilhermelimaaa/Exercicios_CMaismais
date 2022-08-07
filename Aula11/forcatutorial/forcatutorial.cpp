#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char chave[30], dica[30], letra[1], vetor[30], pos[20];
int tam, cont, acertou, errou, loop, var, var2;

void inicio(){
	
	printf("Digite a palavra do desafio: ");
	gets(chave);
	
	tam = strlen(chave);
	
	printf("Digite a dica: ");
	gets(dica);
	
	system("cls");
	
	printf("_______     %s\n", dica);
	
	for(int j=0; j<tam;j++){
		printf(" __ ");
	}
}

void alfabeto(){
	
	for(int m=0;m<tam;m++){
		switch(chave[m]){
			case 'a': vetor[m] = 'a';
			break;
			case 'b': vetor[m] = 'b';
			break;
			case 'c': vetor[m] = 'c';
			break;
			case 'd': vetor[m] = 'd';
			break;
			case 'e': vetor[m] = 'e';
			break;
			case 'f': vetor[m] = 'f';
			break;
			case 'g': vetor[m] = 'g';
			break;
			case 'h': vetor[m] = 'h';
			break;
			case 'i': vetor[m] = 'i';
			break;
			case 'j': vetor[m] = 'j';
			break;
			case 'k': vetor[m] = 'k';
			break;
			case 'l': vetor[m] = 'l';
			break;
			case 'm': vetor[m] = 'm';
			break;
			case 'n': vetor[m] = 'n';
			break;
			case 'o': vetor[m] = 'o';
			break;
			case 'p': vetor[m] = 'p';
			break;
			case 'q': vetor[m] = 'q';
			break;
			case 'r': vetor[m] = 'r';
			break;
			case 's': vetor[m] = 's';
			break;
			case 't': vetor[m] = 't';
			break;
			case 'u': vetor[m] = 'u';
			break;
			case 'v': vetor[m] = 'v';
			break;
			case 'w': vetor[m] = 'w';
			break;
			case 'x': vetor[m] = 'x';
			break;
			case 'y': vetor[m] = 'y';
			break;
			case 'z': vetor[m] = 'z';
			break;
			
			
		}
	}
}



int main(int argc, char** argv) {
	
	inicio();
	alfabeto();
	
	printf("Digite uma letra: ");
	gets(letra);
	cont++;
	
	while(loop<tam){
		for(int n=0;n<tam;n++){
			if(vetor[n]==letra[0]){
				pos[n]=letra[0];
				acertou++;
			}else{
				errou++;
			}
		}
		
		for(int p=0;p<tam;p++){
			if(pos[p]==0){
				printf(" __ ");
			}else{
				printf(" %c ", pos[p]);
				loop++;
			}
		}
		
		if(acertou==tam){
			
		}else{
			
		}
		
		printf("Digite uma letra: ");
	    gets(letra);
	    cont++;
		
		loop++;	
	}
	
	printf
	return 0;
}
