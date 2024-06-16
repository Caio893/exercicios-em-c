#include <stdio.h>
int main(){
    int numero = 1;
    int teste = 0;
    printf("Digite numero positivos para saber o total ou aperte zero para encerrar.\n");

    while (1) {
        printf("Insira um número.\n");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero <=0) {
            continue;
        }
        teste++;
    }
    printf("Quantidade de positivos %d", teste);
    }

    /*Forma mais elegante do Professor
    
    #include <stdio.h>

int main() {
    int num, cont;
    cont = 0;
    
    do {
        printf("Insira um número:\n");
        scanf("%d", &num);
        
        if (num > 0) {
            cont++;
        }
    } while (num != 0);
    
    printf("Quantidade de positivos: %d\n", cont);

    return 0;
}
*/