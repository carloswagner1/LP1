/*
Crie uma fun��o que receba como par�metro um array e o imprima. 
N�o utilize �ndices para percorrer o array, apenas aritmetica 
de ponteiros.
*/

#include <stdio.h>
#define TAM 10

void imprime(int *arr);	
	
int main() {
	int array[TAM]; 
	int i;

	for(i = 0; i < TAM; i++){
		printf("Informe o valor %i/10: ", i+1);
		scanf("\n%i", &array[i]);	
	}
	imprime(array);

	return 0;
}
//recebe os valores e imprime o array
void imprime(int *arr){
	int i;
	for(i = 0; i < TAM; i++){
		printf("\n%i", *arr++);
	}
	
}
