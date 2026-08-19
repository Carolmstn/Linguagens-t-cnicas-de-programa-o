#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// exercício 1
	int primeiro, segundo, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo; 
	segundo = aux;
	
	printf("%d \n%d", primeiro, segundo );
	
	// exercício 2
 	double numero, mantissa;
    int expoente;

    printf("\nDigite um numero preferencialmente grande: ");
    scanf("%lf", &numero);

	//não sei como funciona, apenas deixe - sujeito a espancamento
    expoente = (int)floor(log10(fabs(numero)));
    mantissa = numero / pow(10, expoente);

    printf("%.1lfe^%d\n", mantissa, expoente);

	// execício 3 
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, bit_1;
	
	printf("Entre com um valor para a conversao: ");
	scanf("%d", &n);
	
	bit_64 = n % 2;
	resultado = n / 2;
	
	bit_32 = resultado % 2;
	resultado = resultado / 2;
	
	bit_16 = resultado % 2;
	resultado = resultado / 2;
	
	bit_8 = resultado % 2;
	resultado = resultado / 2;
	
	bit_4 = resultado % 2;
	resultado = resultado / 2;
	
	bit_2 = resultado % 2;
	resultado = resultado / 2;
	
	bit_1 = resultado % 2;
	resultado = resultado / 2;
	
	printf("O numero %d em binario e igual a %d%d%d%d%d%d%d", n, bit_1, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
    // exercício 4
    int salario_fixo, total_em_vendas;
    float salario_total;
    
    printf("\nDigite seu salario fixo: ");
    scanf("%d", &salario_fixo);
    printf("Qual foi o seu total em vendas nesse mes?: ");
    scanf("%d", &total_em_vendas);
    
    salario_total = salario_fixo + (0.15 * total_em_vendas);
    
    printf("Seu salario total e equivalente a %.2f", salario_total);
    
    // exercício 5	
    int valor_1, valor_2, valor_3, valor_4, soma, media, produto;
    
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &valor_1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor_2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor_3);
    printf("Digite o ultimo valor: ");
    scanf("%d", &valor_4);
    
    soma = valor_1 + valor_2 + valor_3 + valor_4;
    produto = valor_1 * valor_2 * valor_3 * valor_4;
    media = (valor_1 + valor_2 + valor_3 + valor_4)/4;
    
    printf("A somas desses valores e igual a %d", soma);
    printf("\nO produto desses valores e igual a %d", produto);
    printf("\nA media desses valores e igual a %d", media);

	 // execício 6
	int total_dias, anos, meses, dias, resto;

    printf("Digite sua idade em dias: ");
    scanf("%d", &total_dias);

    anos = total_dias / 365;
    resto = total_dias % 365;

    meses = resto / 30;
    dias = resto % 30;

    printf("Voce tem %d anos, %d meses e %d dias de vida.\n", anos, meses, dias);
    
    // excício 7
    double raio, volume;
    
    printf("Digite o raio de uma esfera: ");
    scanf("%lf", &raio);
    
    volume = (4 /3) * 3 * raio * raio * raio;
    printf("O volume da esfera sera de: %.3lf\n", volume);
    
    // execício 8
    double x1, y1, x2, y2, distancia; 
    
    printf("Digite x1: ");
    scanf("%lf", &x1);
    
    printf("Digite seu y: ");
    scanf("%lf", &y1);
    
	printf("Digite x2: ");
    scanf("%lf", &x2);
    
    printf("Digite seu y: ");
    scanf("%lf", &y2);
    
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //sqrt - raiz
    
    printf("A distancia entre esses dois pontos no plano e igual a %.2lf", distancia);
    
	return 0;
}
