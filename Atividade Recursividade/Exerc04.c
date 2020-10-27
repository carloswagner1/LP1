/*O maximo divisor comum dos inteiros x e y e o maior inteiro
que e divisivel por x e y. Escreva uma funcao recursiva mdc em C,
que retorna o maximo divisor comum de x e y. O mdc de x e y e 
definido como segue: se y e igual a 0, entao mdc(x,y) e x; caso
contrario, mdc(x,y) e mdc (y, x%y), onde % e o operador resto.
*/

#include <stdio.h>

int MDC (int n1, int n2);

int main(){
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("O MDC(%d,%d) =  %d. ", num1, num2, MDC(num1, num2));
    return 0;
}

int MDC (int n1, int n2){
    int mdc, resto;

    if (n2 == 0){
        return n1;
    }else{
        MDC(n2, n1 % n2);
    }    
}
