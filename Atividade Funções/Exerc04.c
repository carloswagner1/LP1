//Crie uma funcao em linguagem C que receba 2 numeros e retorne o menor valor. 

#include <stdio.h>

//Cabeca
float menor2num(float n1, float n2);

//main
int main(){
	printf("Menor valor digitado %.f\n", menor2num(8, 10));

	return 0;
}
//Corpo
float menor2num(float n1, float n2){
	//return num1 < num2 ? num1 : num2;	(solução Glauco)
	if(n1 > n2){
		return n2;
	}else{
		return n1;
	}
}
