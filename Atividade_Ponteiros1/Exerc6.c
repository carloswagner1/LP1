/*
6. Elaborar um programa que leia dois valores inteiros (A e B).
   Em seguida fa�a uma fun��o que retorne a soma do dobro dos dois
   numeros lidos. A fun��o dever� armazenar o dobro  de A na propria
   vari�vel A e o dobro de B na pr�pria vari�vel B.
*/
#include <stdio.h>

void dobro(int *A, int *B);

int main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%i", &A);
    printf("Informe o valor de B: ");
    scanf("%i", &B);

    dobro(&A, &B);

    printf("Dobro de A: %i\nDobro de B: %i", A, B);
    return 0;
}

void dobro (int *A, int *B){

    *A *= 2;
    *B *= 2;
}
