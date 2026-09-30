#include <stdio.h>

int main(){
  float produto;
  float valor;
  
  printf("Insira aqui o valor de compra do seu produto \n");
  scanf("%f" , &produto);
  
  if(produto < 20){
  	valor = (produto * 45) / 100;
  	produto = produto + valor;
  	
  	printf("Seu produto tem um lucro de 45 por cento, agora ele vale : %.2f" , produto);
  	
  }
  
  else{
  	valor = (produto * 30) /100;
  	produto = produto + valor;
  	printf("Seu produto tem um lucro de 30 por cento, agora ele vale : %.2f" , produto);
  }
  
return 0;
}
