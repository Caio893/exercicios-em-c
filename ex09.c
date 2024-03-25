#include <stdio.h>
main () {
    int numero;
    printf("Entre com um valor\n");
    scanf("%d", &numero);
    if ((numero % 2 == 0) || (numero % 5 == 0) || (numero % 10 == 0))
        printf("Seu numero é multiplo!\n", numero);
    else
        printf("Seu numero não é multiplo!\n", numero);
    
    return 0;
}

//Chatgpt recomendou numero != 0 &&... na linha do if para possivel erro de 0 for o numero da divisão.

/*Aqui é uma forma de comentário em blocos inteiros*/