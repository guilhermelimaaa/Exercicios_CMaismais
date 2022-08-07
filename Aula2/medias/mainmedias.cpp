#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: \n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if(media >= 7){
		printf("Sua media é %.2f", media);
		printf(" e você está aprovado(a) \n");
	}else{
	   printf("Sua media é %.2f", media);
	   printf(" e você está reprovado(a) \n");
	}
	system("pause");
	

	
	
	return 0;
}
