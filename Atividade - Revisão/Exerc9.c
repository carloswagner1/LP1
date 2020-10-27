/*
9. Leia 10 números inteiros e armazene em um vetor A. 
Crie dois novos vetores A1 e A2. Copie os valores ímpares de A para A1,
e os valores pares de A para A2. Note que cada um dos vetores A1 e A2 
tem no máximo 10 elementos, mas nem todos os elementos são utilizados.
No final escreva os elementos utilizados de A1 e A2.
*/

#include <stdio.h>

#define TAM 10

int main(){
    int i, a1 = 0, a2 = 0;
    int vetorA[TAM];
    int vetorA1[TAM];
    int vetorA2[TAM];


    for(i = 0; i < TAM; i++){
        printf("Informe um valor: ");
        scanf("%i", &vetorA[i]);
    }
    for(i = 0; i < TAM; i++){
        if(vetorA[i] % 2 == 0){
        	vetorA2[a2] = vetorA[i];
        	a2 += 1;    
        }else{
            vetorA1[a1] = vetorA[i];
            a1 += 1;
        }
    }
    for(i = 0; i < a1; i++){
        printf("VetorA1[%d]: %d\n", i, vetorA1[i]);
    }
    printf("\n");
    for(i = 0; i < a2; i++){
        printf("VetorA2[%d]: %d\n", i, vetorA2[i]);
    }
    return 0;
}

