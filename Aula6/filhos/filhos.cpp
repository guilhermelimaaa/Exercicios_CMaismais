#include <iostream>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int qtdfilhos, iddfilhos, maior=0, menor=0, i=0;


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a quantidade de filhos: \n");
	scanf("%i", &qtdfilhos);
	
	while(i<qtdfilhos){
		printf("Digite a idade do filho %i \n", i+1);
		scanf("%i", &iddfilhos);
		i++;
		
		if(iddfilhos>=18){
		    maior++;	
		}else{
			menor++;
		}
		
	}
	
	printf("Filhos maiores %i \n", maior);
	printf("Filhos menores %i \n", menor);
	
	return 0;
}
