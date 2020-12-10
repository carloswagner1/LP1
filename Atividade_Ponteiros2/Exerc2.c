/*
Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.
*/
#include <stdio.h>
#define TAM 5

int main (){
	int vet[TAM];
	int *ptr;
	int i;
	ptr = vet;

	for(i = 0; i < TAM; i++){
		printf("Informe um valor: ");
		scanf("%i", &vet[i]);
	}
	for(i = 0; i < TAM; i++){
		*(ptr + i) *= 2;
		printf("Dobro do valor da posicao %i: %i.\n", i, *(ptr+i));
	}
	return 0;
}
