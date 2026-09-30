#include <stdio.h>

int main(){
	float saldo = 1000.00;
	float saque;
	float deposito;
	int opcao;
	float operacao;
	

	
	printf("=== Banco UCB === \n");
	printf("Escolha uma opcao: \n 1-Saldo \n 2-Saque \n 3-Deposito \n 4-Sair	");
	scanf("%d" , &opcao);
	
	if (opcao == 1){
		printf("Seu saldo eh: %.2f" , saldo);
	}
	else if(opcao == 2){
		printf("Digite o Valor que deseja sacar:\n ");
		scanf("%f" , &saque);
		saldo = saldo - saque;
		printf("Seu saldo agora eh: %.2f" , saldo);
	}
		else if(opcao == 3){
		printf("Digite o Valor que deseja depositar:\n ");
		scanf("%f" , &deposito);
		saldo = saldo + deposito;
		printf("Seu saldo agora eh: %.2f" , saldo);
	}
	else{
		printf("Voce escolheu sair");
		
	}

	
	return 0;
}
