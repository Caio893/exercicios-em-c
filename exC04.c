#include <stdio.h>
int main(void){
    float salario,aumento;
    printf("Insira o salário: ");
    scanf("%f", &salario);
    aumento = salario + (salario * 25/100);
    printf("Novo salário: %.2f \n", aumento);

}
