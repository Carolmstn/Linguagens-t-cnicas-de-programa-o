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

	return 0;
}
