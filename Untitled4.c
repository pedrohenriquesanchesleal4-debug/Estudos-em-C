#include <stdio.h>

int main(){
	char nome[50];
	int idade;
	printf("Digite seu nome e idade: \n");
	scanf("%s %d" , &nome , &idade);
	
	if(idade <=10){
		printf("Ola %s Seu plano custa 30 reais" , nome);
	}
	else if(idade > 10 && idade <= 29){
		printf(" Ola %s Seu plano custa 60 reais" , nome);
	}
	else if(idade > 29 && idade <= 45){
		printf(" Ola %s Seu plano custa 120 reais" , nome);
	}
	else if(idade > 45 && idade <= 59){
		printf(" Ola %s Seu plano custa 150 reais" , nome);
	}
	else if(idade > 59 && idade <= 65){
		printf("Ola %s Seu plano custa 250 reais" , nome);
	}
	else{
		printf("Ola %s Seu plano custa 400 reais" , nome);
	}
	return 0;
}
