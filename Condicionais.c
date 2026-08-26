#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

//condiconal	
	
int a,b,c,r;
	
	printf("Entre com os valores para A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b){
		r = a;
	}
	else {
		r = b;
	}
	if (c > r){
		r = c;
	}
	
	printf("%d eh o maior\n", r);
	
// par e impar
	
	int d;
	
	printf("\nEntre com o valor para A: ");
	scanf("%d", &d);
	
	if (d % 2 == 0){
		printf ("%d eh par", d);
	}
	else{
		printf("%d eh impar", d);
	}
	
	return 0;
}
