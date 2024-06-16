#include <stdio.h>
int main(){
    int i,ant1,ant2, atual;
    ant1 = 1;
    ant2 = 0;
    printf("s");
    printf("b");
    printf("a");
    for(i=3; i<=8; i++){
        atual = ant1 + ant2;
        printf("%d", atual);
        ant2 = ant1;
        ant1 = atual;
    }
}