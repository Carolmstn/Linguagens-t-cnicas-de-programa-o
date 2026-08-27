#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, ar, soma, subtracao, multiplicacao;
    float hp, divisao; 

    printf("Escolha dois valores: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (a > 0 && b > 0) {
        printf("Seus numeros sao positivos \n");
        
        if (a < 10 && b < 10) {
            
            if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)) {
                printf("Seus numeros sao primos \n");
                
                hp = sqrt(pow(a, 2) + pow(b, 2)); 
                ar = (a * b) / 2;
                
                printf("A hipotenusa e a area de um triangulo com essas medidas e respectivamente igual a %.3f e %d\n", hp, ar);
            } else {
                soma = a + b;
                subtracao = a - b;
                multiplicacao = a * b;
                divisao = (float)a / b; 
                
                printf("A soma, a subtracao, a multiplicacao e a divisao sao respectivamente %d, %d, %d e %.2f\n", soma, subtracao, multiplicacao, divisao);
            }
        } else {
            if (a % b == 0) {
                printf("Seus numeros sao multiplos\n");
            } else {
                printf("Seus numeros nao sao multiplos\n");
            }
        }
    } else {
        a = a * -1;
        b = b * -1;
        printf("Os inversos dos numeros sao %d e %d\n", a, b);
    }
    
    return 0;
}
