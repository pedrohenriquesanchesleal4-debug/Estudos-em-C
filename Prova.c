#include <stdio.h>

int main() {
    int numcon, tipocon;
    int qtdTipo1 = 0, qtdTipo2 = 0, qtdTipo3 = 0;
    float kwh, preco, custo;
    float totalTipo1 = 0, totalTipo2 = 0, totalTipo3 = 0;


    do {
    	printf("Qual o seu numero do consumidor: \n");
        scanf("%d", &numcon);

        if (numcon != 0) {
           printf("Qual a quantidade de kWh consumida no mes: \n");
        scanf("%f", &kwh);
        
        printf("Qual o seu tipo de consumidor: \n");
        scanf("%d", &tipocon);

            if (tipocon == 1) {
                preco = 0.30;
                totalTipo1 += kwh;
                custo = kwh * preco;
                printf("Consumidor 1 - Custo: R$ %.2f\n", custo);
                qtdTipo1++;
            } else if (tipocon == 2) {
                preco = 0.50;
                totalTipo2 += kwh;
                custo = kwh * preco;
                printf("Consumidor %2 - Custo: R$ %.2f\n" , custo);
                qtdTipo2++;
            } else if (tipocon == 3) {
                preco = 0.70;
                totalTipo3 += kwh;
                custo = kwh * preco;
                printf("Consumidor 3 - Custo: R$ %.2f\n" , custo);
                qtdTipo3++;
            }
            
            else{
            	printf("Nao existe esse tipo %d \n" , tipocon);
            	
			}
            
        

            
        }

    } while (numcon != 0);

    printf("Total tipo 1: %.2f kWh\n", totalTipo1);
    printf("Total tipo 2: %.2f kWh\n", totalTipo2);
    printf("Total tipo 3: %.2f kWh\n", totalTipo3);

    if (qtdTipo1 > 0)
        printf("Media tipo 1: %.2f kWh\n", totalTipo1 / qtdTipo1);
    else
        printf("Nao ha dados para calcular a media do tipo 1.\n");

    if (qtdTipo2 > 0)
        printf("Media tipo 2: %.2f kWh\n", totalTipo2 / qtdTipo2);
    else
        printf("Nao ha dados para calcular a media do tipo 2.\n");
        
if (qtdTipo3 > 0)
        printf("Media tipo 3: %.2f kWh\n", totalTipo3 / qtdTipo3);
    else
        printf("Nao ha dados para calcular a media do tipo 3.\n");
    return 0;
}
