#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
	if (salario <= 1412.00) return salario * 0.075;
	else if (salario <= 2666.68) return salario * 0.09;
	else if (salario <= 4000.00) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf (float salario){
	if (salario - calc_inss(salario) <= 2259.20) return salario * 0;
	else if (salario - calc_inss(salario) <= 2826.65) return salario * 0.075 - 169.44;
	else if (salario - calc_inss(salario) <= 3751.05) return salario * 0.15 - 381.44;
	else if (salario - calc_inss(salario) <= 4664.68) return salario * 0.225 - 662.77;
	else return salario - calc_inss(salario) * 0.275 - 896.00;
}

int main(int argc, char *argv[]) {
	
	int horas;
	float salario, salario_b, desconto, imposto, valor, salario_bruto, liquido;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor da sua hora e a quantidade trabalhada: ");
	scanf("%f %d", &valor, &horas);
	
	salario_b = horas * valor;
	
	desconto = calc_inss(salario);
	
	imposto = calc_irpf(salario_bruto);
	
	liquido = salario - desconto - imposto;
	
	printf("======================================================\n   RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n======================================================\n  Salario Bruto (Horas x Valor):   R$ %f\n  (-) Desconto INSS:                R$ %f\n  (-) Desconto IRPF:                R$ %f\n ------------------------------------------------------\n   LIQUIDO A RECEBER:               R$ %f\n======================================================", salario_b, desconto, imposto, liquido);

	return 0;
}
