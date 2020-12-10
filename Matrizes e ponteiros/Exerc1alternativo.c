#include <stdio.h>
#define TAM 3


int main(){
	int matriz1[3][3];
	int *ptr;
	int i, j;
	
	for(i=0; i < TAM; i++){
		for(j=0; j < TAM; j++){
			printf("Insira o valor para a Matriz1[%i][%i] = ", i, j);
			scanf("%i", &matriz1[i][j]);
		}
	}
	printf("\nMatriz 1\n\n");
	for(i=0; i < TAM; i++){
		ptr = matriz1[0];
		printf("%i ", *(ptr+i));
	}
	printf("\n");
	for(i=0; i < TAM; i++){
		ptr = matriz1[1];
		printf("%i ", *(ptr+i));
	}
	printf("\n");
	for(i=0; i < TAM; i++){
		ptr = matriz1[2];
		printf("%i ", *(ptr+i));
	}
		
	return 0;
}
