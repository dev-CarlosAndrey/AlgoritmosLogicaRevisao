#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0/5.0) + 32.0;

    printf("Essa temperatura em Farenheit e: %.2f", fahrenheit);

    return 0;
}
