#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, area;
	
	printf("Insira um raio ");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("A area de um circulo cujo raio e %.1f sera equivalente a %.3f\n", raio, area);

	printf("Agora a do trapezio\n");
	
	float b_maior, b_menor, altura, areas; 
	
	printf("Insira a base menor desejada ");
	scanf("%f", &b_menor);
	printf("Agora a da maior ");
	scanf("%f", &b_maior);
	printf("E por fim a altura ");
	scanf("%f", &altura);
	
	areas = ((b_maior * b_menor)/2 * altura);
	
	printf("A area do trapezio e %.3f", area);
	return 0;
}
