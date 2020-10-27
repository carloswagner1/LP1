/*A multiplicacao de dois numeros inteiros pode ser feita
atraves de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplicacao de dois inteiros.
*/
#include <stdio.h>

int multip_Rec(int n1, int n2);

int main(){

    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("A multiplicacao de %d por %d = %d", num1, num2, multip_Rec(num1, num2));
    return 0;
}

int multip_Rec(int n1, int n2){
    
    if (n2 == 0){
        return 0;
    }else{
        n1 += multip_Rec(n1, n2-1);
    }
    return n1;
}
