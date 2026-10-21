#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 100

int main(int argc, char *argv[]) {
    int i, j, aux;

    // Exercicio 1

    int vetor1[TAM];
    i = 0;

    printf("--- EXERCICIO 1: ORDEM INVERSA E ORDENACAO ---\n");
    printf("Digite %d numeros inteiros:\n", TAM);

    while (i < TAM) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
        i++;
    }

    printf("\nNumeros na ordem inversa da leitura:\n");
    i = TAM - 1;
    while (i >= 0) {
        printf("%d ", vetor1[i]);
        i--;
    }

    i = 0;
    while (i < TAM - 1) {
        j = 0;
        while (j < TAM - i - 1) {
            if (vetor1[j] < vetor1[j + 1]) {
                aux = vetor1[j];
                vetor1[j] = vetor1[j + 1];
                vetor1[j + 1] = aux;
            }
            j++;
        }
        i++;
    }

    printf("\n\nNumeros ordenados do maior para o menor:\n");
    i = 0;
    while (i < TAM) {
        printf("%d ", vetor1[i]);
        i++;
    }
    printf("\n\n");

    // Exercicio 2

    double valor;
    double mantissa;
    int expoente = 0;

    printf("--- EXERCICIO 2: NOTACAO CIENTIFICA ---\n");
    printf("Digite um valor real positivo: ");
    scanf("%lf", &valor);

    while (valor <= 0) {
        printf("Valor invalido! O numero deve ser maior que zero.\n");
        printf("Digite novamente: ");
        scanf("%lf", &valor);
    }

    mantissa = valor;

    while (mantissa >= 10.0) {
        mantissa = mantissa / 10.0;
        expoente++;
    }

    while (mantissa < 1.0) {
        mantissa = mantissa * 10.0;
        expoente--;
    }

    printf("Valor em notacao cientifica: %.4lf x 10^(%d)\n\n", mantissa, expoente);

    // Exercicio 3

    int n;
    int binario[32];
    i = 0;

    printf("--- EXERCICIO 3: CONVERSAO PARA BINARIO ---\n");
    printf("Digite um numero inteiro de 1 a 64: ");
    scanf("%d", &n);

    while (n <= 0 || n > 64) {
        printf("Valor invalido! O numero deve estar entre 1 e 64.\n");
        printf("Digite novamente: ");
        scanf("%d", &n);
    }

    printf("O numero %d em binario eh: ", n);

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    i = i - 1;
    while (i >= 0) {
        printf("%d", binario[i]);
        i--;
    }
    printf("\n\n");

    // Exercicio 4

    int m, x;

    printf("--- EXERCICIO 4: MAIOR DE 10 VALORES ---\n");
    printf("Digite 10 valores inteiros:\n");

    scanf("%d", &m);

    i = 1;
    while (i < 10) {
        scanf("%d", &x);
        m = (m + x + abs(m - x)) / 2;
        i++;
    }

    printf("%d eh o maior\n\n", m);

    // Exercicio 5 

    int vetor5[TAM];
    int primo;
    int d;

    printf("--- EXERCICIO 5: PARIDADE E PRIMALIDADE ---\n");
    printf("Digite %d numeros inteiros:\n", TAM);

    i = 0;
    while (i < TAM) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor5[i]);
        i++;
    }

    printf("\nResultados:\n");
    i = 0;
    while (i < TAM) {
        printf("%d: ", vetor5[i]);

        if (vetor5[i] % 2 == 0) {
            printf("par");
        } else {
            printf("impar");
        }

        primo = 1;
        if (vetor5[i] < 2) {
            primo = 0;
        }

        d = 2;
        while (d < vetor5[i] && primo == 1) {
            if (vetor5[i] % d == 0) {
                primo = 0;
            }
            d++;
        }

        if (primo == 1) {
            printf(" e primo\n");
        } else {
            printf(" e nao primo\n");
        }
        i++;
    }
    printf("\n");

    // Exercicio 6

    double x1[10], y1[10];
    double x2[10], y2[10];
    double distancia;

    printf("--- EXERCICIO 6: DISTANCIA EUCLIDIANA ---\n");
    printf("Digite as coordenadas para 10 pares de pontos:\n\n");

    i = 0;
    while (i < 10) {
        printf("Par de Pontos %d\n", i + 1);
        printf("p1 -> Digite X1 e Y1: ");
        scanf("%lf %lf", &x1[i], &y1[i]);

        printf("p2 -> Digite X2 e Y2: ");
        scanf("%lf %lf", &x2[i], &y2[i]);
        printf("\n");
        i++;
    }

    printf("RESULTADOS DAS DISTANCIAS\n");
    i = 0;
    while (i < 10) {
        distancia = sqrt(pow(x2[i] - x1[i], 2) + pow(y2[i] - y1[i], 2));
        printf("Distancia entre p1(%.2lf, %.2lf) e p2(%.2lf, %.2lf) = %.4lf\n",
               x1[i], y1[i], x2[i], y2[i], distancia);
        i++;
    }
    printf("\n");

    // Exercicio 7 

    int vetor7[TAM];
    int tem_consecutivo = 0;
    int em_sequencia = 0;

    printf("--- EXERCICIO 7: NUMEROS CONSECUTIVOS ---\n");
    printf("Digite %d numeros inteiros para analisar:\n", TAM);

    i = 0;
    while (i < TAM) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor7[i]);
        i++;
    }

    printf("\nValores em ordem consecutiva encontrados:\n");

    i = 0;
    while (i < TAM - 1) {
        if (vetor7[i + 1] == vetor7[i] + 1) {
            if (em_sequencia == 0) {
                printf("%d -> ", vetor7[i]);
                em_sequencia = 1;
                tem_consecutivo = 1;
            }
            printf("%d ", vetor7[i + 1]);
        } else {
            if (em_sequencia == 1) {
                printf("\n");
                em_sequencia = 0;
            }
        }
        i++;
    }
    printf("\n");

    if (tem_consecutivo == 0) {
        printf("Nenhum numero em ordem consecutiva foi encontrado no vetor.\n");
    }
    printf("\n");

    system("pause");
    return 0;
}
