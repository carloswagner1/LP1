/*
Crie um programa em C que receba um vetor de 
numeros reais com 100 elementos. Escreva uma funcao
recursiva que inverta ordem dos elementos presentes no vetor.
*/

#include <stdio.h>
#define TAM 100

void invert(float vet[], int index, int f);

int main(){
    float vetor[TAM];

    for(int i = 0; i < TAM; i++){
    	printf("Informe um valor: ");
        scanf("%f", &vetor[i]);
	}
	
	invert(vetor, 0, 9);
	
    for(int i = 0; i < TAM; i++){
    printf("%.2f ", vetor[i]);
	}
    return 0;
}
void invert(float vet[], int index, int f){

    if(index < f)
    {
      int aux = vet[index];
      vet[index]=vet[f];
      vet[f]=aux;
      index++;
      f--;
      return invert(vet, index, f);
	}
}
