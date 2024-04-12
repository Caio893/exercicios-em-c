#include <stdio.h>
int main(void){
    int cem, cinq, vinte, dez, cinco, dois, saque;
    printf("Isira o valor a sacar: ");
    scanf("%d", &saque);
    cem = saque / 100;
    saque = saque % 100;
    cinq = saque / 50;
    saque = saque % 50;
    vinte = saque / 20;
    saque = saque % 20;
    dez = saque / 10;
    saque = saque % 10;
    cinco = saque / 5;
    saque = saque % 5;
    dois = saque / 2;
    saque = saque % 2;

    printf("nº notas R$ 100,00: %d.\n", cem);
    printf("nº notas R$ 50,00: %d.\n", cinq);
    printf("nº notas R$ 20,00: %d.\n", vinte);
    printf("nº notas R$ 10,00: %d.\n", dez);
    printf("nº notas R$ 5,00: %d.\n", cinco);
    printf("nº notas R$ 2,00: %d.\n", dois);


    return 0;

}
