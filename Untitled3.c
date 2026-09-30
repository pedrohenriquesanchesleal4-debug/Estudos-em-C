#include <stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade para participar da natacao: \n");
	scanf("%d" , &idade);
	
    if( idade >= 5 && idade <= 7 ){
		
		printf("Categoria infantil A sua idade eh %d" , idade);
	}
	
	else if( idade >= 8 && idade <= 10 ){
		
		printf("Categoria infaltil B sua idade eh %d" , idade);
	}
	
	else if( idade >= 11 && idade <= 13 ){
		
		printf("Categoria juvenil A sua idade eh %d" , idade);
	}
	
		else if( idade >= 14 && idade <= 17 ){
		
		printf("Categoria juvenil B sua idade eh %d" , idade);
	}
	 
	else if(idade >= 18){
		printf("Categoria Sênior sua idade eh %d " , idade);
	}
	else{
	
	printf("Nao possui idade para competir");
}

	return 0;
}
