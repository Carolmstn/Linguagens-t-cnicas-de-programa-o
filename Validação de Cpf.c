#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Validação de CPF

	int CPF1,CPF2,CPF3,CPF4,CPF5,CPF6,CPF7,CPF8,CPF9,CPF10,CPF11, primeiro, segundo;
	
	printf("Digite seu CPF sem as separacoes: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &CPF1, &CPF2, &CPF3, &CPF4, &CPF5, &CPF6, &CPF7, &CPF8, &CPF9, &CPF10, &CPF11);
	
	primeiro = ((CPF1 * 10 + CPF2 * 9 + CPF3 * 8 + CPF4 * 7 + CPF5 * 6 + CPF6 * 5 + CPF7 * 4 +CPF8 * 3 + CPF9 * 2) *10) %11;
	if (primeiro == 10){
		primeiro = 0;
	}
	
	segundo = ((CPF1 * 11 + CPF2 * 10 + CPF3 * 9 + CPF4 * 8 + CPF5 * 7 + CPF6 * 6 + CPF7 * 5 +CPF8 * 4 + CPF9 * 3 + primeiro * 2) *10) %11;
	if (segundo == 10){
		segundo = 0;
	}
	
	if (primeiro == CPF10 && segundo == CPF11){
		printf("CPF valido");
	}
	else {
		printf("CPF invalido\n");
	}
	
	printf ("\nOs ultimos digitos sao %d e %d respectivamente", primeiro, segundo);
	
	return 0;
}
