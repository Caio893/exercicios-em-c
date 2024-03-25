#include <stdio.h>
int main () {
    int num1 = 0;
    printf("Digite um numero para sabermos se ele é múltiplo de 3 e de 7: \n");
    scanf("%d", &num1);
    if (num1 == 0)
        printf("Zero é multiplo de qualquer número. \n");
    else if ((num1 % 3 == 0) && (num1 % 7 == 0))
        printf("O seu numero %d é multiplo de 3 e 7 \n.", num1);
    else
        printf("Seu numero %d não é multiplo de 3 e 7\n", num1);
}