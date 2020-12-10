/*
Crie um programa que contenha um array contendo 5 elementos inteiros. 
Leia esse array do teclado e imprima o endereco das posicoes contendo valores pares.
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
		if(*(ptr+i) % 2 == 0){
       		printf("Endereco correspondente ao numero par %i: %i.\n", *(ptr+i), ptr+i);
        }
	}
	return 0;
}
