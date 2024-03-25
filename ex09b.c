#include <stdio.h>

int main() {
    int numero;

    printf("Entre com um valor: ");
    scanf("%d", &numero);

    if (numero != 0) {
        if (numero % 10 == 0)
            printf("Seu número %d é múltiplo de 10!\n", numero);
        else if (numero % 5 == 0)
            printf("Seu número %d é múltiplo de 5!\n", numero);
        else if (numero % 2 == 0)
            printf("Seu número %d é múltiplo de 2!\n", numero);
        else
            printf("Seu número %d não é múltiplo!\n", numero);
    } else {
        printf("Zero não é múltiplo de nenhum número!\n");
    }

    return 0;
}
/*Neste código, se o número for múltiplo de 10, apenas a primeira mensagem será exibida.
Se não for, mas for múltiplo de 5, apenas a segunda mensagem será exibida, e assim por diante.
Se não for múltiplo de nenhum dos números, a mensagem "Seu número não é múltiplo!" será exibida.
*/