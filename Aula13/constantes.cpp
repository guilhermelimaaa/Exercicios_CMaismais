#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a=0, b=0, notas[4] = {5,7,6,8};

void soma(int a, int b){
	printf("%i \n", a+b);
}

int mult(int a, int b){
	return a*b;
}
//void consultaProduto(int id){
//}

int mostraNota(int nota){
	for(int i=0;i<4;i++){
		if(notas[i]==nota){
			return notas[i];
			break;
		}else{
			return 0;
		}
	}
}

int mostraVetor(int vet[], int tam){
	for(int i=0;i<tam;i++){
		printf("%i \n", vet[i]);
	}
}

int main(int argc, char** argv) {

//soma(10,5);
//consultaProdutos(1010);

//printf("%i \n", a+b);
//printf("Digite a nota: ");
//scanf("%i", &a);
//printf("%i \n", mostraNota(a));

mostraVetor(notas,4);

return 0;
	
}
