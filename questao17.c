#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, delta, x;

    printf("Digite o valor do coeficiente a: ");
    scanf("%lf", &a);

    if (a == 0)
    {
        printf("Nao e uma equacao de segundo grau.");
    }
    else
    {
        printf("Digite o valor do coeficiente b: ");
        scanf("%lf", &b);
        printf("Digite o valor do coeficiente b: ");
        scanf("%lf", &b);

        delta = pow(b, 2) - 4 * (a * c) * c;

        if (delta < 0)
        {
            printf("Nao existe raiz real.");
        }
        else if (delta == 0)
        {
            printf("Raizes identicas.");
        }
        else
        {
            printf("Existem duas raizes.");
        }
    }

    return 0;
}
