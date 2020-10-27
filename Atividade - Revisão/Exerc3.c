/*3. Receber 8 números e armazená-los em um vetor. 
Ao final, pedir para o usuário escolher uma posição do vetor 
e exibir o número contido nela.
*/
#include <stdio.h>
# define TAM 8

int main(){
	int vetor[TAM];
	int i, posicao;
	
	for(i = 0; i < TAM; i++){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("Informe uma posicao do vetor (1-8): ");
	scanf("%d", &posicao);
	
	if(posicao >= 0 && posicao <=8){
		printf("O valor da posicao: %d", vetor[posicao-1]);
	}else{
		printf("Posicao invalida.");
	}

	return 0;
}

