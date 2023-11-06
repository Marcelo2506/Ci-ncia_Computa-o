//Importa��o da biblioteca
#include <stdio.h>

//Inicializando o programa
int main(){
	
	//Decretando as vari�veis que ser�o utilizadas no problema
	float potencias[20]; //variavel onde ser�o guardados os registros e "[20]" para determinar a quatidade de valores que ser�o armazenados.
	
	float ValorMaior; //vari�vel que ser� utilizada para determinar o maior valor registrado
	
	float ValorMenor; //Vari�vel que ser� utilizada para determinar o menor valor registrado
	
	int i; //vari�vel que ser� utilizada para usarmos a estrutura de repeti��o for
	
	
	//Estrutura de repeti��o criado para preenchimento de valores
	for (i=0;i<20;i++){
		printf("\nDigite o valor %d registrado no dia:",i+1);
		scanf("%f",&potencias[i]);
	}
	
	
	//Abaixo iremos declarar como funcionar� o sistema de determina��o do maior valor
	ValorMaior = potencias[0];
	
	for(i=0;i<20;i++){
		if(potencias[i]<potencias[i+1]){
			ValorMaior = potencias[i+1];
		}
	}
	
	
	//Abaixo iremos declarar como funcionar� o sistema de determina��o do menor valor
	ValorMenor = potencias[0];
	for (i-0;i<20;i++){
		if(potencias[i]>potencias[i+1]){
			ValorMenor = potencias[i+1];
		}
	}
	
	
	//Abaixo retornaremos o maior e o menor valor registrados no programa.		
	printf("\nA menor potencia registrada no dia foi %.2f",ValorMenor);
	printf("\nA maior potencia registrada no dia foi %.2f",ValorMaior);
	
	
	//return(0) para finalizarmos o programa.
	return(0);
}
