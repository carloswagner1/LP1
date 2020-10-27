/*1. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números
 na ordem que foram recebidos.*/
#include <stdio.h>
#define TAM 10

int main(){
	int vetor[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < TAM; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
