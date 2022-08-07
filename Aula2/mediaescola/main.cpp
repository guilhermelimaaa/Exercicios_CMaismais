#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int qtdChuva=0;
	float totalChuva=0;
	
	puts("Digite a quantidade de chuva");
	scanf("%i", &qtdChuva);
	
	totalChuva = qtdChuva * 25.4;
	
	if(totalChuva>60){
	    puts("Choveu muito");
	}else{
		puts("Choveu pouco");
	}
	
	return 0;
}
