#include <stdio.h>
#include <stdlib.h>

void  exc2(){
			float reais, cota;
			printf("Insira a cotacao e valor: \n");
			scanf("%f %f", &cota, &reais);
			printf ("Os %.1f reais sao %.1f dolares \n", reais, (reais/cota));
		}
void  exc3(){
			float tempC, tempF;
			printf("Insira a temperatura em C: \n");
			scanf("%f", &tempC);
			tempF = tempC * (9.0/5.0) + 32.0;
			printf("Os %.1fC sao %.2fF \n", tempC, tempF);
		}
void  exc8(){
			int s, sec, horas, min;
			printf("Insira o tempo em segundos: \n");
			scanf("%d", &s);
			horas = s/3600;
			min = (s % 3600) / 60;
			sec = s % 60;
			printf("Sao %d horas, %d minutos, %d segundos", horas, min, sec);
		}


int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio quer resolver:  2/3/8\n");
	scanf("%d", &op);
	
	switch(op) {
	
	case 2:
		exc2();
	break;
	
	case 3:
		exc3();
	break;
	
	case 8:
		exc8();
	break;
}
	return 0;
}
