/*
Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereco de cada posicao desse array.
*/

#include <stdio.h>
#define TAM 10

int main(){
	float vetor[TAM]={1,2,3,4,5,6,7,8,9,10};
	int i;

	for(i = 0; i < TAM; i++){
		printf("Conteudo da posicao: %.2f - Endereco posicao: %i.\n", vetor[i], &vetor[i]);
	}
	return 0;
}
