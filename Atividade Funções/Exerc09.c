#include <stdio.h>

//cabecas
void celsius(float t);

void fahrenheit(float t);

// principal
int main(){
	int opcao;
	float temp;

	//entradas
	printf("Informe a opcao desejada:\
	\n(1 - Fahrenheit para Celsius)\n(2 - Celsius para Fahrenheit)\n");
	scanf("%d", &opcao);
	printf("Informe a temperatura: ");
	scanf("%f", &temp);

	//processamento
	switch (opcao)
	{
	case 1:
		celsius(temp);
		break;
	case 2:
		fahrenheit(temp);
		break;
	}
	return 0;
}
	
//corpos
void celsius(float t)
{
	float c;
	
	c = 5 * (t - 32) / 9;
	printf("%.2f F equivale a %.2f C.\n", t, c);
	return;
}
void fahrenheit(float t)
{
	float f;
	
	f = (9 * t/5) + 32;
	printf("%.2f C equivale a %.2f F.\n", t, f);
	return; 
}
