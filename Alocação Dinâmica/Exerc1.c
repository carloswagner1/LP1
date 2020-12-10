/*
1)Faca um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma funcao que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Alem disso, antes de
finalizar o programa, deve-se liberar a area de memoria alocada.
*/

#include <stdio.h>
#include <stdlib.h>


void readVet(int *p, int tam);

int main(){
	int *ptr, n, i;
	
	printf("Digite o numero de elementos a serem alocados dinamicamente: ");
	scanf("%i", &n);
	
	ptr = (int *) malloc(n * sizeof(int));//Alocar memoria

	
	readVet(ptr, n); //chama a funcao
	
	printf("\nVetor digitado: \n");
	for(i = 0; i < n; i++){
		printf("%i ", i+1, ptr[i]);
	}
	free(ptr);//liberar memoria
	printf("\n\nMemoria liberada.");

	return 0;
}
//ler os valores do vetor
void readVet(int *p, int tam){
	int i;
	printf("\n");
	for(i = 0; i < tam; i++){
		printf("Digite um valor: ");
		scanf("%i", &p[i]);
	}
	
}
