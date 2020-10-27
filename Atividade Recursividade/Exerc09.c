/*Escreva uma funcao recursiva que dado um numero n, 
gere todas as possiveis combinacoes com as n primeiras letras
do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA.
*/

#include <stdio.h>
#include <string.h>

void permutaRecursiva(char* str, int k);

void trocaCaracteres(char* str, int p1, int p2);

int main(){
    int num, inicio = 0;
    char alfabeto[26] = { "ABCDEFGHIJKLMNOPQRSTUWVXYZ" };


    printf("Combinacoes com letras.\nInforme a quantidade de letras (1 a 26): ");
    scanf("%i", &num);
    
    while(num > 26){
    	printf("Valor invalido!!!\n");
   	    printf("Informe a quantidade de letras (1 a 26): ");
	    scanf("%i", &num);
	}

    char letras[num];
    for (int i = 0; i < num; i++)
    {
        letras[i] = alfabeto[i];
    }

 
    permutaRecursiva(letras, inicio);

    return 0;
}

void permutaRecursiva(char* str, int k){
   int i, len;

   len = strlen(str);
   if (k == len) {
      printf( "%s\n", str);
   } else {
      for (i = k; i < len; i++) {
         trocaCaracteres(str, k, i);
         permutaRecursiva(str, k + 1);
         trocaCaracteres(str, i, k);
      }
   }
}

void trocaCaracteres(char* str, int p1, int p2){
   char tmp;
   tmp = str[p1]; 
   str[p1] = str[p2]; 
   str[p2] = tmp;
   
}
