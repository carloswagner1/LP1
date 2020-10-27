/*
5. Faça um programa que leia dois valores inteiros e chame uma função
   que receba estes  2 valores de entrada e retorne o maior valor na 
   primeira variável e o menor valor na  segunda variável.
   Escreva os conteúdos das 2 variáveis na tela.
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
