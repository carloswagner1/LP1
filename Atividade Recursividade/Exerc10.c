/*Escreva uma função recursiva que gere todas as possíveis
combinações para um jogo da MegaSena com 6 dezenas
*/

#include <stdio.h>


int combinationMega(int sort[], int start, int end, int index, int r);

int main(){
	int r = 6;//qtde de numeros sorteados
	int n = 60;// qtde de numeros que podem ser escolhidos (MegaSena = 60)
	int sort[r];
	combinationMega(sort, 0, n-1, 0, r);
}

//funcao para gerar as combinacoes da megasena
int combinationMega(int sort[], int start, int end, int index, int r){
	int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
	21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,
	44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};//numeros do bilhete;
	
	int i, j;
	
	if (index == r){
		for (j = 0; j < r; j++){
			printf("%i ", sort[j]);
		}
		printf("\n");
		return 0;
	}
	for(i=start; i<=end && end-i+1 >= r-index; i++){
		sort[index] = numbers[i];
		combinationMega(sort, i+1, end, index+1, r);
	}
}


