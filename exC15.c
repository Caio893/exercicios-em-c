#include <stdio.h>
int main(void){
float pes, pol, jar, mil;
printf("Insira a medida em pés: ");
scanf("%f", &pes);
pol = pes * 12;
jar = pes / 3.0;
mil = pes / 5280;
printf("Polegadas: %.2f\n",pol);
printf("Jardas: %.2f\n",jar);
printf("Milhas: %.2f\n",mil);

}
