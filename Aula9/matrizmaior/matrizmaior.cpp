#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i=0, j=0, matriz[2][3];

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	

	for(i=0;i<2;i++){
		printf("\n\t");
		for(j=0;j<3;j++){
			printf("\t%i", matriz[i][j]);
		}
	}
	
	
	return 0;
}
