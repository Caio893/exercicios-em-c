#include <stdio.h>
#include <math.h>
int main(void){
    float num, quad, cubo, raizq, raizc;
    printf("Insira um número: ");
    scanf("%f", &num);
    quad = num * num;
    cubo = num * num * num;
    raizq = sqrtf(num);
    raizc = pow(num, 1.0/3.0);

    printf("Quadrado: %f\n", quad);
    printf("Cubo: %f\n", cubo);
    printf("Raiz Quadrada: %f\n", raizq);
    printf("Raiz Cúbica: %f\n", raizc);


}
