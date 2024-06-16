#include <stdio.h>
#include <stdlib.h>

int main(){
    int segundos, minutos, hora;

    printf("Digite os segundos do cronometro para sabermos os minutos e horas.\n");
    scanf("%d", &segundos);

    hora = segundos / 3660;
    printf("Horas: %d\n", hora);
    segundos = segundos - (3600 * hora);
    minutos = segundos / 60;
    printf("Minutos: %d\n", minutos);
    segundos = segundos - (60 * minutos);
    printf("Segundos: %d\n", segundos);

}