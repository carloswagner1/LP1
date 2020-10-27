/*
Faca uma funco recursiva que permita inverter um numero inteiro N. Ex: 123 - 321.
*/
#include <stdio.h>
#include <math.h>

int invert(int n);

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%i", invert(numero));

    return 0;
}
int invert(int n) {
	if((n / 10) == 0) {
		return n;
	}
	return invert(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}

