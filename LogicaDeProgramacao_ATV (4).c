#include <stdio.h>

int main(){
	float nota1;
	float nota2;
	float nota3;
	float soma;
	float media;
	
	printf("Digite sua Primeira nota: \n");
	scanf("%f" , &nota1);
	
	printf("Digite sua Segunda nota: \n");
	scanf("%f" , &nota2);
	
	printf("Digite sua Terceira nota: \n");
	scanf("%f" , &nota3);
	
	soma = nota1 + nota2 + nota3;
	
	media = soma / 3;
	
	if(media >= 9.0){
		printf(" sua media %2.f foi excelente" , media);
	}	else if ( media >= 7.5 && media < 9.0) {
			printf("Sua media %2.f foi Muito boa" , media);
		}
	    else if ( media >= 6.0 && media < 7.5)
	    printf("Sua media %2.f foi boa" , media);
	    
	    else if ( media >= 4.0 && media < 6.0)
	    printf("Sua media %2.f foi Insuficiente" , media);
	    
	    else {
	    	printf("Sua media %2.f foi Reprovado" , media);
		}
	
	return 0;
}
