#include <stdio.h>
int main(void){
    float deposito,juros,rendimento,total;
    printf("Insira o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Qual é a taxa?\n");
    scanf("%f", &juros);
    rendimento = deposito * (juros/100);
    total = deposito + (deposito * juros/100);
    printf("Redimento: %.2f\n", rendimento);
    printf("Valor total: %.2f\n", total);
}
