/*
8. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. 
O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60.
A seguir, ler um vetor B de 10 elementos contendo uma aposta. 
Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos),
a quina (5 acertos) ou a quadra (4 acertos).
*/
#include <stdio.h>
#define GABARITO 6
#define APOSTA 10

int main(){
	int i, j, pontos = 0;
	int vetorA[GABARITO];
	int vetorB[APOSTA];


	printf("Insira as numeros sorteados na MegaSena:\n");
	for(i = 0; i < GABARITO; i++){
		do{
			printf("Numero %d: ", i+1);
			scanf("%d", &vetorA[i]);
			if(vetorA[i] < 1 || vetorA[i] > 60){
				printf("Erro!!! Digite um valor do intervalo (1-60)!\n");
			}
		}while(vetorA[i] <1 || vetorA[i] > 60);
	}
	
	printf("Insira os numeros da aposta (1-60):\n");
	for(i = 0; i < APOSTA; i++){
		do{
			printf("Numero %d: ", i+1);
			scanf("%d", &vetorB[i]);
			if(vetorB[i] < 1 || vetorB[i] > 60){
				printf("Erro!!! Digite um valor do intervalo (1-60)!\n");	
			}
		}while(vetorB[i] <1 || vetorB[i] > 60);
	}
	for(i = 0; i < APOSTA; i++){
		for(j = 0; j < GABARITO; j++){
			if(vetorB[i] == vetorA[j]){
				pontos += 1;
			}
		}
	}
	printf("Numeros Sorteados: ");
	for(i = 0; i < GABARITO; i++) {
		printf("%d ", vetorA[i]);
	}
	printf("\nNumero de acertos: %d\n", pontos);
	if(pontos == 6){
		printf("Parabens!!! Voce acertou a Sena!!!\n");
	}else if(pontos == 5){
		printf("Voce acertou a quina!!!\n");
	}else if(pontos == 4){
		printf("Voce acertou a quadra!!!\n");
	}else{
		printf("Sem premiacao.");
	}
	return 0;
}
