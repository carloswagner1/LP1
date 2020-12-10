#include <stdio.h>
#define TAM 4

int main(){
    int matriz1[TAM][TAM] = {
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                            };

    int matriz2[TAM][TAM] = {
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                            };
    int *ptr1, *ptr2;
    int i, j;

    printf("\nSoma das matrizes\n\n");
    for(i=0; i < TAM; i++){
        for(j=0; j < TAM; j++){
            ptr1 = matriz1[i];
            ptr2 = matriz2[i];
            printf("%i ", *(ptr1+j)+*(ptr2+j));
        }
        printf("\n");

    }
    return 0;
}

