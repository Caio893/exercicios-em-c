#include <stdio.h>

int main() {
    int num1,num2;
    printf("Digite dois numeros.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("Nume %d é mais que %d", num1, num2);
    }else if (num1 < num2) {
        printf("Numero %d é maior que %d", num2, num1);
    }else {
        printf("Os numero são iguais.\n");
    }
}