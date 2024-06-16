#include <stdio.h>

int main(){
    int par;
    printf("Digite um numero para saber se ele é par ou impar.\n");
    scanf("%d", &par);
    if (par % 2 == 0){
        printf("O número que você digitou é PAR");
    }else{
        printf("ÍMPAR");
    }
}