/*4. Receber 15 n�meros e armazen�-los em um vetor. 
Ao final, exibir o dobro de cada um dos n�meros.*/

#include <stdio.h>
#define TAM 15

int main(){
	int vetor[TAM];
	int i, dobro;
	
	for(i = 0; i < TAM; i++){
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < TAM; i++){
		dobro = vetor[i] * 2;
		printf("%d ", dobro);
	}	
	return 0;
}
