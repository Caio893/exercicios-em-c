#include <stdio.h>
int main(void){
    float salario,imposto;
    printf("Insira o salário base: ");
    scanf("%f", &salario);
    imposto = salario + 600 - (salario * 10/100);
    printf("Salário a receber: %.2f\n", imposto);
    return 0;
}
