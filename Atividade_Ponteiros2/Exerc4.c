/*
Faca um programa que leia tres valores inteiros e chame uma funcao que
receba estes 3  valores de entrada e retorne eles ordenados, ou seja,
o menor valor na primeira variavel,  e o segundo menor valor na variavel
do meio, e o maior valor na  ultima variavel. A funcao deve retornar o
valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.
*/
#include <stdio.h>
#define TAM 3

void swap(int *a, int *b);
int sort(int *p);


int main(){
	int vet[TAM];
	int *ptr;
	int i;
	ptr = vet;

	for(i = 0; i < TAM; i++){
		printf("Informe um valor: ");
		scanf("%i", (ptr+i));
	}

    if(sort(ptr)==0){
        printf("Os valores digitados, em ordem crescente, sao: ");
        for(i = 0; i < TAM; i++){
            printf("\n%i", *(ptr+i));
        }
    }else{
        printf("Os valores digitados sao iguais.");
        for(i = 0; i < TAM; i++){
            printf("\n%i", *(ptr+i));
        }
    }

    return 0;
}
//troca de posicao
void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
//Compara e chama a funcao de troca
int sort(int *p){
    int i, j;

    if(*p == *(p+1) && *p == *(p+2)){
        return 1;
    }else{
        for(i = 0; i < TAM; i++){
            for(j = i+1; j < TAM; j++){
                if(*(p+i) > *(p+j)){
                    swap(p+i, p+j);
                }    
            }
        }
        return 0;
    }    
}    

