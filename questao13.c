#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, hipotenusa;

    printf("Digite o valor do cateto a: ");
    scanf("%lf", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%lf", &b);

    hipotenusa = sqrt((a*b)+(b*b));

    printf("O valor da hipotenusa e: %.2lf\n", hipotenusa);
    
    return 0;
}
