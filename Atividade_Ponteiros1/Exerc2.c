/*Escreva um programa que contenha duas vari�veis inteiras. 
  Compare seus endere�os e exiba o maior endere�o.*/

#include <stdio.h>

int main(){
	int a = 3, b = 5;
	int *pA, *pB;
	pA= &a;
	pB= &b;
	
	//Linha inserida s� para verifica��o
	printf("Endereco de a: %i.\nEndereco de b: %i.\n", pA, pB);
		
	if(pA > pB){
		printf("O maior endereco e: %i", pA);
	}else{
		printf("O maior endereco e: %i.", pB);
	}
	return 0;
}
