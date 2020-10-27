//Crie uma funcao em linguagem C chamado Dado() que retorna, atraves de
//sorteio, um numero de 1 ate 6.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main(){
	srand((unsigned)time(NULL));
	printf("Numero sorteado: %d\n", dado());
	return 0;
}

int dado(){

	return (rand()%6) + 1;
}
