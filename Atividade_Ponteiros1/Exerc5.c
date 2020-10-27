/*
5. Fa�a um programa que leia dois valores inteiros e chame uma fun��o
   que receba estes  2 valores de entrada e retorne o maior valor na 
   primeira vari�vel e o menor valor na  segunda vari�vel.
   Escreva os conte�dos das 2 vari�veis na tela.
*/
#include <stdio.h>

void compare (int *A, int *B);

int main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%i", &A);
    printf("Informe o valor de B: ");
    scanf("%i", &B);

    compare(&A, &B);

    printf("Maior valor: %i\nMenor valor: %i", A, B);
    return 0;
}

void compare (int *A, int *B){

    if(*B > *A){
    	int aux;
    	
		aux= *A;
		*A = *B;
		*B = aux;
	}
}
