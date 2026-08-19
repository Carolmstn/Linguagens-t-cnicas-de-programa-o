#include <stdio.h>
#include <stdlib.h>
# define ano_atual 2026
#define pi 3.141529

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

// exercíco 5 
float G, R;

printf("\nEscolha um angulo: ");
scanf("%f", &G);

R = G * pi / 180;

printf("Seu angulo em radianos e %.2f\n", R);

//exercício 6 
int numero, antecessor, sucessor;

printf("\nDigite um numero: ");
scanf("%d", &numero);

antecessor = numero - 1;
sucessor = numero + 1; 

printf("O antecessor e sucessor sao respectivamente %d e %d\n", antecessor, sucessor);

//exercício 7
int primeiro, segundo, terceiro;

printf("\nO premio de 780.000 de um concurso foi divido entre tres ganhadores");

primeiro = 780000 * 0.46;
segundo = 780000 * 0.32;
terceiro = 780000 * 0.22;

printf("\nO primeiro ganhador recebera %d", primeiro);
printf("\nO segundo ganhador recebera %d", segundo);
printf("\nO terceiro ganhador recebera %d\n", terceiro);

//exercício 8 
int total, horas, minutos, segundos;

printf("\nDigite seu tempo em segundos: ");
scanf("%d", &total);

 horas = total / 3600;
 minutos = (total % 3600) / 60;
 segundos = total % 60;
 
 printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
 
 //exercício 9 
 float tempo, velocidade, distancia, litros;
 
 printf("\nDiga o tempo, em horas, que gastara na viagem: ");
 scanf("%f", &tempo);
 printf("Agora sua velocidade media em km/h: ");
 scanf("%f", &velocidade);
 
 distancia = velocidade * tempo; 
 litros = distancia / 12;
 
 printf("A quantidade de litros necessaria para essa viagem e %.3f\n", litros);
 
//exercício 10
int A, B, D, maiorAB, maior;

printf("\nDigite tres valores: ");
scanf("%d %d %d", &A, &B, &D);

maiorAB = (A + B + abs(A - B)) / 2;

maior = (maiorAB + D + abs(maiorAB - D)) / 2;

printf("%d eh o maior", maior);
 
	return 0;	
}
