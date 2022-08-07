#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero[3][3], l=0, c=0, par=0, impar=0;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	for(l=0;l<3;l++){
	    for(c=0;c<3;c++){
			printf("Digite um numero: ");
		 	scanf("%i", &numero[l][c]);
		 	 
			  if(numero[l][c]%2==0){
		      par++;
	          }else{
		      impar++;
	          }
		}  
	}
	
	
	printf("\n Valor inicial \n");
	
	for(l=0;l<3;l++){
	    for(c=0;c<3;c++){
	   		printf("\t %i", numero[l][c]);
	   } 	
	   printf("\n");
	}
	
	printf("Quantidade de numeros pares: %i \n", par);
	printf("Quantidade de numeros impares: %i \n", impar);
	
	
	
	return 0;
}
