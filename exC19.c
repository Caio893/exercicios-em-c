#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Insira 3 numeros MAS O PRIMEIRO PRECISA SER O MAIOR!!.\n");
    printf("Digite o Primeiro Número.\n");
    scanf("%d", &num1);
    printf("Digite o Segundo Número.\n");
    scanf("%d", &num2);
    printf("Digite o terceiro número.\n");
    scanf("%d", &num3);

    if (num1 <= num2 || num1 <= num3) {
        printf("ERRO.\n");
    }else{
        printf("Condição Satisfeita.\n");
    }


}