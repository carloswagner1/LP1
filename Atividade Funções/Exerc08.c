//Use a funcao da questao passada e lance o dado 1 milhao de vezes.
//Conte quantas vezes cada numero saiu. 
//A probabilidade deu certo? Ou seja, a porcentagem dos numeros foi parecida? 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//cabeca
int dado();

//principal
int main()
{
    int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, i = 0;
	srand((unsigned)time(NULL));
    for(i = 0; i < 1000000; i++){
        switch( dado() )
        {
            case 1:
                num1++;
                break;
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 4:
                num4++;
                break;
            case 5:
                num5++;
                break;
            case 6:
                num6++;
        }
    }
    printf("Numero 1: %d -> %.2f\%%\n", num1, (num1/1000000.0)*100);
    printf("Numero 2: %d -> %.2f\%%\n", num2, (num2/1000000.0)*100);
    printf("Numero 3: %d -> %.2f\%%\n", num3, (num3/1000000.0)*100);
    printf("Numero 4: %d -> %.2f\%%\n", num4, (num4/1000000.0)*100);
    printf("Numero 5: %d -> %.2f\%%\n", num5, (num5/1000000.0)*100);
    printf("Numero 6: %d -> %.2f\%%\n", num6, (num6/1000000.0)*100);

    printf("\nTotal: %d -> %.2f\%%\n", num1+num2+num3+num4+num5+num6,
                                       (num1/1000000.0)*100+(num2/1000000.0)*100+
                                       (num3/1000000.0)*100+(num4/1000000.0)*100+
                                       (num5/1000000.0)*100+(num6/1000000.0)*100);
    return 0;
}
//corpo

int dado(){

	return (rand()%6) + 1;
}
