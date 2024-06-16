#include <stdio.h>
int main(){
    int a,b,c;
    printf("Digite um numero para saber o fatorial.\n");
    scanf("%d", &a);
    c = 1;
    for (b=a; a>=1; a--) {
        c = c * a;
    }
        printf("%d", c);

}