/*
	Conversor de maratona
	A distância de uma maratona em quilometros
*/

#include <stdio.h> // pré processador - Entrada e saida

int main(void) // void lista de argumentos vazia
{ // inicio do código

	int milhas = 26, jardas =385;
	double quilometros;
	
	quilometros = 1.609 * (milhas + jardas / 1760.0);
	
	printf("\n Uma maratona eh %lf quilometros. \n\n", quilometros); 
	return 0;
	
}