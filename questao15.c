#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }
    
    return 0;
}
