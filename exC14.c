#include <stdio.h>
#include <math.h>
int main(void) {
    double num1,num2,resultado;
    printf("Insira o primeiro número: ");
    scanf("%lf", &num1);
    printf("Insira o segundo número: ");
    scanf("%lf", &num2);
    resultado = pow(num1,num2);
    printf("Resultado: %.2lf\n", resultado);
}
