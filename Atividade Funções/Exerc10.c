#include <stdio.h>

//cabeças
float med3notas(float n1, float n2, float n3);
float med2maisaltas(float n1, float n2, float n3);
float maior2notas (float n1, float n2);
float maior_nota(float n1, float n2, float n3);
float menor_nota(float n1, float n2, float n3);

//principal
int main(){
    float nt1, nt2, nt3;

    printf("Nota 1: ");
    scanf("%f", &nt1);
    printf("Nota 2: ");
    scanf("%f", &nt2);
    printf("Nota 3: ");
    scanf("%f", &nt3);

    printf("Media das tres provas: %.2f\n", med3notas(nt1,nt2,nt3));
    printf("Media das duas notas mais altas: %.2f\n", med2maisaltas(nt1,nt2,nt3));
    printf("Nota mais alta: %.2f\n", maior_nota(nt1,nt2, nt3));
    printf("Nota mais baixa: %.2f\n", menor_nota(nt1, nt2, nt3));
}
//corpos
float med3notas(float n1, float n2, float n3){
    float media;
    media = (n1 + n2 +n3) / 3;
    return media;
}
float maior2notas (float n1, float n2){
        if(n1 > n2)
        return n1;
    else
        return n2;
}
float maior_nota(float n1, float n2, float n3){
    if(maior2notas(n1, n2) > n3)
        return (maior2notas(n1, n2));
    else
        return n3;
}
float menor2notas (float n1, float n2){
    if(n1 > n2)
        return n2;
    else
        return n1;
}
float menor_nota(float n1, float n2, float n3){
    if(menor2notas(n1, n2) < n3)
        return (menor2notas(n1, n2));
    else
        return n3;
}
float med2maisaltas(float n1, float n2, float n3){
    float media = (n1 + n2 + n3) - menor_nota(n1, n2, n3);
    return media/2;
}
