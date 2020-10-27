/*5. Receber 12 números e armazená-los em um vetor. 
Ao final, exibir quais foram os números positivos informados.*/

#include <stdio.h>
#define TAM 12

int main(){
	int vetor[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < TAM; i++){
		if(vetor[i] > 0){
			printf("%d ", vetor[i]);
		}
	}	
	return 0;
}
