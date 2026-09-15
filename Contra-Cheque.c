#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
	if (salario <= 1412.00) return salario * 0.075;
	else if (salario <= 2666.68) return salario * 0.09;
	else if (salario <= 4000.00) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf (float salario){ 
	
	float base_calculo = salario - calc_inss(salario);
	
	if (base_calculo <= 2259.20) return salario * 0;
	else if (base_calculo <= 2826.65) return salario * 0.075 - 169.44;
	else if (base_calculo <= 3751.05) return salario * 0.15 - 381.44;
	else if (base_calculo <= 4664.68) return salario * 0.225 - 662.77;
	else return base_calculo * 0.275 - 896.00;
}

int main(int argc, char *argv[]) {
	
	int horas;
	float valor, salario_bruto, desconto, imposto, liquido;
	
	printf("Digite o valor da sua hora e a quantidade trabalhada: ");
	scanf("%f %d", &valor, &horas);
	
	salario_bruto = horas * valor;
	
	desconto = calc_inss(salario_bruto);
	
	imposto = calc_irpf(salario_bruto);
	
	liquido = salario_bruto - desconto - imposto;
	
	printf("======================================================\n");
	printf(" RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
	printf("======================================================\n");
	printf(" Salario Bruto (Horas x Valor): R$ %.2f\n", salario_bruto);
	printf(" (-) Desconto INSS:             R$ %.2f\n", desconto);
	printf(" (-) Desconto IRPF:             R$ %.2f\n", imposto); 
	printf("------------------------------------------------------\n");
	printf(" LIQUIDO A RECEBER:             R$ %.2f\n", liquido);
	printf("======================================================\n");

	return 0;
}
