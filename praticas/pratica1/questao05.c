//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
#include <stdio.h>
int main(){
  int gigabytes = 10;
  int bytes = gigabytes * 1024 * 1024 * 1024;
  printf("1GB = %i bytes\n", bytes);
  return 0;
}
