/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */
  #include <stdio.h>

  int main(){
  float preco_inicial = 100.0f;

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;
    
    float valor_icms = ICMS * preco_inicial;
    float valor_cofins = COFINS * preco_inicial;
    float valor_pis_pasep = PIS_PASEP * preco_inicial;
    
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preço inicial do produto = %f\n", preco_inicial);
  printf("O preço final do produto = %f\n", preco_final);
   printf("O valor do ICMS = %f\n", valor_icms);
    printf("O valor do COFINS = %f\n", valor_cofins);
    printf("O valor do PIS/PASEP = %f\n", valor_pis_pasep);
    printf("O preço final do produto = %f\n", preco_final);
    
  return 0;
  }