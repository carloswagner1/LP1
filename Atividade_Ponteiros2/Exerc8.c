/*
Implemente uma funcao que calcule a  area da superficie e o volume
de uma esfera de raio R. Essa funcao deve obedecer ao prototipo:    
void calc_esfera(float R, float *area, float *volume)
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159216

void calc_esfera (float R, float* area, float* volume);


int main(){
    float raio, area_sup, vol_esf;
    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);
    calc_esfera(raio, &area_sup, &vol_esf);
    
    printf("\nRaio da esfera: %.2f\nArea da superficie: %.2f\nVolume da esfera: %.2f\n", raio, area_sup, vol_esf);
    
    return 0;
}

void calc_esfera (float R, float* area, float* volume){
    *area = 4*PI*pow(R,2);
    *volume = 4*PI*pow(R,3)/3;
}
