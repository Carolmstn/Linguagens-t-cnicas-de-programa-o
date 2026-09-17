#include <stdio.h> 
#include <stdlib.h>

int main() {

//exercício 1 

  int a,b,c,d,aux;

  printf("Digite 4 valores: ");
  scanf("%d %d %d %d, &a, &b, &c, &d);

  aux = a;
  d = b;
  a = c;
  c = d;
  b = aux;

  printf("Uma possivel permutacao entre eles e %d %d %d %d\n", a, b, c, d);

//exercício 2 

    float valor_empresa, preco_acao, vpa, pvp;
    int quantidade;

    printf("Valor patrimonial da empresa: ");
    scanf("%f", &valor_empresa);

    printf("Quantidade de acoes: ");
    scanf("%d", &quantidade);

    printf("Preco atual da acao: ");
    scanf("%f", &preco_acao);
  
    if (quantidade <= 0 || valor_empresa == 0) {
        printf("Valores invalidos.\n");
    } else {
        vpa = valor_empresa / quantidade;
        pvp = preco_acao / vpa;

        printf("VPA: %.2f\n", vpa);
        printf("P/VP: %.2f\n", pvp);

        if (pvp < 0) {
            printf("Pessima\n");
        } else if (pvp < 0.8) {
            printf("Otima\n");
        } else if (pvp <= 1.2) {
            printf("Indiferente\n");
        } else if (pvp <= 2.0) {
            printf("Boa\n");
        } else {
            printf("Ruim\n");
        }
    }

    return 0;
}
