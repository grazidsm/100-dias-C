/* 
	Circulo e area
	
*/

#include <stdio.h> // entrada 

#define PI 3.14159 // 

int main(){
	double area = 0.0, raio = 0.0;
	printf("Insira o raio: ");
	scanf("%lf", &raio);
	area = PI * raio * raio;
	printf("raio de %lf metros; area é %lf sq.metros", raio, area);
	return 0;
	
}