#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

// Exercício 1	
	int inicio, fim, passo;
	printf("Digite o valor inicial, final e o passo respectivamente: ");
	scanf("%d %d %d", &inicio, &fim, &passo);
		
	if (passo > 0 && inicio <= fim) {
		while (inicio <= fim) {
			printf("%d \n", inicio);
			inicio = inicio + passo; 
		}
	}

//Exercício 3
	int n, l=0;
	printf("\nDigite o numero de linhas: ");
	scanf("%d", &n);
	
	int triangulo[n][n];
	
	while (l<n){
		int c = 0;
		while (c<=l){
			if (c == 0 || l == c){
				triangulo [l][c] = 1;
			} else{
				triangulo [l][c] = triangulo [l-1][c] + triangulo [l-1][c-1];
			}
			printf("%d ", triangulo [l][c]);
			c++;
		}
		printf("\n");
		l++;
	}	
	
	return 0;
}
