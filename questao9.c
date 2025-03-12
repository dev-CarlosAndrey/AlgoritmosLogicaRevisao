#include <stdio.h>

int main(void)
{
    float valor1, valor2, valor3, valor4, media;

    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);
    scanf("%f", &valor4);

    media = (valor1+valor2+valor3+valor4) / 4;

    printf("A media aritmetica dos valores digitados e: %.2f", media);

    return 0;
}
