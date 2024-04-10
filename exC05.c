#include <stdio.h>
int main(void) {
    float salario,aumento,novo_salario,percentual;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    printf("Insira o Percentual de aumento: ");
    scanf("%f",&aumento);
    novo_salario = salario + (salario * aumento/100);
    percentual = salario * aumento/100;
    printf("Valor do aumento %.2f\n", percentual);
    printf("Novo Salário: %.2f\n", novo_salario);
}
