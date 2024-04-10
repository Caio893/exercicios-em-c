#include <stdio.h>
#define P 3.14
int main(void){
    float raio, area;
    printf("Insira o raio: \n");
    scanf("%f", &raio);
    area = P * raio * raio;
    printf("Área do círculo: %f. \n", area);
}
