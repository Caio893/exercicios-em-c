#include <stdio.h>

int main(){
 int num1, num2;

 printf("Digite um numero\n");
 scanf("%d", &num1);
 printf("Digite outro numero\n");
 scanf("%d", &num2);
 
 if (num1 == num2) {
    int mult = num1 * num2;
    printf("A multiplicação é de %d", mult); 
 }if (num1 < num2){
    int soma = num1 + num2;
    printf("A soma é de %d", soma);
 }if (num1 > num2){
    int subt = num1 - num2;
    printf("A subtração é de %d", subt);
}
}