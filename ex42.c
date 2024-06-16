#include <stdio.h>

int main(){
    float salario_inicial = 1000,aumento = 1.5;
    int ano = 2015,ano_atual;
    printf("Qual é o ano atual. \n");
    scanf("%d", &ano_atual);
    
    for (ano=2016; ano <= ano_atual; ano++) {
        salario_inicial += (salario_inicial * (aumento/100));
        aumento*=2;
    }

    printf("%.2f", salario_inicial);
}