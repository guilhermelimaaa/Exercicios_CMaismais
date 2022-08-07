#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i=0, qtdNum, par[200], impar[200], posi=0, posp=0, numUsuario;



int main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a quantidade de números desejados: \n");
	scanf("%i", &qtdNum);
	
	do{
		printf("Digite o número desejado: \n");
		scanf("%i", &numUsuario);
		
		if(numUsuario%2==0){
		   par[posp] = numUsuario;
		   posp++;
		}else{
			impar[posi] = numUsuario;
			posi++;
		}
		
	    i++;
		}while(i < qtdNum);
	
	printf("\n Os seguintes números digitados são ímpares: \n");
	 for(posi=0;posi<i;posi++){
	 	printf("\t %i", impar[posi]);
	    }
	printf("\n Os seguintes números digitados são pares: \n");
		 for(posp=0;posp<i;posp++){
	 	printf("\t %i", par[posp]);
         }
	return 0;
}
