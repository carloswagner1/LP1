/*
Crie uma funcao recursiva que receba um numero
inteiro positivo N  e calcule o somatorio dos
numeros de 1 a N.
*/

#include <stdio.h>

int funcSoma(int num);

int main(){
	int N;

	printf("Informe um numero: ");
	scanf("%i", &N);

	while(N< 1){
		printf("Numero Invalido.\n");
		printf("Informe um numero: ");
		scanf("%i", &N);
	}

	printf("A soma = %i", funcSoma(N));

	return 0;
}

int funcSoma(int num){

	if (num <= 1){
		return num;
	}else{
        return num + funcSoma(num-1);
	}
}
	
