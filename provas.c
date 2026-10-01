#include <stdio.h>
#include <stdlib.h>

void ma_ex00()
{
	int A, B, C, D; 
    
    printf("Escreva 4 numeros inteiros (X X X X): "); 
    scanf("%d %d %d %d", &A, &B, &C, &D); 
    
    if (A % 2 == 1 && A % 5 == 0) {
        printf("%d E IMPAR E MULTIPLO DE 5\n", A); 
    }
    if (B % 2 == 1 && B % 5 == 0) {
        printf("%d E IMPAR E MULTIPLO DE 5\n", B); 
    }
    if (C % 2 == 1 && C % 5 == 0) {
        printf("%d E IMPAR E MULTIPLO DE 5\n", C); 
    }
    if (D % 2 == 1 && D % 5 == 0) {
        printf("%d E IMPAR E MULTIPLO DE 5\n", D); 
    }
}


void ma_ex01()
{
	int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
}

void ma_ex02()
{
	float valorEntrada, valorConvertido;
    int codigoOrigem, codigoDestino;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valorEntrada);

    printf("Digite o codigo da unidade de medida de origem: ");
    scanf("%d", &codigoOrigem);

    printf("Digite o codigo da unidade de medida de destino: ");
    scanf("%d", &codigoDestino);

    switch (codigoOrigem) {
        case 1: 
            if (codigoDestino == 2) { 
                valorConvertido = valorEntrada * 1.8 + 32;
                printf("\n%.2f Celsius = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
            } else if (codigoDestino == 3) { 
                valorConvertido = valorEntrada + 273.15;
                printf("\n%.2f Celsius = %.2f Kelvin\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 2: 
            if (codigoDestino == 1) { 
                valorConvertido = (valorEntrada - 32) / 1.8;
                printf("\n%.2f Fahrenheit = %.2f Celsius\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 3: 
            if (codigoDestino == 1) { 
                valorConvertido = valorEntrada - 273.15;
                printf("\n%.2f Kelvin = %.2f Celsius\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 4: 
            if (codigoDestino == 5) { 
                valorConvertido = valorEntrada / 1609.34;
                printf("\n%.2f Metros = %.6f Milhas\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 5: 
            if (codigoDestino == 4) { 
                valorConvertido = valorEntrada * 1609.34;
                printf("\n%.2f Milhas = %.2f Metros\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 8:
            if (codigoDestino == 9) { 
                valorConvertido = valorEntrada * 2.205;
                printf("\n%.2f Quilogramas = %.3f Libras\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 9: 
            if (codigoDestino == 8) { 
                valorConvertido = valorEntrada / 2.205;
                printf("\n%.2f Libras = %.3f Quilogramas\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 10: 
            if (codigoDestino == 11) { 
                valorConvertido = valorEntrada / 1.609;
                printf("\n%.2f km/h = %.3f mph\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        case 11: 
            if (codigoDestino == 10) { 
                valorConvertido = valorEntrada * 1.609;
                printf("\n%.2f mph = %.2f km/h\n", valorEntrada, valorConvertido);
            } else {
                printf("\nErro: Conversao invalida para o codigo de destino informado.\n");
            }
            break;

        default:
            printf("\nErro: Unidade de medida de origem nao existe no sistema.\n");
            break;
    }
}

void mb_ex00()
{
	int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
}

void mb_ex01()
{
	int a,b,c;
	
	printf("Escreva 3 numeros(X X X): ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b || a == c || b == c) {
        printf("Os numeros tem que ser distintos\n");
    } else {
        if (a < b && a < c) {
            if (b < c) {
                printf("%d %d %d\n", a, b, c);
            } else {
                printf("%d %d %d\n", a, c, b);
            }
        } else if (b < a && b < c) {
            if (a < c) {
                printf("%d %d %d\n", b, a, c);
            } else {
                printf("%d %d %d\n", b, c, a);
            }
        } else { 
            if (a < b) {
                printf("%d %d %d\n", c, a, b);
            } else {
                printf("%d %d %d\n", c, b, a);
            }
        }
    }
}

void mb_ex02()
{
	double valor1, valor2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    printf("Digite o codigo da operacao (1- maior que(>) 2- menor que(<) 3- igual a(==) 4- diferente de(!=)): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            if (valor1 > valor2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;
            
        case 2:
            if (valor1 < valor2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;
            
        case 3:
            if (valor1 == valor2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;
            
        case 4:
            if (valor1 != valor2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;
            
        default:
            printf("operador invalido\n");
            break;
    }
}

void na_ex00()
{
	int n1, n2, n3, n4, n5;
    int encontrou = 0;

    printf("Digite o 1o numero: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero: ");
    scanf("%d", &n2);
    printf("Digite o 3o numero: ");
    scanf("%d", &n3);
    printf("Digite o 4o numero: ");
    scanf("%d", &n4);
    printf("Digite o 5o numero: ");
    scanf("%d", &n5);

    printf("\nResultados de numeros consecutivos encontrados:\n");

    if (n2 == n1 + 1) {
        printf("%d e %d sao consecutivos\n", n1, n2);
        encontrou = 1;
    }

    if (n3 == n2 + 1) {
        printf("%d e %d sao consecutivos\n", n2, n3);
        encontrou = 1;
    }

    if (n4 == n3 + 1) {
        printf("%d e %d sao consecutivos\n", n3, n4);
        encontrou = 1;
    }

    if (n5 == n4 + 1) {
        printf("%d e %d sao consecutivos\n", n4, n5);
        encontrou = 1;
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo foi digitado na sequencia.\n");
    }
}

void na_ex01()
{
	float peso, altura, imc;

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
    printf("Classificacao: Abaixo do peso\n");
	}
	else if (imc < 25.0) {
	    printf("Classificacao: Normal\n");
	}
	else if (imc < 30.0) {
	    printf("Classificacao: Acima do peso\n");
	}
	else {
	    printf("Classificacao: Obeso\n");
	}
}

int pinoA = 6;
int pinoB = 0;
int pinoC = 0;

void moverDisco(int disco, char origem, char destino) {
    if (origem == 'A') pinoA -= disco;
    else if (origem == 'B') pinoB -= disco;
    else if (origem == 'C') pinoC -= disco;

    if (destino == 'A') pinoA += disco;
    else if (destino == 'B') pinoB += disco;
    else if (destino == 'C') pinoC += disco;

    printf("Mover disco %d de %c para %c -> Pino A: %d | Pino B: %d | Pino C: %d\n", 
           disco, origem, destino, pinoA, pinoB, pinoC);
}

void resolverHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        moverDisco(1, origem, destino);
        return;
    }
    
    resolverHanoi(n - 1, origem, auxiliar, destino);
    moverDisco(n, origem, destino);
    resolverHanoi(n - 1, auxiliar, destino, origem);
}

void na_ex02() {
    pinoA = 6; 
    pinoB = 0; 
    pinoC = 0;
    
    printf("--- ESTADO INICIAL ---\n");
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n\n", pinoA, pinoB, pinoC);
    printf("--- OPERACOES ---\n");
    
    resolverHanoi(3, 'A', 'C', 'B');
    
    printf("\n--- ESTADO FINAL ---\n");
    printf("Pino A: %d | Pino B: %d | Pino C: %d\n", pinoA, pinoB, pinoC);
}

int main() {
    int opprova, opexerc;

    printf("1- ADS N-A\n");
    printf("2- ESOFT M-A\n");
    printf("3- ESOFT M-B\n");
    printf("Escolha a prova: ");
    scanf("%d", &opprova);

    printf("\n1- Exercicio 00\n");
    printf("2- Exercicio 01\n");
    printf("3- Exercicio 02\n");
    printf("Escolha o exercicio: ");
    scanf("%d", &opexerc);

    switch (opprova)
    {
        case 1:
            switch (opexerc)
            {
                case 1:na_ex00();break;

                case 2:na_ex01();break;

                case 3:na_ex02();break;

                default: printf("Exercicio invalido!\n");break;
            }
            break;

        case 2:
            switch (opexerc)
            {
                case 1:ma_ex00();break;

                case 2:ma_ex01();break;

                case 3:ma_ex02();break;

                default:printf("Exercicio invalido!\n");break;
            }
            break;

        case 3:
            switch (opexerc)
            {
                case 1:mb_ex00();break;

                case 2:mb_ex01();break;

                case 3:mb_ex02();break;

                default:printf("Exercicio invalido!\n");break;
            }
            break;

        default:printf("Prova invalida!\n");break;
    }

    return 0;
}
