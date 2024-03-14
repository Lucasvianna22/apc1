#include <stdio.h>

int main() {

  printf("\x1b[31m------------------------------\n");
  printf("   N O T A L E G A L ʕ•́ᴥ•̀ʔっ  \n");
  printf("------------------------------\n\x1b[0m");
  printf("\x1b[35mITEM           QTD    VALOR   \n");
  printf("%-13s %3i %8.2f\n", "banana nanica", 1,15.00);
  printf("%-13s %3i %8.2f\n", "cigarro", 3,10.00);
  printf("%-13s %3i %8.2f\n", "cerveja", 2,5.00);
  //printf(" Biscoito    1       R$ 2,00\n");
 // printf("Pizza        1        R$ 50,00\n");
 // printf("Cerveja      1        R$ 4,50\n");
 // printf("cigarro      1        R$ 3,00\n");
 // printf("------------------------------\n");
 printf("TOTAL......:    6    R$ 30\n\x1b[0m");
  
  return 0;
}