#include <stdio.h>
int main(void){
float tempo, hora, minuto;
printf("Insira o tempo em segundos: ");
scanf("%f", &tempo);
hora = tempo / 3600;
minuto = tempo / 60;
printf("Horas : %.2f\n", hora);
printf("Minutos: %.2f\n", minuto);


}
