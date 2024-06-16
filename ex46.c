    #include <stdio.h>
    int main(){
        int tabuada = 0,resultado;
        int numero1 = 1,numero2 = 2,numero3 = 3,numero4 = 4,numero5 = 5,numero6 = 6,numero7 = 7,numero8 = 8,numero9 = 9,numero10 = 10;
        do {
        resultado = (tabuada * numero1);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero2);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero3);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero4);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero5);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero6);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero7);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero8);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero9);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);
        resultado = (tabuada * numero10);
        printf("%d * %d = %d\n", tabuada, numero1, resultado);

        tabuada++;
        }while (tabuada <= 10);
    }

    /*#include <stdio.h>

int main() {
    int i, j, res;
    i = 1;
    while (i <= 10) {
        j = 1;
        while (j <= 10) {
            res = i * j;
            printf("%d x %d = %d\n", i, j, res);
            j++;
        }
        printf("\n\n");
        i++;
    }
}
*/