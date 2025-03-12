#include <stdio.h>

int main(void)
{
    int num1, num2, num3, soma;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("O resultado da soma e: %d", soma);

    return 0;
}
