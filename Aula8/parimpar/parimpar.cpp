#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;

int main(int argc, char** argv){
	
	puts("Digite um numero: ");
	scanf("%i", &i);
	
	if(i%2==0){
		puts("PAR \n");
	}else{
		puts("IMPAR \n");
	}
	return 0;
}
