/*Escreva uma funcao recursiva que determine quantas
  vezes um digito K ocorre em um numero natural N. 
  Por exemplo, o digito 2 ocorre 3 vezes em 762021192.
*/

#include <stdio.h>

int count_dig(long N, int K);
   
int main(){
     long num = 762021192;
     int k = 2;
     
     printf("O digito %i aparece %i vezes no numero. \n", k, count_dig(num, k));
     return 0;
}

int count_dig(long N, int K){
    
    if(N == 0){
        return 0;
    }else{
        return count_dig( N / 10 , K) + ( N % 10 == K);
    }
}
