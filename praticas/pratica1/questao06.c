//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
#include <stdio.h>
#include <math.h>
int main(){
  float a, b, c;
  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%f", &a);
  printf("Entre com o valor de b: ");
  deu_certo = scanf("%f", &b);
  printf("Entre com o valor de c: ");
  deu_certo = scanf("%f", &c);
  float delta = b * b - 4 * a * c;
  float raiz_quadrada = sqrt(delta);
  float x1 = (-b + raiz_quadrada) / (2 * a);
  float x2 = (-b - raiz_quadrada) / (2 * a);
  printf("As raizes da equacao sao %f\n e %f\n", x1, x2);
  
  
  return 0;
  
}
