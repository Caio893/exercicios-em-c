#include <stdint.h>
int main(){
    int a,b,i;
    printf("Digite um número.\n");
    scanf("%d", &a);
    printf("Digite um numero maior que o primeiro.\n");
    scanf("%d", &b);
    i = a+1;

    for (i; i < b; i++) {
        printf("%d ", i);
    
    }
}