/*
Faca um programa que leia 2 valores inteiros e chame
uma funcao que receba estas  2 variaveis e troque o seu conteudo.
Esta funcao e chamada passando duas  variaveis A e B, por exemplo
e, apos a execucao da funcao, A contera o valor de B e B  tera  valor de A.
*/
#include <stdio.h>

void change (int *A, int *B);

int main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%i", &A);
    printf("Informe o valor de B: ");
    scanf("%i", &B);

    change(&A, &B);

    printf("Apos a troca:\nA = %i\nB = %i", A, B);
    return 0;
}

void change (int *A, int *B){

    int aux;

    aux= *A;
    *A = *B;
    *B = aux;
}
