/*
Elabore uma funcao que receba duas strings como parametros e
verifique se a segunda string ocorre dentro da primeira. 
Use aritmetica de ponteiros para acessar os caracteres das strings.
*/

#include <stdio.h>

int checkIsInside(char *string1, char *string2);

int main(){
    char string1[100], string2[50];
    printf("Digite a primeira string: ");
    fgets(string1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(string2, 50, stdin);

    int retorno = checkIsInside(string1, string2);
    if(retorno == 1)
        printf("A segunda string esta contida na primeira string\n");
    else
        printf("A segunda string NAO esta contida na primeira string\n");

    return 0;
}
int checkIsInside(char *string1, char *string2){
    int i, j, auxiliar = 0;
    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        // enquanto as posicoes das strings forem iguais
        while( (*(string1 + i)) == (*(string2 + j)) ){
            i++;
            j++;
            // se acabou a segunda string
            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;
            // se nao eh mais igual, faz auxiliar ser 0
            else if( (*(string1 + i)) != (*(string2 + j)) )
                auxiliar = 0;
        }
    }
    return auxiliar;
}
