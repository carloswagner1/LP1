//Crie uma fun��o que receba tr�s valores, 'a', 'b' e 'c', que s�o os 
//coeficientes de uma equa��o do segundo grau e retorne o valor do delta,
// que � dado por 'b� - 4ac' 3. 
//Usando as 2 fun��es acima, crie um aplicativo que calcula as ra�zes de uma
//equa��o do 2o grau: ax� + bx + c=0. 
//Para ela existir, o coeficiente 'a' deve ser diferente de zero. 
//Caso o delta seja maior ou igual a zero, as ra�zes ser�o reais. 
//Caso o delta seja negativo imprimir "Erro"

#include <stdio.h>

#include <math.h>

//cabecas
float delta(float a, float b, float c);
int posNeg(float n);
int testaNulo(float n);

//main
int main(){

    float a, b, c, raiz1, raiz2;
	
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if(testaNulo(a)){
    	printf("A variavel 'a' deve ser diferente de zero.\n");
    }else{
		if(posNeg(delta(a,b,c)) || testaNulo(delta(a,b,c)))
		{
			raiz1 = ((-1)*b + sqrt(delta(a,b,c))) / (2*a);
			raiz2 = ((-1)*b - sqrt(delta(a,b,c))) / (2*a);
			printf("raiz1 = %.2f\nraiz2 = %.2f\n", raiz1, raiz2);
		}else{
			printf("Erro! Nao existe raizes reais");
			
		}
    }
    return 0;
}
//corpos
float delta(float a,float b, float c){
	return ((b*b) - (4*a*c));
}
	
int posNeg(float n){
	if(n > 0){
		return 1;
	}else{
		return 0;
	}
}
int testaNulo(float n){
	if(n == 0){
		return 1;
	}	else{
		return 0;
	}
}
