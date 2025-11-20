/*
:)
            Entrada e Saída

        1 - Calculadora
            Operações com dois numeros (soma, diferença, produto, divisão)
:)
*/

#include <stdio.h>

int main(){

    double A, B, Soma, Diferenca, Produto, Divisao;
    int Operacao;

    printf("             Calculadora         \n\n");
    printf("Insira um valor para A: ");
    scanf("%lf", &A);

    printf("Insira um valor para B: ");
    scanf("%lf", &B);

    printf("\nEscolha a operacao: \n");
    printf("1 - Soma\n2 - Diferenca\n3 - Produto\n4 - Divisao\nOpcao: ");
    scanf("%d", &Operacao);
    
    // Switch Case
    switch(Operacao)
    {
        case 1:
        
            Soma = A + B;
            printf("\nResultado: %.2lf", Soma);

        break;

        case 2:
            Diferenca = A - B;
            printf("\nResultado: %.2lf", Diferenca);

        break;

        case 3:
            Produto = A * B;
            printf("\nResultado: %.2lf", Produto);
        break;

        case 4:
            Divisao = A / B;
            printf("Resultado: %.2lf", Divisao);

        default:
            printf("\nOperacao invalida!");
    }

    return 0;
}