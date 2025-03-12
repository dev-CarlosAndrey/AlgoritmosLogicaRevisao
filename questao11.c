#include <stdio.h>

int main() {
    
    double valorTotal = 780000.00;
    
    double primeiroGanhador = valorTotal * 0.46; 
    double segundoGanhador = valorTotal * 0.32;  
    double terceiroGanhador = valorTotal - primeiroGanhador - segundoGanhador; 
    
    printf("O primeiro ganhador recebera: R$ %.2f\n", primeiroGanhador);
    printf("O segundo ganhador recebera: R$ %.2f\n", segundoGanhador);
    printf("O terceiro ganhador recebera: R$ %.2f\n", terceiroGanhador);

    return 0;
}
