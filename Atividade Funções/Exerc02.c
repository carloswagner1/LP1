//Crie uma fun��o que receba um valor e diga se � nulo ou n�o.

#include <stdio.h>

//Cabeca
int testaNulo(float n);

//main
int main(){
	float num;
    
	if(testaNulo(0)){
		printf("Numero nulo.\n");
	}else{
		printf("Numero nao nulo.\n");
	}
	return 0;
}
//Corpo
int testaNulo(float n){
	if(n == 0){
		return 1;
	}else{
		return 0;
	}
}
