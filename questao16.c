#include <stdio.h>

int main(void)
{
    double salario, prestacaoEmprestimo;
    printf("Digite o valor do seu salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%lf", &prestacaoEmprestimo);

    if (prestacaoEmprestimo > 0.2 * salario)
    {
        printf("Emprestimo nao concedido. \n");
    } else {
        printf("Emprestimo concedido. \n");
    }
    
    return 0;
}