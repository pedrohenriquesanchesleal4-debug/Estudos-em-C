#include <stdio.h>

int main(){
	float salario;
	float calculo;
	
	
	printf("Digite aqui seu salario: \n");
	scanf("%f" , &salario);
	
	if(salario <=600.00){
		printf("Voce esta isento de descontos seu salario eh: %.2f \n" , salario);
	}
	else if(salario >=600 && salario <= 1200){
		calculo = (salario * 20) / 100;
		salario = salario - calculo;
		printf("Voce foi descontado em 20 por cento seu salario agora eh: %.2f" , salario);
	}
		else if(salario >=1200 && salario <= 2000){
		calculo = (salario * 25) / 100;
		salario = salario - calculo;
		printf("Voce foi descontado em 25 por cento seu salario agora eh: %.2f" , salario);
	}
	else{
		calculo = (salario * 30) / 100;
		salario = salario - calculo;
		printf("Voce foi descontado em 30 por cento seu salario agora eh %.2f" , salario);
	}
	
	
	
	return 0;
}
