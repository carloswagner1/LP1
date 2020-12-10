/*
Escreva um programa que declare um array de inteiros e um ponteiro
para inteiros. Associe o ponteiro ao array. Agora, some mais um (+1)
a cada posicao do array usando o ponteiro (use *).
*/
#include <stdio.h>
#define TAM 10

int main(){
	int vetor[TAM] = {10,20,30,40,50,60,70,80,90,100};
	int *ptr;
	int i;
	
	ptr= vetor;
	
	for(i = 0; i < TAM; i++) {
		*(ptr+i) += 1; 
		printf("\n%i", *(ptr+i));
	}
	return 0;
}
