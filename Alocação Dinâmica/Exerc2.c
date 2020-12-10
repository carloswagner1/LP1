/*
2) Faca uma funcao que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma funcao que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa tambem uma
funcao que receba um ponteiro para um vetor e libere esta area de memoria. Ao final,
crie uma funcao principal que leia um valor n e chame a funcao criada acima. Depois,
a funcao principal deve ler os n elementos desse vetor. Entao, a funcao principal deve
chamar a funcao de impressao dos n elementos do vetor criado e, finalmente, liberar a
memoria alocada atraves da funcao criada para liberacao.
*/

#include <stdio.h>
#include <stdlib.h>

int* vet(int n);
void printVet(int *p, int n);
void freePtr(int *p);


int main(){
	int *ptr, i, num;

	
	printf("Informe o numero de elementos a serem alocados dinamicamente: ");
	scanf("%i", &num);
	
	ptr = vet(num);
	
	for(i=0; i < num; i++){
		printf("Digite o valor %i: ", i+1);
		scanf("%i", &ptr[i]);
	}
	
	printVet(ptr, num);
	
	freePtr(ptr);
	
	return 0;
}
//alocacao na memoria
int* vet(int n){
	int *p = (int *) malloc(n * sizeof(int));

}
//imprime o vetor
void printVet(int *p, int n){
	int i;
	
	printf("\nVetor digitado: ");
	for(i=0; i< n; i++){
		printf("%i ", p[i]);
	}
	
}
//libera a memoria
void freePtr(int *p){
	free(p);
	printf("\n\nMemoria liberada!");
}


