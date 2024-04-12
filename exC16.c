#include <stdio.h>
int main(void) {
int idade, nascimento, ano30, atual;
printf("Insira o ano de nascimento: ");
scanf("%d", &nascimento);
printf("Insira o ano atual: ");
scanf("%d",&atual);
idade = atual - nascimento;
ano30 = 2030 - nascimento;
printf("Idade autal: %d\n", idade);
printf("Idade em 2030: %d\n", ano30);

}
