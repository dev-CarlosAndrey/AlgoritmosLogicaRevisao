#include <stdio.h>

int main(void)
{
    double PI = 3.141592;
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A area do circulo e: %.2lf \n", area);
    
    return 0;
}
