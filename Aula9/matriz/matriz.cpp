#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i=0,j=0, exibir[2][3];


int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Digite um número: ");
			scanf("%i", &exibir[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
	    	printf("\t%i",exibir[i][j]);
		}
		printf("\n");
	}
	return 0;
}
