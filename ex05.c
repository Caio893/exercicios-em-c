#include <stdio.h>
int main () {
    int num1, num2;
    printf("Entre com um valor: ");
    scanf("%d", &num1);
    printf("Entre com um valor: ");
    scanf("%d", &num2);
    if (num1 == num2)
        printf("São iguais!");
    else
        printf("São diferentes!");
}