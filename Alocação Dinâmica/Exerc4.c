/*
Crie uma funcao que receba como parametros dois vetores de inteiros: x1 e x2
e as suas respectivas quantidades de elementos: n1 e n2. A funcao devera retornar
um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a interseccao
de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.
Sendo:
x1 = {1, 3, 5, 6, 7}
x2 = {1, 2, 3, 6, 8}
x3 irá conter {1, 3, 6}.
Assinatura da funcao:
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
*/


#include <stdio.h>
#include <stdlib.h>

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);

int main(){
	int vet1[] = {1, 3, 5, 6, 7};
	int vet2[] = {1, 3, 4, 6, 8};
	int n1 = sizeof(vet1)/sizeof(int); //Conta a quantidade de elementos tem no vetor
	int n2 = sizeof(vet2)/sizeof(int);
	int qtd, *x1, *x2, *x3; // declaro qtd como int, fica melhor pra incrementar na funçao
	x1 = vet1;
	x2 = vet2;
	qtd = 0; // zerar pra incrementar o ponteiro na função
	printf("Valor de n1 = %i\nValor de n2 = %i\n", n1, n2); //confirmar a quantidade de n1 e n2

	x3 = interseccao(x1, x2, n1, n2, &qtd); // enviando o endereço

	printf("\nValor de qtd = %i \n", qtd); //confirmar a quantidade de elemento do x3
	
	printf("\nVetor x3: ");

	//imprimir elementos do x3;
	for(int i =0; i < qtd; i++){
		printf("%i ", *(x3+i));
	}

	free(x3);//libera a memória

	return 0;
}

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
	int soma = n1 + n2;
	int i=0, j=0;
	
	int *x3 = (int *) malloc(soma * sizeof(int)); //aloca a memória

	for(i = 0; i < n1; i++){
		if(*(x1+i) == *(x2+i)){
			*(x3+j) = *(x1+i);			
			(*qtd)++;
            j++;
        }
		/*}else{
			break;			
        }*/
		
	}

	return x3;
}
