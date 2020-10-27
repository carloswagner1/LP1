/*
	Escreva um programa que contenha duas vari�veis inteiras.
    Leia essas vari�veis do teclado.
    Em seguida, compare seus endere�os e exiba o conteudo do maior endere�o.
*/
#include <stdio.h>

int main(){
	int a, b;
	int *pA, *pB;


	printf("Informe o valor de a: ");
	scanf("%i", &a);
	printf("Informe o valor de b: ");
	scanf("%i", &b);

	pA= &a;
	pB= &b;

	//Linha inserida s� para verifica��o
	printf("Endereco de a: %i.\nEndereco de b: %i.\n", pA, pB);

	if(pA > pB){
        printf("O maior endereco e: %i\n", pA);
		printf("O conteudo do maior endereco e: %i", *pA); // exibir o conteudo, n�o o endere�o do ponteiro
	}else{
	    printf("O maior endereco e: %i\n", pB);
		printf("O conteudo do maior endereco e: %i", *pB); // exibir o conteudo
	}
	return 0;
}
