#include <stdio.h>

int main(){
    int num1,tabuada,resultado;
    printf("Digite um numero para saber a tabuada.\n");
    scanf("%d", &num1);
    resultado = 0;
    for (tabuada=0; tabuada < 11; tabuada++) {
        resultado = tabuada * num1;
        printf("%d x %d = %d\n",tabuada,num1, resultado);
    
    }
}