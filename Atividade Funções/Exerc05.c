//Crie uma função em linguagem C que receba 3 números e retorne o maior valor. 

#include <stdio.h>

//Cabecas
float maior2num(float n1, float n2);

float maior3num(float n1, float n2, float n3);

//main
int main(){
	int num1, num2, num3;
    
     
	printf("Maior valor digitado: %.f.\n", maior3num(1, 2, 3));
	printf("Maior valor digitado: %.f.\n", maior3num(2, 1, 3));
	printf("Maior valor digitado: %.f.\n", maior3num(3, 2, 1));
	return 0;
}
//Corpos
float maior2num(float n1, float n2)
{
    if(n1 > n2)
        return n1;
    else
        return n2;
}
float maior3num(float n1, float n2, float n3)
{
    if( maior2num(n1, n2) > n3)
        return (maior2num(n1, n2));
    else
        return n3;
}
