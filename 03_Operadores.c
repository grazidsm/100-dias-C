/*
	(Kelley&Pohl) Considerando a=1, b=2, c=3, d=4, e=5 
	compute as expressões abaixo.
	
	a * b / c
	a * b % c + 1
	++ a * b - c --
	7 - - b * ++ d
	a / b / c
	7 + c * -- d / e
	2 * a % - b + c + 1
	39 / - ++ e - + 29 % c
	7 - + ++ a % (3+b)
*/

#include <stdio.h>

int main()
{
	double a=1, b=2, c=3, d=4, e=5;
	double resultado_1, resultado_3, resultado_4, resultado_5;
	int resultado_2;
	
	resultado_1 = (a * b) / c;
//	resultado_2 = a * b % c + 1;
	resultado_3 = ++a * b - c--; // 2 * 2 - 2
	resultado_4 = 7 - (-b) * (++d);
	resultado_5 = a / b / c;
	
	printf(" 1 -> Resultado: %lf\n 2 -> Resultado: %d\n 3 -> Resultado: %lf", resultado_1, resultado_2, resultado_3);
	
	return 0;
}