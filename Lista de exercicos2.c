#include <stdio.h>
#include <stdlib.h>
# define ano_atual 2026
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//exercício 1
	int idade, nascimento;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade); 
	
	nascimento = ano_atual - idade;
	
	printf("Voce nasceu em %d\n", nascimento);
	
	//exercíco 2
	int velocidade_1, velocidade_2;
	
	printf("\nDigite sua velocidade em km/h: ");
	scanf("%d", &velocidade_1);
	
	velocidade_2 = velocidade_1 / 3.6;
	
	printf("Essa velocidade em m/s e %d\n", velocidade_2);
	
	//exercício 3
	float real, dolar;
	
	printf("\nDigite o valor em reais: ");
	scanf("%f", &real);
	
	dolar = real / 5.17;
	
	printf("%.1f em dolares e equivalente a %.1f\n", real, dolar);
	
	//exercício 4
	float C, F;
	
	printf("\nQual a temperatura em °C: ");
	scanf("%f", &C);
	
	F = C*(9.0/5.0)+32.0;
	
	printf("Sua temperatura em °F e igual a %.2f\n", F);
	
	return 0;	
}
