//Crie uma funcao que receba um valor e informe se ele eh positivo ou nao. 

#include <stdio.h>

//Cabeca
int positivoNegativo(float n);

//main
int main(){
	float num;
    printf ("Number: ");
    scanf ("%f", &num);
    
	if(positivoNegativo(num)){
		printf("Numero positivo\n");
	}else{
		printf("Numero negativo\n");
	}
	return 0;
}
//Corpo
int positivoNegativo(float n){
		
	if(n > 0){
		return 1;
	}else{
		return 0;
	}
}
