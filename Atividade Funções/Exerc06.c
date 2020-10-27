//Crie uma função em linguagem C que receba 3 números 
//e retorne o maior valor, use a função da questão 4. 
#include <stdio.h>

//Cabecas
float menor2num(float n1, float n2);

float menor3num(float n1, float n2, float n3);

//main
int main(){
    
	printf("Menor valor digitado: %.f.\n", menor3num(1, 2, 3));
	printf("Menor valor digitado: %.f.\n", menor3num(2, 3, 1));
	printf("Menor valor digitado: %.f.\n", menor3num(3, 2, 1));
	return 0;
}
//Corpos
float menor2num(float n1, float n2)
{
    if(n1 > n2)
        return n2;
    else
        return n1;
       
//	return n1 < n2 ? n1 : n2; (solu��o Glauco)
}
float menor3num(float n1, float n2, float n3)
{
    if(menor2num(n1, n2) < n3)
        return (menor2num(n1, n2));
    else
        return n3;
//  return menor2num(n1, menor2num(n2, n3));
}

