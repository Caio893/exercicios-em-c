#include <stdio.h>
int main(){
    int num,soma,acumulador = 0;
    for (num=1; num <=10; num++) {
        soma = acumulador += num;
    }
    printf("%d ", soma);
}