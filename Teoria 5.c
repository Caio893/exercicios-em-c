#include <stdio.h>
int main(){
    int A,B,soma,mult,subtr,divis;

    printf("Digite o primeiro valor");
    scanf("%d", &A);
    printf("Digite o segundo valor");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Os resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtração.: %d.\n", subtr);
    printf("Multiplicação.: %d.\n", mult);
    printf("Divisão:.%d\n", divis);
}