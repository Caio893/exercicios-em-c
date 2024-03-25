#include <stdio.h>
int main() {
    int num1 = 0;
    printf("Digite um numeros para sabermos se ele é multiplo de 5.\n");
    scanf("%d", &num1);
    if (num1 % 5 == 0)
        printf("Seu numero %d é mútiplo de 5\n", num1);
    else
        printf("Seu numero %d não é múltiplo de 5.", num1);
}