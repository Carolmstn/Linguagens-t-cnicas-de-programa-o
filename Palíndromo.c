#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char palavra[30];
	int i, n;
	int palindromo = 1;
	printf("Digite uma palavra: ");
	scanf("%s", &palavra); 

	for (i = 0; i < 30 && palavra[i] != '\0'; i++)
		printf("%d", i);
		
	for (n = i - 1, i = 0; i < n; i++, n--){
		if (palavra[i] == palavra[n]){
			palindromo = 1;
			continue;
		}else{
			palindromo = 0;
			break;
		}
	}
	
	if (palindromo == 1){
	 	printf("\ne um palindromo");
	}else {
		printf("\nnao e um palindromo");
	}

	return 0;
}
