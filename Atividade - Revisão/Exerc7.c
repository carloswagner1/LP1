/*7. Escreva um algoritmo em linguagem C que:
a) leia um vetor A de 12 n�meros reais; 
b) construa e imprima um vetor B formado da seguinte maneira: 
- os elementos de �ndice par s�o os correspondentes de A divididos por 2; 
- os elementos de �ndice �mpar s�o os correspondentes de A multiplicados por 3.
*/

#include <stdio.h>
#include <math.h>
#define TAM 12

int main(){
	float vetorA[TAM];
	float vetorB[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Informe um valor: ");
		scanf("%f", &vetorA[i]);
	} 		
	for(i = 0; i < TAM; i++){
		if(i % 2 == 0){
			vetorB[i] = vetorA[i] / 2;
		}else{
			vetorB[i] = vetorA[i] * 3;
		}
	}
	for(i = 0; i < TAM; i++){
		printf("%.2f ", vetorB[i]);
	}
	return 0;	
}
