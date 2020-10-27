/*Escreva um programa que contenha duas variáveis inteiras. 
  Compare seus endereços e exiba o maior endereço.*/

#include <stdio.h>

int main(){
	int a = 3, b = 5;
	int *pA, *pB;
	pA= &a;
	pB= &b;
	
	//Linha inserida só para verificação
	printf("Endereco de a: %i.\nEndereco de b: %i.\n", pA, pB);
		
	if(pA > pB){
		printf("O maior endereco e: %i", pA);
	}else{
		printf("O maior endereco e: %i.", pB);
	}
	return 0;
}
