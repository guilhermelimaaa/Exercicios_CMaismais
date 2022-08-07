#include <iostream>
#define PI 3.1415
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double raio, perim;
	
	printf("\n Qual a medida do raio? ");
	scanf("%lf", &raio);
	perim = 2*PI*raio;
	printf("\n O Perímetro da circunferencia é %lf", perim);
	return 0;
}
