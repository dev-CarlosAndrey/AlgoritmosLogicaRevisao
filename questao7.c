#include <stdio.h>

int main(void)
{
    int numero;

    scanf("%d", &numero);

    printf("Numero sucessor: %d\n", numero + 1);
    printf("Numero antecessor: %d\n", numero - 1);
    
    return 0;
}
