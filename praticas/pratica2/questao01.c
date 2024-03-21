//1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
#include <stdio.h>
int main(){  
  float a = 1.0;
  float b = 2.0;  
  float c = 3.0;
  float media = (a + b + c) / 3;
  printf("A média aritmética é %f\n", media);
  return 0;
}
