#include <stdio.h>

int main () {
{
float a, b, c;
printf("Digite o primeiro número para sabermos se forma um triangulo\n");
scanf("%f", &a);
printf("Digite o segundo número para sabermos se forma um triangulo\n");
scanf("%f",&b);
printf("Digite o terceiro número para sabermos se forma um triangulo\n");
scanf("%f", &c);

if ((a < b + c) && (b < a+ c) && (c < a + b))
    printf("%.1f, %.1f, %.1f Podem forma um triangulo.\n", a,b,c);
else
    printf("%.1f, %.1f, %.1f Não podem forma um triangulo.\n", a,b,c);
}
return 0;
}