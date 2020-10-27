/*
6. Faca um programa que leia o tamanho de um vetor A e, em seguida, 
leia os n elementos do vetor. Considere que o valor maximo de elementos 
que o vetor A pode armazenar eh 100. Por fim, calcule e mostre a media dos 
elementos de indice par e o produto dos elementos de ïndice impar.
*/
#include <stdio.h>
#define TAM 100

int main(){
    int i, num, prodImpar, contPar;
    int vetorA[TAM];
    float medSomaPar;

    printf("Informe o tamanho do vetor: ");
    scanf("%i", &num);

	contPar = 0;
	medSomaPar = 0;
	prodImpar = 1;
    if(num > 100){
        printf("Tamanho do vetor nao pode ser maior que 100!!!");
    }else{    
        for(i = 0; i < num; i++){
        	printf("Informe o valor: ");
        	scanf("%d", &vetorA[i]);
    	}
        for(i = 0; i < num; i++){    	
        	if(i % 2 == 0){
        		contPar = contPar+1;
        		medSomaPar += vetorA[i];
			}else{
				prodImpar *= vetorA[i];
			}
        }
		if (num == 0){
			printf("Vetor de tamanho zero.");
		}else{
			if (num > 1){
				printf("Media dos numeros pares: %.2f.\n", medSomaPar / contPar);
				printf("Produtos dos numeros impares: %d.\n", prodImpar);
			}else{
				printf("Media dos numeros pares: %.2f.\n", medSomaPar / contPar);
				printf("Produto nao existe - Vetor de tamanho 1.");
			}
		}
	}
	return 0;
}
