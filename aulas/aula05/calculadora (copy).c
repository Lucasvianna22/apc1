#include <stdio.h>

int main(){
int numero1;
int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
   deu_certo = scanf("%i", &numero2);
  
  int soma = numero1 + numero2;
 printf("A soma dos numeros e %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtracao dos numeros e %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicacao dos numeros e %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("A divisao dos numeros e %f\n", divisao);

  int resto = numero1 % numero2;  
  printf("O resto da divisao e %i\n", resto);

  //numero1 = numero1 + 1;
  //incremento
  printf("o incremento do primeiro numero e %i\n", numero1++);
    printf("o incremento do primeiro numero e %i\n", ++numero1);
  //numero1 = numero1 - 1;
  //decremento
  printf("o decremento do primeiro numero e %i\n", numero1--);
    printf("o decremento do primeiro numero e %i\n", --numero1);  


return 0;
}