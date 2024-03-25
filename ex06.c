#include <stdio.h>
int main() {
    int num1;
    printf("Digite um numero para sabermos o seus intervalo.");
    scanf("%d", &num1);
    if (num1 >= 10 && num1 <=20)
        printf("%d Está entre o intervalo de 10 a 20!\n", num1);
    else
        printf("%d não está no intervalo de 10 a 20\n", num1);
}