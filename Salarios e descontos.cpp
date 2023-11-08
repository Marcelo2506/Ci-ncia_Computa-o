#include <stdio.h>
#include <stdlib.h>

int main()
{
	//DECLARANDO VARIAVEIS
	float salario_brt;
	float inss,ir,salario_liq;
	
	printf("Bem vindo ao programa de calculo salarial !\n\n");
	
	printf("Digite seu salario bruto: ");
	scanf("%f",&salario_brt);
	
	//INSS
	if (salario_brt < 1693.72){
		inss = salario_brt*0.08;
	}
	else
	if (salario_brt > 1693.72 && salario_brt < 2822.90){
		inss = salario_brt*0.09;
	}
	else
	if(salario_brt > 2822.90 && salario_brt < 5646.80){
		inss = salario_brt*0.11;
	}
	else {
		inss = 621.04;
	}
	
	//IMPOSTO DE RENDA
	if (salario_brt <= 1903.98){
		ir = 0;
	}
	else
	if (salario_brt >= 1903.98 && salario_brt <= 2826.65){
		ir = salario_brt*0.075;
	}
	else
	if (salario_brt >= 2826.66 && salario_brt <= 3751.05){
		ir = salario_brt*0.15;
	}
	else
	if (salario_brt >= 3751.05 && salario_brt >= 4664.68){
		ir = salario_brt*0.225;
	}
	else
	if(salario_brt >= 4664.68){
		ir = salario_brt*0.275;
	}
	
	//calculo salario liq
	salario_liq = (salario_brt - inss) - ir;
	
	//DESCONTOS E SALARIO LIQUIDO
	printf("\nValor do INSS: %.2f",inss);
	printf("\nValor do Imposto de Renda: %.2f",ir);	
	printf("\nValor do salario liquido: %.2f", salario_liq);
	
		
	
	
	return(0);
}
