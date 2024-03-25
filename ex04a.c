#include <stdio.h>
int main(){
    int numero;
    printf("Digite um numero para sabermo o seu sucesso e seu antecessor: ");
    scanf("%d", &numero);
    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("Aqui o resultado, o Antecessor do seu numeoro %d é %d e o sucessor é %d\n", numero, antecessor, sucessor);
}