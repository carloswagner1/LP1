//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os 
//coeficientes de uma equação do segundo grau e retorne o valor do delta,
// que é dado por 'b² - 4ac' 3. 
//Usando as 2 funções acima, crie um aplicativo que calcula as raízes de uma
//equação do 2o grau: ax² + bx + c=0. 
//Para ela existir, o coeficiente 'a' deve ser diferente de zero. 
//Caso o delta seja maior ou igual a zero, as raízes serão reais. 
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
