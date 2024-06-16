#include <stdio.h>
int main(){
 float C, B;
 int anos;
 anos = 0;
 C = 140;
 B = 145;
 while(C <= B){
 anos++;
 C += 2.1;
 B += 1.1;
 }
 printf("Serão necessários %d anos.\n", anos);
}
