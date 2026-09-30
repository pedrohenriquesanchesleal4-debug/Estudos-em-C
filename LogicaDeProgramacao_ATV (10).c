#include <stdio.h>

 int main(){
 	int idade;
 	float altura;
 	char nome[10];	
 	
 	printf("Digite sua Idade, Altura e nome: \n ");
 	scanf("%d %f %s" , &idade , &altura , &nome);
 	
 	printf("=== MEU PERFIL DE PROGRAMADOR===\n Idade: %d \n Altura: %.2f \n Nome: %s" , idade , altura , nome);
 	
 	
 	
 	
 	return 0;
 }
