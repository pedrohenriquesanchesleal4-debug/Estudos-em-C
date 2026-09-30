#include <stdio.h>
#include <stdlib.h>

int main(){
   int fatorial = 0;
   int mult = 1;
   
   do {
   	printf("digite o numero que deseja calcular o fatorial: \n");
   	scanf("%d" , &fatorial);
   } while(fatorial < 0); 

   mult = fatorial - 1; 
   
   while(mult > 0) {
   	fatorial = fatorial * mult;
   	mult--;
   }

   printf("O resultado do fatorial e: %d\n", fatorial);

   return 0;
}
