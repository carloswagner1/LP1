/*Escreva um programa que declare um inteiro, um real e um char,
  e ponteiros para inteiro, real, e char. Associe as variaveis aos
  ponteiros (use &). Modifique os valores de cada variavel usando
  os ponteiros.Imprima os valores das variaveis antes e apos a 
  modificacao.*/
  
#include <stdio.h>
int main(){
	int a = 1;
	float b = 2.5;
	char c = 'a';
	
	int *ptrInt;
	float *ptrFloat;
	char *ptrChar;
	
	ptrInt = &a;
	ptrFloat = &b;
	ptrChar = &c;
	
	printf("Antes da modificacao:\na = %i\nb = %f\nc = %c", a, b, c);
	
	*ptrInt = 2;
	*ptrFloat = 8.8;
	*ptrChar = 'A';
	printf("\nDepois da modificacao:\na = %i\nb = %f\nc = %c", a, b, c);
	return 0;
}

