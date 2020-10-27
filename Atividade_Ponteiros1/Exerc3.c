/*
	Escreva um programa que contenha duas variáveis inteiras.
    Leia essas variáveis do teclado.
    Em seguida, compare seus endereços e exiba o conteudo do maior endereço.
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

	//Linha inserida só para verificação
	printf("Endereco de a: %i.\nEndereco de b: %i.\n", pA, pB);

	if(pA > pB){
        printf("O maior endereco e: %i\n", pA);
		printf("O conteudo do maior endereco e: %i", *pA); // exibir o conteudo, não o endereço do ponteiro
	}else{
	    printf("O maior endereco e: %i\n", pB);
		printf("O conteudo do maior endereco e: %i", *pB); // exibir o conteudo
	}
	return 0;
}
