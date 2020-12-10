/*enunciado no final*/

#include <stdio.h>
#include <stdlib.h>

int* valores_entre(int *v, int n, int min, int max, int *qtd);

int main(){
    int minimo, maximo,i, tam, qtd;
    int vet1[] = {1,2,3,4,5,11,12,13,14,15};
    int *vet2;
    tam = sizeof(vet1)/sizeof(int); //conta o numero de elementos de vet1
    qtd = 0;

    //exibe os valores do vet1 (inicial) na tela.
    printf("Vetor inicial: ");
    for(i=0; i < tam; i++){
        printf("%i ", vet1[i]);
    }

    //solicita ao usuário o valor minimo e o maximo.
    printf("\n\nInforme o valor minimo: ");
    scanf("%i", &minimo);
    printf("Informe o valor maximo: ");
    scanf("%i", &maximo);

    //chama a funcao
    vet2 = valores_entre(vet1, tam, minimo, maximo, &qtd);

    if(vet2 == NULL){
        printf("Erro!!! Não há valores entre o minimo e o maximo.");//caso retorne NULL
    }else{
        printf("\nTamanho do vetor final: %i elemento(s).", qtd);//imprime o tamanho do vetor final
        printf("\n\nVetor final :");//imprime o vetor
        for(int i =0; i < qtd; i++){
    		printf("%i ", *(vet2+i));
        }

	}
	free(vet2);//libera a memoria

    return 0;
}


int* valores_entre(int *v, int n, int min, int max, int *qtd){
    int *ptr, i, j=0; //variaveis

    //verificar a quantidade de elementos entre min e max
    for(i = 0; i < n; i++){
        if(*(v+i) > min && *(v+i) < max){
            (*qtd)++;
        }
    }
    //alocar memória, copia os elementos entre min e max e retorna o ponteiro
    if(*qtd > 0){
        ptr = (int *) malloc(*qtd * sizeof(int));

        for(i=0; i < n; i++){
            if(*(v+i) > min && *(v+i) < max){
                *(ptr+j) = *(v+i);
                j++;
            }
        }
        return ptr;
    //NULL
    }else{
        return 0;
    }
}


/*
Crie um programa para manipular vetores. Implemente uma função que receba um vetor de inteiros V e
retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre
o valor mínimo e máximo (que também são passados como parâmetro para a função).

A função deve obedecer ao seguinte protótipo:

int* valores_entre(int *v, int n, int min, int max, int *qtd);

A função recebe:
- v: vetor de números inteiros;
- n: a quantidade de elementos do vetor v;
- min: valor mínimo a ser buscado;
- max: valor máximo a ser buscado;

A função deve:
- Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
- Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma área do exato tamanho necessário para armazenar os valores;
- Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada dinamicamente.

A função retorna:
- O endereço da área alocada dinamicamente, preenchida com os números maiores do que min e menores que max, ou NULL, caso essa relação de números não tenha sido criada;
- A quantidade de números carregados na área alocada dinamicamente, através do parâmetro qtd.

 Em seguida, crie a função principal do programa para inicializar um vetor de inteiros, exibir
esses valores na tela e pedir para o usuário digitar o valor mínimo e máximo a ser buscado.
Em seguida o programa deverá chamar a função valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma mensagem de erro caso nenhum valor seja  encontrado. Não se esqueça de liberar a memória alocada dinamicamente.
*/