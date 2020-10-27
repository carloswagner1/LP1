/*
7. Crie um programa que contenha uma fun��o que permita passar por
   par�metro dois  n�meros inteiros A e B. A fun��o dever� calcular
   a soma entre estes dois n�meros e armazenar o resultado na vari�vel A. 
   Esta func��o n�o dever� possuir retorno, mas dever� modificar o valor
   do primeiro par�metro. Imprima os valores de A e B na fun��o principal.
*/
#include <stdio.h>

void soma(int *A, int B);

int main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%i", &A);
    printf("Informe o valor de B: ");
    scanf("%i", &B);

    soma(&A, B);

    printf("Valor de A: %i\nValor de B: %i", A, B);
    return 0;
}

void soma (int *A, int B){

    *A += B; 
}
