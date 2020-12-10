/*
Crie uma funcao que receba dois parametros: um array e um valor
do mesmo tipo do array. A funcao devera preencher os elementos de
array com esse valor. Nao utilize indices para percorrer o array,
apenas aritmetica de ponteiros.
*/

#include <stdio.h>
#define TAM 10

void fill(int *arr, int *a);

int main() {
	int array[TAM]; 
	int valor = 2, i;

	fill(array, &valor)	;
	
	for(i = 0; i < TAM; i++){
		printf("\n%i", array[i]);	
	}
	return 0;
}
//recebe os valores e preenche o array
void fill(int *arr, int *a){
	int i;
	for(i = 0; i < TAM; i++){
		*arr = *a;
		arr++;
	}
	
}
