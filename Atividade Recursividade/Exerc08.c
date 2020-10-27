/*Faca uma funcao recursiva que receba um numero inteiro
positivo N e imprima todos os numeros naturais de 0 ate N
em ordem crescente.
*/

#include <stdio.h>

int print_numbers(int n, int aux);

int main(){
	int num;
    
	printf("Informe um valor: ");
	scanf("%i", &num);

	print_numbers(num, 0);

	return 0;
}

int print_numbers(int n, int aux){
    printf("%d\n", aux);
	if(n > aux){
        return print_numbers(n, aux+1);
    }else{
        return 0;
    }
}
	
