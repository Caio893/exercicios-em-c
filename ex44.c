#include <stdio.h>
#include <math.h>
int main(){
    int numero, potencia, conta,i;
    char resposta;
    do {
        printf("Digite um numero e depois sua potencia.\n");
        printf("Numero\n");
        scanf("%d", &numero);
        printf("Potencia\n");
        scanf("%d", &potencia);

        conta = pow(numero,potencia);

        printf("O resultado é %d\n", conta);
        printf("Digite S para continuar ou N para encerrar.\n");
        scanf("%c", &resposta);
    }while (resposta == 'S' || resposta == 'N');
}

/*#include <stdio.h>
#include <math.h>

int main() {
    int numero, potencia, conta;
    char resposta;

    do {
        printf("Digite um numero e depois sua potencia:\n");
        printf("Numero: ");
        scanf("%d", &numero);

        printf("Potencia: ");
        scanf("%d", &potencia);

        conta = pow(numero, potencia);

        printf("O resultado é %d\n", conta);
        printf("Digite S para continuar ou N para encerrar.\n");

        // Limpar o buffer de entrada antes de ler a resposta
        while (getchar() != '\n');  // Limpa o buffer de entrada

        scanf("%c", &resposta);  // Ler a resposta do usuário

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int main(){
 float A, B, res;
 char op;
 do{
 printf("Insira o primeiro número:\n");
 scanf("%f", &A);
 fflush(stdin);
 printf("Insira o segundo número:\n");
 scanf("%f", &B);
 fflush(stdin);
 res = pow(A, B);
 printf("A elevado a B: %f.\n", res);
 printf("Deseja repetir a operação? (tecle S para s
im)\n");
 scanf("%c", &op);
 fflush(stdin);
 }while(op == 'S' || op == 's');
}
*/