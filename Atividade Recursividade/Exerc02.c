/*
Faca uma funcao recursiva que permita somar 
os elementos de um vetor de inteiros de 10 posisoes.
*/

#include <stdio.h>
#define TAM 100

int funcSoma(int vet[TAM], int tam, int index);

int main(){
	int v[TAM]={1,2,3,4,5,6,7,8,9,10};
	int index = 0;

	printf("A soma = %i\n", funcSoma(v, TAM, index));

	return 0;
}

int funcSoma(int vet[TAM], int tam, int index){

	if (index == tam){
		return vet[index];
	}else{
        return vet[index] + funcSoma(vet, tam, index+1);
	}
}
	
