/*
7. Crie um programa que contenha uma função que permita passar por
   parâmetro dois  números inteiros A e B. A função deverá calcular
   a soma entre estes dois números e armazenar o resultado na variável A. 
   Esta funcção não deverá possuir retorno, mas deverá modificar o valor
   do primeiro parâmetro. Imprima os valores de A e B na função principal.
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
