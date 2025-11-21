/*
:)

    Programa que receba um número inteiro e identifica se ele é impar ou par.
*/

#include <stdio.h>

int main()
{
    int Numero;

    printf("Insira um numero (inteiro): ");
    scanf("%d", &Numero);

    if(Numero % 2 == 0)
    {
        printf("%d eh par.", Numero);

        return 0;
    }
    else
    {
    printf("%d eh impar", Numero);

    return 0;
    }
}
