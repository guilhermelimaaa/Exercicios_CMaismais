#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c;

int main() {
     	
	setlocale(LC_ALL,"Portuguese");
	
	do{
		puts("Olá");
		c++;
	}while(c<50);
	
	return 0;
}
