#include <stdio.h>

int main(){
    float m;

    printf("Isira a nota:\n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado(a)!\n");
    }else{
        printf("Não foi aprovado(a)!\n");
    }
}