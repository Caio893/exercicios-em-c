#include <stdio.h>
int main(void) {
    float salario,salario2;
    printf("Insira o salário base: \n");
    scanf("%f", &salario);
    salario2 = salario - (salario * 7/100) + (salario * 5/100);
    printf("Salário a receber: %.2f\n", salario2);

}
