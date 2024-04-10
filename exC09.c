#include <stdio.h>
int main(void){
float base,altura,triangulo;
printf("Insira a base: ");
scanf("%f", &base);
printf("Insira a Altura: ");
scanf("%f", &altura);
triangulo = (base * altura)/2;
printf("Área do trinângulo: %.2f\n", triangulo);

}
