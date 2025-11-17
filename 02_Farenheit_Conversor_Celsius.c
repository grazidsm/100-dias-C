/*
	Conversão de Fahrenheit para Celsius
	
	C = (F -32)/ 1.8
*/

#include <stdio.h>

int main(void)
{
	int fahrenheit, celsius;
	
	printf("Insira o valor em fahrenheit (valor inteiro): ");
	scanf("%d", &fahrenheit);
	
	celsius = (fahrenheit - 32)/1.8; // conversão silenciosa de inteiro para double
	
	printf("\n %d fahrenheit eh %d celsius.\n",fahrenheit, celsius);
	
	return 0;
}